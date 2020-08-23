package main

import (
	"fmt"
	"math/rand"
	"os"
	"os/exec"
	"path/filepath"
	"runtime"
	"strconv"
	"strings"
)

// just a simple association of types to max/min values
type cppType struct {
	name     string
	minValue int
	maxValue int
}

var cppPrimitiveTypes = [...]cppType{
	{name: "short int", minValue: -32768, maxValue: 32768},             // 0
	{name: "unsigned short int", minValue: 0, maxValue: 65535},         // 1
	{name: "unsigned int", minValue: 0, maxValue: 4294967295},          // 2
	{name: "int", minValue: -2147483648, maxValue: 2147483647},         // 3
	{name: "long int", minValue: -2147483648, maxValue: 2147483647},    // 4
	{name: "unsigned long int", minValue: 0, maxValue: 4294967295},     // 5
	{name: "signed char", minValue: -127, maxValue: 127},               // 8
	{name: "unsigned char", minValue: 0, maxValue: 255},                // 9
	{name: "float", minValue: -2147483648, maxValue: 2147483647},       // 10
	{name: "double", minValue: -2147483648, maxValue: 2147483647},      // 11
	{name: "long double", minValue: -2147483648, maxValue: 2147483647}} // 12

// These structures represent a test set that is being loaded from th json file
type TestEntry struct {
	TestName    string   `json:"testName"`
	Count       []string `json:"count"`
	Minimum     string   `json:"minimum"`
	Run         bool     `json:"run"`
	Description string   `json:"desription"`
}

// represents a test set as loaded from the json file
type TestSet struct {
	SetName               string      `json:"setName"`
	RandomBehaviour       bool        `json:"randomBehaviour"`
	GenerateMakefile      bool        `json:"generateMakefile"`
	GenerateCMakeListsTxt bool        `json:"generateCMakeListsTxt"`
	CompilerFlags         string      `json:"compilerFlags"`
	CompilationTimes      int         `json:"compilationTimes"`
	TimeFlags             string      `json:"timeFlags"`
	TimedCompilation      bool        `json:"timedCompilation"`
	ResultFormat          string      `json:"resultFormat"`
	Compiler              string      `json:"compiler"`
	Tests                 []TestEntry `json:"tests"`
}

// a binary tree structure, for some of the tests that generate a class hierarchy
type treeNode struct {
	left  *treeNode
	right *treeNode
	data  string
}

// this is the actual test set object
var testSet TestSet

// some constants
const iostream = "#include <iostream>\n\n"

//
// utility functions
//
func trace() string {
	pc := make([]uintptr, 10) // at least 1 entry needed
	runtime.Callers(2, pc)
	f := runtime.FuncForPC(pc[0])
	var fn = f.Name()
	var dotIndex = strings.Index(fn, ".")
	if dotIndex != -1 {
		fn = fn[dotIndex+1:]
	}
	return fn
}

func check(e error) {
	if e != nil {
		panic(e)
	}
}

func oneAsType(idx int) string {
	var num int
	if testSet.RandomBehaviour {
		num = rand.Intn(cppPrimitiveTypes[idx].maxValue-cppPrimitiveTypes[idx].minValue) + cppPrimitiveTypes[idx].minValue
	} else {
		num = 1
	}

	if idx >= 8 {
		return strconv.Itoa(num) + ".0"
	}
	return strconv.Itoa(num)
}

func getFileName(fn string, count string) string {
	dir, _ := os.Getwd()
	return dir + "/" + testSet.SetName + "/" + fn + "-" + count + ".cpp"
}

func writeTestFile(funName, count, content string) string {
	fileName := getFileName(funName, count)
	f, err := os.Create(fileName)
	check(err)
	defer f.Close()

	f.WriteString(content)
	return fileName
}

func repeat(what string, times int) string {
	result := ""
	for i := 0; i < times; i++ {
		result += what
	}
	return result
}

func atexitHelper(count, funcname string) string {
	content := iostream
	requiredCount, _ := strconv.Atoi(count)
	for i := 1; i <= requiredCount; i++ {
		content += "\nvoid handler" + strconv.Itoa(i) + "() {\n\tstd::cout << \".\"  "
		if funcname == "at_quick_exit" {
			content += "<< std::endl"
		}
		content += ";\n}"
	}

	content += "\nint main() {"
	for i := 1; i <= requiredCount; i++ {
		ci := strconv.Itoa(i)
		content += "\n\tconst int r" + ci + " = std::" + funcname + "(handler" + ci + ");"
		content += "\n\tif(r" + ci + " != 0) {"
		content += "\n\t\tstd::cout << " + strconv.Itoa(i-1) + " << std::endl;"
		content += "\n\t\treturn EXIT_FAILURE;"
		content += "\n\t}"
	}

	content += "\n\tstd::cout << " + count + " <<std::endl;\n\t"
	return content
}

func generateChildrensForNode(node *treeNode, currentLevel int, maxLevel int, totalCounter *int, currentName string) (*treeNode, *treeNode) {
	//onCurrentLevel := int( math.Pow(2, float64(currentLevel- 1)) )

	*totalCounter += 2

	leftName := currentName + "L" + strconv.Itoa(currentLevel)
	rightName := currentName + "R" + strconv.Itoa(currentLevel)

	node.left = &treeNode{nil, nil, leftName}
	node.right = &treeNode{nil, nil, rightName}

	if currentLevel < maxLevel {
		generateChildrensForNode(node.left, currentLevel+1, maxLevel, totalCounter, leftName)
		generateChildrensForNode(node.right, currentLevel+1, maxLevel, totalCounter, rightName)
	}

	return node.left, node.right
}

func generateClassHierarchy(node *treeNode, classContent *string, caller string, generatedNames *[]string, virtual bool) {
	if node.left != nil {
		generateClassHierarchy(node.left, classContent, caller, generatedNames, virtual)
	}

	if node.right != nil {
		generateClassHierarchy(node.right, classContent, caller, generatedNames, virtual)
	}

	*classContent += "class " + node.data

	if node.left != nil || node.right != nil {
		*classContent += " : "
	}

	if node.left != nil {
		*classContent += "public "
		if virtual {
			*classContent += " virtual "
		}
		*classContent += node.left.data
	}
	if node.right != nil {
		*classContent += ", public "
		if virtual {
			*classContent += "virtual "
		}
		*classContent += node.right.data
	}

	if caller == "directAndIndirectBaseClassesOfClass" || caller == "directAndIndirectVirtualBaseClassesOfClass" {
		*classContent += "\n{\npublic: \n\t" + node.data + "() : m_i(ctr ++) { std::cout << m_i << std::endl; }\nprivate:\n\tint m_i;\n};\n\n"
	} else if caller == "finalOverridingVirtualFunctions" {
		runes := []rune(node.data)
		cloc := string(runes[4:])
		name := "func" + cloc
		*generatedNames = append(*generatedNames, name)
		*classContent += "\n{\npublic: \n\t" + node.data + "() = default;\n\n\tvirtual int func" + cloc + "() = 0;\n};\n\n"
	}
}

func generateClassHierarchyWitClasses(count string, virtual bool, testname string) string {
	requiredBaseCnt, _ := strconv.Atoi(count)
	saveBaseCnt := requiredBaseCnt

	maxLevel := 0
	for requiredBaseCnt > 1 {
		requiredBaseCnt /= 2
		maxLevel += 1
	}

	root := &treeNode{nil, nil, "Base"}
	totalCounter := 1

	generateChildrensForNode(root, 1, maxLevel-1, &totalCounter, root.data)

	classContent := "static int ctr = 0;\n"

	generateClassHierarchy(root, &classContent, testname, &[]string{}, virtual)

	publist := ""

	// now generate a few classes to fill the gap between the totally generated classes (totalCounter) and the actual required classes
	for i := 0; i < saveBaseCnt-totalCounter; i++ {
		classContent += "class Base" + strconv.Itoa(i) + " {\npublic:\n\tBase" +
			strconv.Itoa(i) + "() : m_i" + strconv.Itoa(i) + "(ctr ++) {" +
			"\n\t\tstd::cout << m_i" + strconv.Itoa(i) + " << std::endl;\n\t}\n" +
			"\tint m_i" + strconv.Itoa(i) + ";\n};\n\n"

		publist += ", "
		if virtual {
			publist += "virtual "
		}
		publist += "public Base" + strconv.Itoa(i)
	}

	classContent += "class Derived : "
	if virtual {
		classContent += "virtual "
	}
	classContent += "public Base" + publist + "\n{\npublic:\n\tDerived() : m_i(ctr) {}\n\tint m_i;\n};\n"
	mainContent := "\nint main() {\n\tDerived d; std::cout << d.m_i << std::endl;\n}\n"

	return writeTestFile(testname, count, iostream+classContent+mainContent)
}

func writeHeaderFile(count int, content string) {
	dir, _ := os.Getwd()
	fileName := dir + "/" + testSet.SetName + "/inc/header" + strconv.Itoa(count) + ".h"
	filePath, _ := filepath.Abs(fileName)
	path := filepath.Dir(filePath)
	if _, err := os.Stat(path); os.IsNotExist(err) {
		os.Mkdir(path, os.ModePerm)
	}

	f, err := os.Create(filePath)
	check(err)
	defer f.Close()

	f.WriteString(content)
}

func Start(compiler string, args ...string) (p *os.Process, err error) {
	if compiler, err = exec.LookPath(compiler); err == nil {
		var procAttr os.ProcAttr
		procAttr.Files = []*os.File{os.Stdin,
			os.Stdout, os.Stderr}
		p, err := os.StartProcess(compiler, args, &procAttr)
		if err == nil {
			return p, nil
		}
	}
	return nil, err
}

func compile(args ...string) bool {

	fmt.Println(args, " ")
	if proc, err := Start(testSet.Compiler, args...); err == nil {
		proc.Wait()
		return true
	}
	fmt.Println("bad bad ")
	return false
}
