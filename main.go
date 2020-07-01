package main

import (
	"encoding/json"
	"fmt"
	"io/ioutil"
	"math/rand"
	"os"
	"path/filepath"
	"strconv"
)

// the map which maps the name of a test case from the json file to a go function
var funcMap = map[string]interface{}{
	"nestingOfStatements": nestingOfStatements,
	"nestingLevelOfConditionalInclusion": nestingLevelOfConditionalInclusion,
	"pointerAndArrayDeclaratorsModifyingSomething": pointerAndArrayDeclaratorsModifyingSomething,
	"nestingLevelsOfParenthesizedExpressionsInAFullExpression": nestingLevelsOfParenthesizedExpressionsInAFullExpression,
	"identifierOrMacroNameLength": identifierOrMacroNameLength,
	"externIdentifierNameLength": externIdentifierNameLength,
	"externIdentifiersInOneTranslationUnit": externIdentifiersInOneTranslationUnit,
	"parameterCountInFunctionDefinition": parameterCountInFunctionDefinition,
	"structuredBindingsInOneDeclaration": structuredBindingsInOneDeclaration,
	"macroCountInOneTranslationUnit": macroCountInOneTranslationUnit,
	"parametersInMacroDefinition": parametersInMacroDefinition,
	"charactersInOneLogicalSourceLine": charactersInOneLogicalSourceLine,
	"charactersInAStringLiteral": charactersInAStringLiteral,
	"sizeOfAnObject": sizeOfAnObject,
	"nestingLevelsForIncludes": nestingLevelsForIncludes,
	"caseLabelsForSwitch": caseLabelsForSwitch,
	"nonStaticDataMembersOfClass": nonStaticDataMembersOfClass,
	"lambdaCapturesInOneLambdaExpression": lambdaCapturesInOneLambdaExpression,
	"enumerationConstantsInEnum": enumerationConstantsInEnum,
	"nestingOfClasses": nestingOfClasses,
	"functionsRegisteredByatexit": functionsRegisteredByatexit,
	"functionsRegisteredByat_quick_exit": functionsRegisteredByat_quick_exit,
	"directAndIndirectBaseClassesOfClass": directAndIndirectBaseClassesOfClass,
	"directBaseClassesOfClass": directBaseClassesOfClass,
	"classMembersDeclaredInASingleMemberSpecification": classMembersDeclaredInASingleMemberSpecification,
	"finalOverridingVirtualFunctions": finalOverridingVirtualFunctions,
	"directAndIndirectVirtualBaseClassesOfClass": directAndIndirectVirtualBaseClassesOfClass,
	"staticDataMemberOfClass": staticDataMemberOfClass,
	"friendsOfAClass": friendsOfAClass,
	"accessControlDeclarationsInClass": accessControlDeclarationsInClass,
	"memberInitializersInAConstructorDefinition": memberInitializersInAConstructorDefinition,
	"initializerClauseInBracedInitList": initializerClauseInBracedInitList,
	"scopeQualificationOfOneIdentifier": scopeQualificationOfOneIdentifier,
	"nestedLinkageSpecifiers": nestedLinkageSpecifiers,
	"recursiveConstexpr": recursiveConstexpr,
	"fullExpressionInAConst": fullExpressionInAConst,
	"templateParametersInTemplateDeclaration": templateParametersInTemplateDeclaration,
	"recursivelyNestedTemplateInstantiations": recursivelyNestedTemplateInstantiations,
	"handlersPerTryBlock": handlersPerTryBlock,
	"numberOfPlaceholders": numberOfPlaceholders,
}

//
// Function generating code for the individual tests
//

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
// (2.3) Pointer ([dcl.ptr]), array ([dcl.array]), and function ([dcl.fct]) declarators (in any combination) modifying a class, arithmetic, or incomplete type in a declaration [256]
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
// (2.5) Number of characters in an internal identifier ([lex.name]) or macro name ([cpp.replace]) [1 024].
//
func identifierOrMacroNameLength(count string) string {
	content := iostream
	requiredCount, _ := strconv.Atoi(count)
	content += "#define "
	macroName := "M"
	varName := "v"
	for i:=1; i<requiredCount; i++ {
		macroName += string(rune(65 + rand.Intn(26)))
		varName += string(rune(97 + rand.Intn(26)))
	}
	content += macroName + " " + count + "\n"

	content += "int main() {\n\tvolatile int " + varName + " = " + macroName + ";\n\tstd::cout << " + varName + " << std::endl;\n}\n"

	return writeTestFile(trace(), count, content)
}

//
// (2.6) Number of characters in an external identifier ([lex.name], [basic.link]) [1 024].
//
func externIdentifierNameLength(count string) string {
	content := iostream
	requiredCount, _ := strconv.Atoi(count)
	varName := "v"
	for i:=1; i<requiredCount; i++ {
		varName += string(rune(97 + rand.Intn(26)))
	}

	content += "int main() {\n\textern int " + varName +";\n\tstd::cout << " + varName + " << std::endl;\n}\n"
	content += "int " + varName + " = " + count + ";\n"

	return writeTestFile(trace(), count, content)
}

//
// (2.7) External identifiers ([basic.link]) in one translation unit [65 536]
//
func externIdentifiersInOneTranslationUnit(count string) string {
	content := iostream
	requiredCount, _ := strconv.Atoi(count)
	content += "int main() {"
	addition := "0"
	for i:=0; i<requiredCount; i++ {
		varName := "v" + strconv.Itoa(i)
		content += "\n\textern int " + varName + ";"
		addition += " + " + varName
	}

	content += "\n\tstd::cout << " + addition + " << std::endl;\n}\n"

	for i:=0; i<requiredCount; i++ {
		varName := "v" + strconv.Itoa(i)

		content += "int " + varName + " = 1;\n"
	}
	return writeTestFile(trace(), count, content)
}

//
// (2.8) Identifiers with block scope declared in one block ([basic.scope.block]) [1 024].
// (2.11) Parameters in one function definition ([dcl.fct.def.general]) [256] and
// (2.12) Arguments in one function call ([expr.call]) [256].
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
// (2.9) Structured bindings ([dcl.struct.bind]) introduced in one declaration [256].
//
func structuredBindingsInOneDeclaration(count string) string {
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
// (2.13) Parameters in one macro definition ([cpp.replace]) [256]
// (2.14) Arguments in one macro invocation ([cpp.replace]) [256].
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
// (2.15) Characters in one logical source line ([lex.phases]) [65 536]
//
func charactersInOneLogicalSourceLine(count string) string {
	content := iostream

	requiredCount, _ := strconv.Atoi(count)
	content += "int main() {\n"
	content += "int a=" // 7 chars
	if requiredCount % 2 == 1 {
		content += "9"
	} else {
		content += "8"
	}

	requiredCount -= 8
	for i:=0; i<requiredCount/2; i++ {
		content += "+2"
	}
	if requiredCount % 2 == 1 {
		content += " "
	}

	content += ";\n\tstd::cout << a << std::endl;\n}\n" // 8 chars
	return writeTestFile(trace(), count, content)
}

//
// (2.16) Characters in a string literal ([lex.string]) (after concatenation ([lex.phases])) [65 536].
//
func charactersInAStringLiteral(count string) string {
	content := iostream
	content += "#include <cstring>\n"
	requiredCount, _ := strconv.Atoi(count)
	content += "int main() {\n"
	content += "const char* a=\"\\\n"
	cctr := 0
	for i:=0; i<requiredCount; i++ {
		cctr += 1
		if cctr == 80 {
			cctr = 0
			content += "\\\n"
		}
		content += string(rune(97 + rand.Intn(26)))
	}
	content += "\";\n\tstd::cout << std::strlen(a) << std::endl;\n}\n"
	return writeTestFile(trace(), count, content)
}

//
// (2.17) Size of an object ([intro.object]) [262 144].
//
func sizeOfAnObject(count string) string {
	content := iostream
	content += "#include <numeric>\n"

	content += "class A {\npublic:\n\tA() {\n\tstd::iota(std::begin(c), std::end(c), 0);\n\t}\n\tvoid printer() " +
		"{\n\tfor(auto i=0ULL; i<sizeof(c); i++) {\n\t\tif(c[i] * 256 == i && i > 0) {\n\t\t\tstd::cout << i ;\n\t\t}\n\t}" +
		"\n\t\tvolatile auto x = sizeof(*this);\n\t\tstd::cout << x << std::endl;\n\t}\nprivate:\n\n\tunsigned char c[" +
		count +
		"];\n\n};\nint main() {\n\tA a;\n\ta.printer();\n}\n"

	return writeTestFile(trace(), count, content)
}

//
// (2.18) Nesting levels for #include files ([cpp.include]) [256].
//
func nestingLevelsForIncludes(count string) string {
	content := iostream
	content += "#include \"inc/header1.h\"\n"
	requiredCount, _ := strconv.Atoi(count)
	for i:=1; i<requiredCount; i++ {
		writeHeaderFile(i, "#include \"header" + strconv.Itoa(i + 1) + ".h\"\n")
	}
	writeHeaderFile(requiredCount, "const int v = " + strconv.Itoa(requiredCount) + ";\n")

	content += "int main() {\n"
	content += "\tstd::cout << v << std::endl;\n}\n"
	return writeTestFile(trace(), count, content)
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
// (2.21) Lambda-captures in one lambda-expression ([expr.prim.lambda.capture]) [256].
//
func lambdaCapturesInOneLambdaExpression(count string) string {
	content := iostream
	requiredCount, _ := strconv.Atoi(count)
	content += "int main() {\n"

	for i:=0; i< requiredCount; i++ {
		content += "\t int v" + strconv.Itoa(i) + " = 1;\n"
	}

	content += "\t auto lambda_ref = ["
	for i:=0; i< requiredCount; i++ {
		content += "&v" + strconv.Itoa(i)
		if i < requiredCount - 1 {
			content += ", "
		} else {
			content += "]() -> int {\n"
		}
	}
	content += "\t\treturn "
	for i:=0; i< requiredCount; i++ {
		content += "v" + strconv.Itoa(i)
		if i < requiredCount - 1 {
			content += " + "
		} else {
			content += ";\n\t};\n"
		}
	}
	content += "\tint v_ref = lambda_ref();\n"
	content += "\tstd::cout << v_ref << std::endl;\n}\n"
	return writeTestFile(trace(), count, content)
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
// (2.24) Functions registered by atexit() ([support.start.term]) [32].
//
func functionsRegisteredByatexit(count string) string {
	content := atexitHelper(count, "atexit")
	content += "return EXIT_SUCCESS;\n}"
	return writeTestFile(trace(), count, content)
}

//
// (2.25) Functions registered by at_quick_exit() ([support.start.term]) [32].
//
func functionsRegisteredByat_quick_exit(count string) string {
	content := atexitHelper(count, "at_quick_exit")
	content += "std::quick_exit(EXIT_SUCCESS);\n}"
	return writeTestFile(trace(), count, content)
}

//
// (2.26) Direct and indirect base classes ([class.derived]) [16 384]
//
func directAndIndirectBaseClassesOfClass(count string) string {
	return generateClassHierarchyWitClasses(count, false, trace())
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
// (2.28) Class members declared in a single member-specification (including member functions) ([class.mem]) [4 096].
//
func classMembersDeclaredInASingleMemberSpecification(count string) string {
	content := iostream
	requiredCount, _ := strconv.Atoi(count)

	content += "class A {\npublic:\n\tint v1 = 1, "
	for i:=2; i<=requiredCount; i++ {
		if i % 10 == 0 {
			content += "\n\t\t"
		}
		content += "v" + strconv.Itoa(i) + " = v" + strconv.Itoa(i-1) + " + 1"
		if i<requiredCount {
			content += ", "
		} else {
			content += ";\n};"
		}
	}

	content += "\n\nint main() {\n\tA a;\n\tstd::cout << a.v" + count + " << std::endl;\n}"

	return writeTestFile(trace(), count, content)
}

//
// (2.29) Final overriding virtual functions in a class, accessible or not ([class.virtual]) [16 384].
//
func finalOverridingVirtualFunctions(count string) string {
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

	classContent := iostream
	generatedFunctions := make([]string, 0)
	generateClassHierarchy(root, &classContent, trace(), &generatedFunctions, false)

	publist := ""
	// now generate a few classes to fill the gap between the totally generated classes (totalCounter) and the actual required classes
	for i := 0; i < saveBaseCnt-totalCounter; i++ {
		classContent += "class Base" + strconv.Itoa(i) + " {\npublic:\n\tBase" + strconv.Itoa(i) + "() = default;\n"
		cloc := strconv.Itoa(i)
		classContent += "\tvirtual int func" + cloc + "() = 0;\n};\n\n"
		publist += ", public Base" + strconv.Itoa(i)
		generatedFunctions = append(generatedFunctions, "func" + cloc)
	}


	classContent += "class Derived : public Base" + publist + "\n{\npublic:\n\tDerived()  = default;"
	for i:=0; i< len(generatedFunctions); i++ {
		classContent += "\n\tint " + generatedFunctions[i] + "() override final {\n\t\tvolatile int value = 1;\n\t\treturn value;\n\t}"
	}

	classContent += "\n};\n"
	mainContent := "\nint main() {\n\tDerived d; std::cout << 0"

	for i:=0; i< len(generatedFunctions); i++ {
		mainContent += " + d." + generatedFunctions[i] + "()"
	}

	mainContent += " << std::endl;\n}\n"

	return writeTestFile(trace(), count, classContent+mainContent)
}

//
// (2.30) Direct and indirect virtual bases of a class ([class.mi]) [1 024].
//
func directAndIndirectVirtualBaseClassesOfClass(count string) string {
	return generateClassHierarchyWitClasses(count, true, trace())
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
// (2.34) Member initializers in a constructor definition ([class.base.init]) [6 144].
//
func memberInitializersInAConstructorDefinition(count string) string {
	content := iostream

	content += "class C {\npublic:\n\tC() : "

	requiredCount, _ := strconv.Atoi(count)
	for i:=1; i<= requiredCount; i++ {
		content += "m_" + strconv.Itoa(i) + "(1)"
		if i<requiredCount {
			content += ", "
			if i % 50 == 0 {
				content += "\n\t\t"
			}
		} else {
			content += " {}\n"
		}
	}

	for i:= 1; i<=requiredCount; i++ {
		content += "\n\tint m_" + strconv.Itoa(i) + ";"
	}

	content += "\n\n\tvoid print() const {\n\t\tstd::cout <<"
	for i:=1; i<= requiredCount; i++ {
		content += "m_" + strconv.Itoa(i)
		if i<requiredCount {
			content += " +  "
			if i % 50 == 0 {
				content += "\n\t\t"
			}
		} else {
			content += " << std::endl;\n\t}\n"
		}
	}

	content += "};\nint main() {\n\tC().print();\n}\n"

	return writeTestFile(trace(), count, content)
}

//
// (2.35) Initializer-clauses in one braced-init-list [16 384].
//
func initializerClauseInBracedInitList(count string) string {

	content := iostream
	requiredCount, _ := strconv.Atoi(count)

	content += "int main() {\n\tunsigned char c[] = {"

	for i:=0; i<requiredCount; i++ {
		content += strconv.Itoa(i % 256)
		if i < requiredCount - 1 {
			content += ", "
		} else {
			content += "};\tvolatile unsigned long s = 0;\n\tfor (volatile unsigned long i=0; i< sizeof(c); i++) {\n\t s += c[i] || !c[i];\n\t}\n\n\tstd::cout << s << std::endl;"
		}
	}

	content += "\n}\n"

	return writeTestFile(trace(), count, content)
}

//
// (2.36) Scope qualifications of one identifier ([expr.prim.id.qual]) [256].
//
func scopeQualificationOfOneIdentifier(count string) string {
	content := iostream
	requiredCnt, _ := strconv.Atoi(count)
	for i:=1; i<=requiredCnt; i++ {
		content += repeat(" ", i - 1) + "namespace ns" + strconv.Itoa(i) + " {\n"
	}
	content += repeat(" ", requiredCnt) + "int i =" + count + ";\n"
	for i:=requiredCnt; i>=1 ; i-- {
		content += repeat(" ", i - 1) + "}\n"
	}

	content += "\nint main() {\n\tstd::cout << "

	for i:=1; i<=requiredCnt; i++ {
		content += "ns" + strconv.Itoa(i) + "::"
	}

	content += "i << std::endl;\n}"

	return writeTestFile(trace(), count, content)
}

//
// (2.37) Nested linkage-specifications ([dcl.link]) [1 024].
//
func nestedLinkageSpecifiers(count string) string {
	content := iostream

	requiredCnt, _ := strconv.Atoi(count)
	for i:=0; i<requiredCnt; i++ {
		content += repeat(" ", i - 1) + "extern \""
		if i % 2 == 0 {
			content += "C"
		} else {
			content += "C++"
		}
		content += "\" { int f"
		for j:=0; j<=i; j++ {
			if j % 2 == 0 {
				content += "C"
			} else {
				content += "x"
			}
		}
		content += "() { return 1; }"
		content += "\n"
	}

	content += repeat(" ", requiredCnt) + "int fun() { return " + count + ";}\n"
	for i:=requiredCnt; i>=1 ; i-- {
		content += repeat(" ", i - 1) + "}\n"
	}

	content += "\nint main() {\n\tstd::cout << fun() << std::endl;\n}"

	return writeTestFile(trace(), count, content)
}

//
// (2.38) Recursive constexpr function invocations ([dcl.constexpr]) [512].
//
func recursiveConstexpr(count string) string {
	content := "#include <iostream>\nconstexpr unsigned long long sum(unsigned long long n, unsigned long long s=0) {\n" +
		"\treturn n ? sum(n-1,s+n) : s;\n}\n" +
		"constexpr unsigned long long k = sum(" +
		count +
		");\n\nint main() {\n" +
		"\tstd::cout << k<<std::endl;\n}"

	return writeTestFile(trace(), count, content)
}

//
// (2.39) Full-expressions evaluated within a core constant expression ([expr.const]) [1 048 576].
//
func fullExpressionInAConst(count string) string {
	content := iostream
	requiredExprCnt, _ := strconv.Atoi(count)
	content += "\nconst int i = 0"
	for i:=1; i<requiredExprCnt; i++ {
		content += "+1"
		if i % 40 == 0 {
			content += "\n\t"
		}
	}
	content += ";\nint main() {\n\tstd::cout << i << std::endl;\n}"

	return writeTestFile(trace(), count, content)
}

//
// (2.40) Template parameters in a template declaration ([temp.param]) [1 024].
//
func templateParametersInTemplateDeclaration(count string) string {
	content := iostream
	requiredCount, _ := strconv.Atoi(count)
	content += "\ntemplate<"
	for i:=0; i<requiredCount; i++ {
		content += "int N" + strconv.Itoa(i)
		if i<requiredCount - 1 {
			content += ","
		} else {
			content += ">\nstruct C {\n\tstatic const int v = "
		}
	}
	for i:=0; i<requiredCount; i++ {
		content += "N" + strconv.Itoa(i)
		if i< requiredCount - 1 {
			content += " + "
		} else {
			content += ";\n};\nint main() {\n\tC<"
		}
	}

	for i:=0; i<requiredCount; i++ {
		content += "1"
		if i< requiredCount - 1 {
			content += ","
		} else {
			content += "> c;\n\tstd::cout << c.v << std::endl;\n}\n"
		}
	}

	return writeTestFile(trace(), count, content)
}

//
// (2.41) Recursively nested template instantiations ([temp.inst]), including substitution during template argument deduction ([temp.deduct]) [1 024].
//
func recursivelyNestedTemplateInstantiations(count string) string {
	content := iostream
	content += "template<typename T>\nstruct B {\n\ttypedef T BT;\n};\n" +
		"template<int N>\nstruct C {\n\ttypedef typename B<typename C<N-1>::T>::BT T;\n};\n" +
		"template<>\nstruct C<0> {\n\ttypedef int T;\n};\n\nint main()\n{\n\tC<"
	content += count + ">::T c = " + count + ";\n\tstd::cout << c << std::endl;\n}\n"
	return writeTestFile(trace(), count, content)
}

//
// (2.42) Handlers per try block ([except.handle]) [256].
//
func handlersPerTryBlock(count string) string {
	content := iostream + "#include <exception>\n"
	requiredCount, _ := strconv.Atoi(count)
	for i:=1; i<=requiredCount; i++ {
		content += "class myexception" + strconv.Itoa(i) + " : public std::exception {\n"
		content += "public:\n\tconst char* what() const noexcept override {\n\t\t"
		content += "return \"" + strconv.Itoa(i) + "\";\n\t}\n};\n\n"
	}
	content += "int main() {\n\ttry {\n\t\tthrow myexception" + strconv.Itoa(requiredCount) + "();\n\t}"
	for i:=1; i<=requiredCount; i++ {
		content += "\n\tcatch(const myexception" + strconv.Itoa(i) + "& e) {\n\t\t"
		content += "std::cout << e.what() << std::endl;\n\t}"
	}
	content += "\n}"
	return writeTestFile(trace(), count, content)
}

//
// (2.43) Number of placeholders [10].
//
func numberOfPlaceholders(count string) string {

	requiredCount, _ := strconv.Atoi(count)

	content := iostream
	content += "#include <functional>\n" +
		"struct Summer {\n\tint calculate("

	for i:=1; i<=requiredCount; i++ {
		content += "int p" + strconv.Itoa(i)
		if i < requiredCount {
			content += ", "
		} else {
			content += ") {\n\t\treturn "
		}
	}

	for i:=1; i<=requiredCount; i++ {
		content += "p" + strconv.Itoa(i);
		if i<requiredCount {
			content += " + "
		} else {
			content += ";\t\t}\n};\nint main() {\n\tusing SUM = std::function<int("
		}
	}

	for i:=1; i<=requiredCount; i++ {
		content += "int"
		if i<requiredCount {
			content += ","
		} else {
			content += ")>;\n\tSummer a;\n\tSUM f = std::bind(&Summer::calculate, &a,"
		}
	}

	for i:=1; i<=requiredCount; i++ {
		content += "std::placeholders::_" + strconv.Itoa(i)
		if i<requiredCount {
			content += ","
		} else {
			content += ");\n\tstd::cout << f("
		}
	}

	for i:=1; i<=requiredCount; i++ {
		content += "1"
		if i < requiredCount {
			content += ", "
		} else {
			content += ") << std::endl;\n}\n"
		}
	}

	return writeTestFile(trace(), count, content)
}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//                                                   Main                                                             //
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
func main() {
	dat, err := ioutil.ReadFile("/home/fld/work/p/cpp-stresstest/testset.json")
	check(err)
	jsonErr := json.Unmarshal(dat, &testSet)
	if jsonErr != nil {
		fmt.Println("error:", err)
		panic(jsonErr)
	}

	makefileHeader := "CXX="
	if len(testSet.Compiler) > 0 {
		makefileHeader += testSet.Compiler
	} else {
		makefileHeader += "g++"
	}
	makefileHeader += "\nCXXFLAGS=" + testSet.CompilerFlags + "\n\n"
	makefileContent := ""

	//fmt.Printf("Tests: %+v ", testSet)

	// create the directory for this test set
	dir, _ := os.Getwd()
	os.RemoveAll(dir + "/" + testSet.SetName)
	err = os.Mkdir(dir+"/"+testSet.SetName, 0777)
	check(err)

	all := "all: "
	clean := "clean: \n"

	fileNames := make([]string, 0)

	cmakeContent := "cmake_minimum_required(VERSION 2.8.9)\n\n" + "project(" + testSet.SetName + ")\n\n"

	for i := 0; i < len(testSet.Tests); i++ {
		if testSet.Tests[i].Run {
			for cnt := 0; cnt < len(testSet.Tests[i].Count); cnt++ {
				currentCount := testSet.Tests[i].Count[cnt]
				fileName := funcMap[testSet.Tests[i].TestName].(func(string) string)(currentCount)
				fileName = filepath.Base(fileName)

				fileNames = append(fileNames, fileName)

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
