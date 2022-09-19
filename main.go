package main

import (
	"fmt"
	custom "main/custom"

	sitter "github.com/smacker/go-tree-sitter"
)

func main() {
	parser := sitter.NewParser()
	parser.SetLanguage(custom.GetLanguage())

	sourceCode := []byte("hello world")
	tree := parser.Parse(nil, sourceCode)
	root := tree.RootNode()
	fmt.Println(root.HasError())
	fmt.Println(root.ChildCount())
	fmt.Println(root.NamedChild(0))
	fmt.Println(root.NamedChild(1))
	fmt.Println(root, "\n")

	for i := 0; root.NamedChild(i) != nil; i++ {
		child1 := root.NamedChild(i)
		fmt.Println(child1.Type())
		fmt.Println(child1.StartByte())
		fmt.Println(child1.EndByte())
		fmt.Println(string(sourceCode[child1.StartByte():child1.EndByte()]))
		fmt.Println()
	}
}
