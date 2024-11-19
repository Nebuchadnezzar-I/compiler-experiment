#include <cstdlib>
#include <iostream>

#include "../include/antlr/ExprLexer.h"
#include "../include/antlr/ExprParser.h"
#include "../include/fileTree/FileTree.cpp"

void printImportPaths(antlr4::tree::ParseTree* node) {
    if (ExprParser::ImportPathContext *ctx = dynamic_cast<ExprParser::ImportPathContext*>(node)) {
        std::cout << "Expr: " << ctx->getText() << std::endl;
    }

    for (size_t i = 0; i < node->children.size(); ++i) {
        printImportPaths(node->children[i]);
    }
}

int main() {
    // FileTree::printTree(root);
    auto root = FileTree::walk("/home/admiralcapo/personal/lang");
    auto index_file = FileTree::getIndexFile(root, "index.ex");
    if (!index_file) {
        std::cerr << "File not found" << std::endl;
        return EXIT_FAILURE;
    }

    std::cout << "Parsing file content:" << std::endl;

    antlr4::ANTLRInputStream input(index_file->file_content);
    ExprLexer lexer(&input);
    antlr4::CommonTokenStream tokens(&lexer);

    ExprParser parser(&tokens);
    antlr4::tree::ParseTree* tree = parser.program();

    printImportPaths(tree);

    return EXIT_SUCCESS;
}
