package main

import (
	"encoding/json"
	"fmt"
	"io/ioutil"
	"math/rand"
	"os"
	"path/filepath"
	"runtime"
	"strconv"
	"strings"
)

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

type TestSet struct {
	SetName          string      `json:"setName"`
	RandomBehaviour  bool        `json:"randomBehaviour"`
	GenerateMakefile bool        `json:"generateMakefile"`
	CompilerFlags    string      `json:"compilerFlags"`
	CompilationTimes int         `json:"compilationTimes"`
	TimeFlags        string      `json:"timeFlags"`
	TimedCompilation bool        `json:"timedCompilation"`
	ResultFormat     string      `json:"resultFormat"`
	Tests            []TestEntry `json:"tests"`
}

// this is the actual test set object
var testSet TestSet

// the map which maps the name of a test case from the json file to a go function
var funcMap = map[string]interface{}{
	"parameterCountInFunctionDefinition":                       parameterCountInFunctionDefinition,
	"nestingLevelsOfParenthesizedExpressionsInAFullExpression": nestingLevelsOfParenthesizedExpressionsInAFullExpression,
	"staticDataMemberOfClass":                                  staticDataMemberOfClass,
	"directBaseClassesOfClass":                                 directBaseClassesOfClass,
}

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

//
// Function generating code for the individual tests
//

//
// (2.11) Parameters in one function definition ([dcl.fct.def.general]) [256] and
// (2.10) Arguments in one function call ([expr.call]) [256].
//
func parameterCountInFunctionDefinition(count string) string {

	requiredParameterCount, _ := strconv.Atoi(count)
	content := iostream

	var funContent string = "static int test ("

	// Build the definition of the CPP function
	for i := 0; i < requiredParameterCount; i++ {
		funContent += cppPrimitiveTypes[i%len(cppPrimitiveTypes)].name

		funContent += " p" + strconv.Itoa(i)
		if i < requiredParameterCount-1 {
			funContent += ", "
		} else {
			funContent += ")"
		}
	}

	// create the body for it
	funContent += "\n"

	funContent += "{\n\treturn "
	for i := 0; i < requiredParameterCount; i++ {
		funContent += "static_cast<int>(" + "p" + strconv.Itoa(i) + ")"
		if i < requiredParameterCount-1 {
			funContent += " + "
		} else {
			funContent += ";"
		}
	}
	funContent += "\n}"

	// generate the arguments as local (volatile) variables
	funContent += "\nint main() {\n"
	for i := 0; i < requiredParameterCount; i++ {
		idx := i % len(cppPrimitiveTypes)
		funContent += "\tvolatile " + cppPrimitiveTypes[idx].name + " arg" + strconv.Itoa(i) + " = " + oneAsType(idx) + ";\n"
	}
	// and call the function
	funContent += "\n\tint v = test("
	for i := 0; i < requiredParameterCount; i++ {
		funContent += "arg" + strconv.Itoa(i)
		if i < requiredParameterCount-1 {
			funContent += ", "
		} else {
			funContent += ");\n"
		}
	}
	funContent += "\tstd::cout << v << std::endl; \n\treturn 0;\n}\n"

	data := content + funContent

	fileName := getFileName(trace(), count)
	f, err := os.Create(fileName)
	check(err)
	defer f.Close()

	f.WriteString(data)
	fmt.Println("Wrote:", fileName)
	return fileName
}

//
// (2.4) Nesting levels of parenthesized expressions ([expr.prim.paren]) within a full-expression [256].
//
func nestingLevelsOfParenthesizedExpressionsInAFullExpression(count string) string {
	requiredNestingLevel, _ := strconv.Atoi(count)
	currentNestingLevel := 1
	operation := "(v0 + v1)"
	i := 2
	for currentNestingLevel < requiredNestingLevel {
		operation = "(" + operation + " * v" + strconv.Itoa(i) + " + v" + strconv.Itoa(i+1) + ")"
		i += 2
		currentNestingLevel++
	}

	content := iostream
	content += "\nint main() {\n"
	for i := 0; i < requiredNestingLevel*2; i++ {
		content += "\tvolatile int v" + strconv.Itoa(i) + " = 1;\n"
	}

	content += "\nint v = " + operation + ";\n"
	content += "\tstd::cout << v << std::endl;\n\treturn 0;}"
	fileName := getFileName(trace(), count)
	f, err := os.Create(fileName)
	check(err)
	defer f.Close()

	f.WriteString(content)
	fmt.Println("Wrote:", fileName)

	return fileName
}

//
// Static data members of a class ([class.static.data]) [1 024].
//
func staticDataMemberOfClass(count string) string {
	requiredMemberCount, _ := strconv.Atoi(count)
	classContent := "class TestClass {\npublic:\n"

	for i := 0; i < requiredMemberCount; i++ {
		idx := i % len(cppPrimitiveTypes)
		classContent += "\tstatic " + cppPrimitiveTypes[idx].name + " m_member" + strconv.Itoa(i) + ";\n"
	}

	classContent += "\n};\n"

	// generate code to initialize the static members
	for i := 0; i < requiredMemberCount; i++ {
		idx := i % len(cppPrimitiveTypes)
		classContent += "\t" + cppPrimitiveTypes[idx].name + " TestClass::m_member" + strconv.Itoa(i) + " = " + oneAsType(idx) + ";\n"
	}

	fileName := getFileName(trace(), count)

	f, err := os.Create(fileName)
	check(err)
	defer f.Close()

	mainContent := "\nint main() {\n\tTestClass tc; int v = 0;"

	for i := 0; i < requiredMemberCount; i++ {
		mainContent += "v += tc.m_member" + strconv.Itoa(i) + ";\n"
	}
	mainContent += "std::cout << v << std::endl;\n"

	mainContent += "\n}\n"

	content := iostream + classContent + mainContent

	f.WriteString(content)
	fmt.Println("Wrote:", fileName)

	return fileName
}

//
// (2.27) Direct base classes for a single class ([class.derived]) [1 024]
//
func directBaseClassesOfClass(count string) string {
	// Let's generate "count" classes and a derived one
	requiredBaseCnt, _ := strconv.Atoi(count)

	content := "static int ctr = 0;\n"
	for i := 0; i < requiredBaseCnt; i++ {
		content += "class Base" + strconv.Itoa(i) + " {\npublic:\n\tBase" + strconv.Itoa(i) + "() : m_i" + strconv.Itoa(i) + "(ctr ++) {" +
			"\n\t\tstd::cout << m_i" + strconv.Itoa(i) + " << std::endl;\n\t}\n" +
			"\tint m_i" + strconv.Itoa(i) + ";\n};\n\n"
	}

	content += "class Derived : "
	for i := 0; i < requiredBaseCnt; i++ {
		content += "public Base" + strconv.Itoa(i)
		if i < requiredBaseCnt-1 {
			content += ", "
		}
	}

	content += "\n{\npublic:\n\tDerived() : m_i("
	for i := 0; i < requiredBaseCnt; i++ {
		content += "Base" + strconv.Itoa(i) + "::m_i" + strconv.Itoa(i)
		if i < requiredBaseCnt-1 {
			content += " + "
		}
	}

	content += ") {}\n\tint m_i;};"

	mainContent := "\nint main() {\n\t Derived d; std::cout << d.Derived::m_i << std::endl; }"

	fmt.Println(content)

	fileName := getFileName(trace(), count)
	f, err := os.Create(fileName)
	check(err)
	defer f.Close()
	f.WriteString(iostream + content + mainContent)

	return fileName
}

//
// Main
//
func main() {
	dat, err := ioutil.ReadFile("/home/fld/work/p/cpp-stresstest/testset.json")
	check(err)
	jsonErr := json.Unmarshal(dat, &testSet)
	if jsonErr != nil {
		fmt.Println("error:", err)
		panic(jsonErr)
	}

	makefileHeader := "CXX=g++\nCXXFLAGS=" + testSet.CompilerFlags + "\n\n"
	makefileContent := ""

	//fmt.Printf("Tests: %+v ", testSet)

	// create the directory for this test set
	dir, _ := os.Getwd()
	os.RemoveAll(dir + "/" + testSet.SetName)
	err = os.Mkdir(dir+"/"+testSet.SetName, 0777)
	check(err)

	all := "all: "
	clean := "clean: \n"

	for i := 0; i < len(testSet.Tests); i++ {
		if testSet.Tests[i].Run {
			for cnt := 0; cnt < len(testSet.Tests[i].Count); cnt++ {
				currentCount := testSet.Tests[i].Count[cnt]
				fileName := funcMap[testSet.Tests[i].TestName].(func(string) string)(currentCount)
				if testSet.GenerateMakefile {
					fileName := filepath.Base(fileName)

					makefileContent += testSet.Tests[i].TestName + "-" + currentCount + ": " + fileName + "\n"
					if testSet.CompilationTimes > 1 {
						if testSet.TimedCompilation {
							if testSet.ResultFormat == "XML" {
								makefileContent += "\t@echo '<test name=\"" + testSet.Tests[i].TestName + "-" + currentCount + "\">';\\\n"
							} else {
								makefileContent += "\t@echo " + testSet.Tests[i].TestName + "-" + currentCount + ";\\\n"
							}
						}
						makefileContent += "\tnumber=1 ; for number in "
						for c := 1; c <= testSet.CompilationTimes; c++ {
							makefileContent += strconv.Itoa(c) + " "
						}
						makefileContent += "; do \\\n\t\t"
						if testSet.TimedCompilation {
							makefileContent += "/usr/bin/time " + testSet.TimeFlags + " "
						}
						makefileContent += "$(CXX) $(CXXFLAGS) -o " + testSet.Tests[i].TestName + "-" + currentCount + " " + fileName + "; \\\n\tdone"
						if testSet.TimedCompilation {
							if testSet.ResultFormat == "XML" {
								makefileContent += "\\\n\techo '</test>';"
							}
						}
						makefileContent += "\n"
					} else {
						makefileContent += "\t"
						if testSet.TimedCompilation {
							makefileContent += "/usr/bin/time " + testSet.TimeFlags + " "
						}
						makefileContent += "$(CXX) $(CXXFLAGS) -o " + testSet.Tests[i].TestName + "-" + currentCount + " " + fileName + "\n\n"
					}
					all += testSet.Tests[i].TestName + "-" + currentCount + " "

					clean += "\trm " + testSet.Tests[i].TestName + "-" + currentCount + "\n"
				}
			}
		}
	}

	if testSet.GenerateMakefile {
		makefileName := dir + "/" + testSet.SetName + "/Makefile"
		f, err := os.Create(makefileName)
		check(err)
		defer f.Close()

		f.WriteString(makefileHeader + "\n" + all + "\n\n" + makefileContent + "\n\n" + clean + "\n")
	}
}
