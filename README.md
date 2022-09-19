# go tree-sitter
Golang bindings for [tree-sitter](https://github.com/tree-sitter/tree-sitter). Unlike  [go-tree-sitter repo](https://github.com/smacker/go-tree-sitter), this repo supports **custom defined syntax**, which means you can first define the syntax for your grammar, then parse it into an AST (abstract syntax tree).

As for Golang tree-sitter support for some commonly used programming languages (C++, Python, Java, etc), please refer to [go-tree-sitter](https://github.com/smacker/go-tree-sitter).

For background knowledge about [tree-sitter](https://tree-sitter.github.io/tree-sitter/) and its [pure C support](https://github.com/tree-sitter/tree-sitter), please refer to the link indicated.

## Usage
First define your syntax in ```grammar.js``` and generate the corresponding ```parser.c``` using [tree-sitter](https://github.com/tree-sitter/tree-sitter), update ```./custom/parser.c``` with the generated ```parser.c```, then ```go run main.go```.