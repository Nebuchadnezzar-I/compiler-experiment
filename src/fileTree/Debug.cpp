#include <iostream>
#include "FileNode.h"

namespace fileTree {

void FileNode::printFileAndDirs(uint8_t depth) const {
    for (int i = 0; i < depth; ++i) {
        std::cout << "  ";
    }
    std::cout << file_name << (file_type == DIRECTORY ? " - Directory" : " - File") << std::endl;

    for (const auto& child : children) {
        child->printFileAndDirs(depth + 1); // Recursively print child nodes
    }
}

} // namespace fileTree
