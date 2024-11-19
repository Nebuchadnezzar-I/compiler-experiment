#include <cstdlib>
#include <iostream>
#include "../include/fileTree/FileTree.cpp"

int main() {
    auto root = FileTree::walk("/home/admiralcapo/personal/lang");
    // FileTree::printTree(root);
    auto index_file = FileTree::getIndexFile(root, "index.ex");
    if (index_file) {
        std::cout << "File not found" << std::endl;
        std::cout << index_file->file_content << std::endl;
    }

    return EXIT_SUCCESS;
}
