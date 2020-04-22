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
	SetName               string      `json:"setName"`
	RandomBehaviour       bool        `json:"randomBehaviour"`
	GenerateMakefile      bool        `json:"generateMakefile"`
	GenerateCMakeListsTxt bool        `json:"generateCMakeListsTxt"`
	CompilerFlags         string      `json:"compilerFlags"`
	CompilationTimes      int         `json:"compilationTimes"`
	TimeFlags             string      `json:"timeFlags"`
	TimedCompilation      bool        `json:"timedCompilation"`
	ResultFormat          string      `json:"resultFormat"`
	Tests                 []TestEntry `json:"tests"`
}

// this is the actual test set object
var testSet TestSet

// the map which maps the name of a test case from the json file to a go function
var funcMap = map[string]interface{}{
	"parameterCountInFunctionDefinition":                       parameterCountInFunctionDefinition,
	"nestingLevelsOfParenthesizedExpressionsInAFullExpression": nestingLevelsOfParenthesizedExpressionsInAFullExpression,
	"staticDataMemberOfClass":                                  staticDataMemberOfClass,
	"directBaseClassesOfClass":                                 directBaseClassesOfClass,
	"macroCountInOneTranslationUnit":                           macroCountInOneTranslationUnit,
	"directAndIndirectBaseClassesOfClass":                      directAndIndirectBaseClassesOfClass,
	"parametersInMacroDefinition":                              parametersInMacroDefinition,
	"caseLabelsForSwitch":                                      caseLabelsForSwitch,
	"nonStaticDataMembersOfClass":                              nonStaticDataMembersOfClass,
	"enumerationConstantsInEnum":                               enumerationConstantsInEnum,
	"friendsOfAClass":                                          friendsOfAClass,
	"nestingOfStatements":                                      nestingOfStatements,
	"nestingOfClasses":                                         nestingOfClasses,
	"accessControlDeclarationsInClass":                         accessControlDeclarationsInClass,
	"pointerAndArrayDeclaratorsModifyingSomething":             pointerAndArrayDeclaratorsModifyingSomething,
	"nestingLevelOfConditionalInclusion":						nestingLevelOfConditionalInclusion,
	"structureBindingsInOneDeclaration":						structureBindingsInOneDeclaration,
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

func writeTestFile(funName, count, content string) string {
	fileName := getFileName(funName, count)
	f, err := os.Create(fileName)
	check(err)
	defer f.Close()

	f.WriteString(content)
	fmt.Println("Wrote:", fileName)
	return fileName
}

func repeat(what string, times int) string {
	result := ""
	for i := 0; i < times; i++ {
		result += what
	}
	return result
}

//
// Function generating code for the individual tests
//

//
// (2.11) Parameters in one function definition ([dcl.fct.def.general]) [256] and
// (2.10) Arguments in one function call ([expr.call]) [256].
// (2.8) Identifiers with block scope declared in one block ([basic.scope.block]) [1 024].
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

	return writeTestFile(trace(), count, content+funContent)
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

	return writeTestFile(trace(), count, content)
}

//
// (2.31) Static data members of a class ([class.static.data]) [1 024].
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

	mainContent := "\nint main() {\n\tTestClass tc; int v = 0;"
	for i := 0; i < requiredMemberCount; i++ {
		mainContent += "v += tc.m_member" + strconv.Itoa(i) + ";\n"
	}
	mainContent += "std::cout << v << std::endl;\n"
	mainContent += "\n}\n"

	content := iostream + classContent + mainContent

	return writeTestFile(trace(), count, content)
}

//
// (2.20) Non-static data members (including inherited ones) in a single class ([class.mem]) [16 384]
//
func nonStaticDataMembersOfClass(count string) string {
	requiredMemberCount, _ := strconv.Atoi(count)
	classContent := "class TestClass {\npublic:\n"

	for i := 0; i < requiredMemberCount; i++ {
		idx := i % len(cppPrimitiveTypes)
		classContent += "\t" + cppPrimitiveTypes[idx].name + " m_member" + strconv.Itoa(i) + " = " + oneAsType(idx) + ";\n"
	}

	classContent += "\n};\n"

	mainContent := "\nint main() {\n\tTestClass tc; int v = 0;"
	for i := 0; i < requiredMemberCount; i++ {
		mainContent += "v += tc.m_member" + strconv.Itoa(i) + ";\n"
	}
	mainContent += "std::cout << v << std::endl;\n"
	mainContent += "\n}\n"

	content := iostream + classContent + mainContent

	return writeTestFile(trace(), count, content)
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

	mainContent := "\nint main() {\n\t Derived d; std::cout << d.Derived::m_i << std::endl;\n}\n"

	return writeTestFile(trace(), count, iostream+content+mainContent)
}

//
// (2.10) Macro identifiers ([cpp.replace]) simultaneously defined in one translation unit [65 536].
//
func macroCountInOneTranslationUnit(count string) string {

	requiredMacroCnt, _ := strconv.Atoi(count)

	content := iostream + "\n#define V0 1\n"

	for i := 1; i < requiredMacroCnt; i++ {
		content += "#define V" + strconv.Itoa(i) + " V" + strconv.Itoa(i-1) + " + 1\n"
	}

	content += "\nint main() { std::cout << V" + strconv.Itoa(requiredMacroCnt-1) + "<< std::endl;\n}\n"

	return writeTestFile(trace(), count, content)
}

//
// (2.26) Direct and indirect base classes ([class.derived]) [16 384]
//

type treeNode struct {
	left  *treeNode
	right *treeNode
	data  string
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

func generateClassHierarchy(node *treeNode, classContent *string) {
	if node.left != nil {
		generateClassHierarchy(node.left, classContent)
	}

	if node.right != nil {
		generateClassHierarchy(node.right, classContent)
	}

	*classContent += "class " + node.data

	if node.left != nil || node.right != nil {
		*classContent += " : "
	}

	if node.left != nil {
		*classContent += "public " + node.left.data
	}
	if node.right != nil {
		*classContent += ", public " + node.right.data
	}

	*classContent += "\n{\npublic: \n\t" + node.data + "() : m_i(ctr ++) { std::cout << m_i << std::endl; }\nprivate:\n\tint m_i;\n};\n\n"
}

func directAndIndirectBaseClassesOfClass(count string) string {
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

	generateClassHierarchy(root, &classContent)

	publist := ""

	// now generate a few classes to fill the gap between the totally generated classes (totalCounter) and the actual required classes
	for i := 0; i < saveBaseCnt-totalCounter; i++ {
		classContent += "class Base" + strconv.Itoa(i) + " {\npublic:\n\tBase" + strconv.Itoa(i) + "() : m_i" + strconv.Itoa(i) + "(ctr ++) {" +
			"\n\t\tstd::cout << m_i" + strconv.Itoa(i) + " << std::endl;\n\t}\n" +
			"\tint m_i" + strconv.Itoa(i) + ";\n};\n\n"

		publist += ", public Base" + strconv.Itoa(i)
	}

	classContent += "class Derived : public Base" + publist + "\n{\npublic:\n\tDerived() : m_i(ctr) {}\n\tint m_i;\n};\n"
	mainContent := "\nint main() {\n\tDerived d; std::cout << d.m_i << std::endl;\n}\n"

	return writeTestFile(trace(), count, iostream+classContent+mainContent)
}

//
// (2.13) Parameters in one macro definition ([cpp.replace]) [256] and (2.14) Arguments in one macro invocation ([cpp.replace]) [256].
//
func parametersInMacroDefinition(count string) string {
	requiredBaseCnt, _ := strconv.Atoi(count)

	content := "#define M("

	for i := 0; i < requiredBaseCnt; i++ {
		content += "p" + strconv.Itoa(i)
		if i < requiredBaseCnt-1 {
			content += ", "
		} else {
			content += ") "
		}
	}
	for i := 0; i < requiredBaseCnt; i++ {
		content += "p" + strconv.Itoa(i)
		if i < requiredBaseCnt-1 {
			content += "+"
		}
	}

	content += "\nint main() {\n\t int v = M("

	for i := 0; i < requiredBaseCnt; i++ {
		content += "1"
		if i < requiredBaseCnt-1 {
			content += ", "
		} else {
			content += ");\n\tstd::cout << v << std::endl;\n}\n"
		}
	}

	return writeTestFile(trace(), count, iostream+content)
}

//
// (2.19) Case labels for a switch statement ([stmt.switch]) (excluding those for any nested switch statements) [16 384].
//
func caseLabelsForSwitch(count string) string {
	requiredLabelCnt, _ := strconv.Atoi(count)

	content := "\n#include<cstdlib>\n\nint main() {\n\tsrand(time(NULL));\tint v = rand() % " + count + " + 1;\n\tswitch(v) {\n"
	for i := 0; i < requiredLabelCnt; i++ {
		content += "\t\tcase " + strconv.Itoa(i) + ": std::cout << " + strconv.Itoa(i*i) + " << std::endl; break;\n"
	}
	content += "}\n}\n"

	return writeTestFile(trace(), count, iostream+content)
}

//
// (2.22) Enumeration constants in a single enumeration ([dcl.enum]) [4 096].
//
func enumerationConstantsInEnum(count string) string {
	requiredEnumCnt, _ := strconv.Atoi(count)

	content := "\n#include<cstdlib>\n\n enum Stuff {"
	for i := 0; i < requiredEnumCnt; i++ {
		content += "\t\tV" + strconv.Itoa(i) + " = " + strconv.Itoa(i) + ",\n"
	}

	content += "};\nint main() {\nStuff v = V" + strconv.Itoa(rand.Intn(requiredEnumCnt))
	content += ";\nstd::cout << v << std::endl;\n}\n"

	return writeTestFile(trace(), count, iostream+content)
}

//
// (2.32) Friend declarations in a class ([class.friend]) [4 096].
//
func friendsOfAClass(count string) string {

	requiredFriendCnt, _ := strconv.Atoi(count)
	friendClassCount := requiredFriendCnt / 2
	friendFunctionCount := requiredFriendCnt / 2

	// make it whole again in case if odd number
	friendFunctionCount += requiredFriendCnt - friendFunctionCount - friendClassCount

	content := iostream + "\n" + "class Friendly;"

	// forward declare the classes and functions

	for i := 0; i < friendClassCount; i++ {
		content += "\nclass FriendClass" + strconv.Itoa(i) + ";"
	}
	for i := 0; i < friendFunctionCount; i++ {
		content += "\n int friendFunction" + strconv.Itoa(i) + "(const Friendly&);"
	}

	// the actual friendly class with lots of friends
	content += "\n\nclass Friendly {\n\tint m_ctr = 1;\n"
	for i := 0; i < friendClassCount; i++ {
		content += "\tfriend class FriendClass" + strconv.Itoa(i) + ";\n"
	}
	for i := 0; i < friendFunctionCount; i++ {
		content += "\tfriend int friendFunction" + strconv.Itoa(i) + "(const Friendly&);\n"
	}

	content += "};\n"
	// generate the classes and the functions
	for i := 0; i < friendClassCount; i++ {
		content += "\nclass FriendClass" + strconv.Itoa(i) + " {\npublic:\n\tint m_ctr;\n\tFriendClass" + strconv.Itoa(i) + "(const Friendly& f) : m_ctr(f.m_ctr) {}\n};"
	}
	for i := 0; i < friendFunctionCount; i++ {
		content += "\nint friendFunction" + strconv.Itoa(i) + "(const Friendly& f) {\n\treturn f.m_ctr;\n}\n"
	}

	content += "int main() { int v = 0;\n\tFriendly f;\n"
	for i := 0; i < friendClassCount; i++ {
		content += "\t{FriendClass" + strconv.Itoa(i) + " c(f);  v += c.m_ctr;}\n"
	}

	for i := 0; i < friendFunctionCount; i++ {
		content += "\tv += friendFunction" + strconv.Itoa(i) + "(f);\n"
	}

	content += "\n\tstd::cout << v << std::endl;\n}\n"

	return writeTestFile(trace(), count, content)
}

//
// (2.1) Nesting levels of compound statements ([stmt.block]), iteration control structures ([stmt.iter]), and selection control structures ([stmt.select]) [256].
//
func nestingOfStatements(count string) string {
	requiredNestingDepth, _ := strconv.Atoi(count)

	content := iostream + "int leave() { exit(0); return 1; }\nint main() {\n"

	forCounter := 0
	modCounter := 2
	operation := 0
	currentFor := "f" + strconv.Itoa(forCounter)
	previousFor := currentFor

	for i := 0; i < requiredNestingDepth; i++ {

		// convention: generate 1 for, which contains one if. Should be enough
		if operation == 0 {
			content += repeat(" ", i) + "for (int " + currentFor + " = "
			if previousFor == currentFor {
				content += "1"
			} else {
				content += previousFor
			}
			content += "; " + currentFor + "<" + count + "; " + currentFor + "++ )\n"
		}

		if operation == 1 {
			content += repeat(" ", i) + "if (" + currentFor + " % " + strconv.Itoa(modCounter) + " == 0)\n"
		}

		operation++
		if operation == 2 {
			operation = 0
			previousFor = currentFor
			forCounter++
			modCounter++
			currentFor = "f" + strconv.Itoa(forCounter)
		}
	}

	content += repeat(" ", requiredNestingDepth) + "std::cout << (" + previousFor + " - 1) * 2 << std::endl << leave();\n}\n"

	return writeTestFile(trace(), count, content)
}

//
// (2.23) Levels of nested class definitions ([class.nest]) in a single member-specification [256].
//
func nestingOfClasses(count string) string {

	content := iostream

	requiredNestingDepth, _ := strconv.Atoi(count)
	for i := 0; i < requiredNestingDepth; i++ {
		if i == 0 {
			content += "class C0 {\n" + "public: int m_i0 = 0 ;\n"
		} else {
			content += repeat(" ", i) + "class C" + strconv.Itoa(i) + " {\n" + repeat(" ", i+1) + "public: " +
				"C" + strconv.Itoa(i) + "(const volatile C" + strconv.Itoa(i-1) + " &c) : m_i" + strconv.Itoa(i) + "(" +
				"c.m_i" + strconv.Itoa(i-1) + " + 1) {}\n" + repeat(" ", i+1) + "int m_i" + strconv.Itoa(i) + ";\n"
		}
	}

	for i := 0; i < requiredNestingDepth; i++ {
		content += repeat(" ", requiredNestingDepth-i-1) + "};\n"
	}

	content += "\nint main() {\n\tvolatile C0 v0;"

	for i := 1; i < requiredNestingDepth; i++ {
		content += "\n\tvolatile "
		for j := 0; j <= i; j++ {
			content += "C" + strconv.Itoa(j)
			if j < i {
				content += "::"
			} else {
				content += " v" + strconv.Itoa(i) + "(v" + strconv.Itoa(i-1) + ");"
			}

		}
	}

	content += "\n\tstd::cout << v" + strconv.Itoa(requiredNestingDepth-1) + ".m_i" + strconv.Itoa(requiredNestingDepth-1) + " + 1 << std::endl;"

	content += "\n}"

	return writeTestFile(trace(), count, content)
}

//
// (2.33) Access control declarations in a class ([class.access.spec]) [4 096].
//
func accessControlDeclarationsInClass(count string) string {

	content := iostream + "class C {\n"

	var modifiers = []string{"public", "private", "protected"}
	requiredCount, _ := strconv.Atoi(count)
	m := make(map[string]int)
	getters := make(map[int]string)
	members := make(map[int]string)
	for _, i := range modifiers {
		m[i] = 0
	}
	for i := 0; i < requiredCount-1; i++ {
		modifier := modifiers[i%len(modifiers)]
		memberName := modifier + strconv.Itoa(m[modifier])
		content += "\n" + modifier + ":\n\tint m_" + memberName + " = 1;"
		if modifier == "private" || modifier == "protected" {
			getters[i] = memberName
		} else {
			members[i] = memberName
		}

		m[modifiers[i%len(modifiers)]]++
	}

	content += "\npublic:\n"
	for i := 0; i < requiredCount-1; i++ {
		if val, ok := getters[i]; ok {
			content += "\t int get" + val + "() const { return m_" + val + ";}\n"
		}
	}

	content += "\n};\nint main() {\n\tC c;\n\tint v = "
	for i := 0; i < requiredCount-1; i++ {
		if val, ok := getters[i]; ok {
			content += "c.get" + val + "() + "
		} else {
			content += "c.m_" + members[i] + " + "
		}
	}
	content += "0;\n\tstd::cout << v << std::endl;\n}"

	return writeTestFile(trace(), count, content)

}

//
// (2.33) Access control declarations in a class ([class.access.spec]) [4 096].
//
func pointerAndArrayDeclaratorsModifyingSomething(count string) string {
	content := iostream + "int main()  {\n"
	requiredCount, _ := strconv.Atoi(count)

	savedRequiredCount := requiredCount

	requiredCount /= 2

	content += "\tvolatile int i = 0;\n\tvolatile int *volatile p1=&i;\n"

	for i := 2; i <= requiredCount; i++ {
		content += "\tvolatile int "
		for j := 2; j <i + 1; j++ {
			content += "*volatile "
		}

		content += "*p" + strconv.Itoa(i) + " = &p" + strconv.Itoa(i-1) + ";\n"

	}

	content += "\n\t*"

	for i:=1; i<=requiredCount; i++ {
		content += " &0[*"
	}

	content += " &0[&p" + strconv.Itoa(requiredCount) + "]"
	for i:=1; i<=requiredCount; i++ {
		content += " ]"
	}

	content += " = " + strconv.Itoa(savedRequiredCount) + ";\n\tstd::cout << i << std::endl;"

	content += "\n}"

	return writeTestFile(trace(), count, content)
}
//
// (2.2) Nesting levels of conditional inclusion ([cpp.cond]) [256].
//
func nestingLevelOfConditionalInclusion(count string) string {
	content := ""
	requiredCount, _ := strconv.Atoi(count)

	for i:=0; i<requiredCount; i++ {
		content += "#define COND_" + strconv.Itoa(i) + " 1\n"
	}

	content += "\n"

	for i:=0; i<requiredCount; i++ {
		content += repeat(" ", i) + "#ifdef COND_" + strconv.Itoa(i) + "\n"
	}

	content += "\n" + repeat(" ", requiredCount) + iostream
	for i:=0; i<requiredCount; i++ {
		content += repeat(" ", requiredCount - i - 1) + "#endif\n"
	}

	content += "\nint main() {\n\tstd::cout << " + count +" << std::endl;\n}"

	return writeTestFile(trace(), count, content)
}

//
// (2.9) Structured bindings ([dcl.struct.bind]) introduced in one declaration [256].
//
func structureBindingsInOneDeclaration(count string) string {
	content := iostream
	requiredCount, _ := strconv.Atoi(count)

	content += "\nint main() {\n\tint arr[] = {"

	for i:=0; i<requiredCount; i++ {
		content += "1"
		if i < requiredCount - 1 {
			content += ", "
		} else {
			content += "};\n"
		}
	}

	content += "\tauto volatile ["
	for i:=0; i<requiredCount; i++ {
		content += "v" + strconv.Itoa(i)
		if i < requiredCount - 1 {
			content += ", "
		} else {
			content += "] = arr;\n"
		}
	}

	content += "\tint i = "

	for i:=0; i<requiredCount; i++ {
		content += "v" + strconv.Itoa(i)
		if i < requiredCount - 1 {
			content += " + "
		} else {
			content += ";\n\tstd::cout << i << std::endl;\n"
		}
	}


	content += "\n}\n"

	return writeTestFile(trace(), count, content)
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

	cmakeContent := "cmake_minimum_required(VERSION 2.8.9)\n\n" + "project(" + testSet.SetName + ")\n\n"

	for i := 0; i < len(testSet.Tests); i++ {
		if testSet.Tests[i].Run {
			for cnt := 0; cnt < len(testSet.Tests[i].Count); cnt++ {
				currentCount := testSet.Tests[i].Count[cnt]
				fileName := funcMap[testSet.Tests[i].TestName].(func(string) string)(currentCount)
				fileName = filepath.Base(fileName)

				currentTestName := testSet.Tests[i].TestName + "-" + currentCount
				if testSet.GenerateMakefile {

					makefileContent += testSet.Tests[i].TestName + "-" + currentCount + ": " + fileName + "\n"

					if testSet.TimedCompilation {
						if testSet.ResultFormat == "XML" {
							makefileContent += "\t@echo '<test name=\"" + currentTestName + "\">';\\\n"
						} else {
							makefileContent += "\t@echo " + testSet.Tests[i].TestName + "-" + currentCount + ";\\\n"
						}
					}
					if testSet.CompilationTimes > 1 {

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

				if testSet.GenerateCMakeListsTxt {
					cmakeContent += "add_executable(" + currentTestName + " " + fileName + " )\n"
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

	if testSet.GenerateCMakeListsTxt {
		cmakeFileName := dir + "/" + testSet.SetName + "/CMakeLists.txt"
		f, err := os.Create(cmakeFileName)
		check(err)
		defer f.Close()

		f.WriteString(cmakeContent)
	}
}
