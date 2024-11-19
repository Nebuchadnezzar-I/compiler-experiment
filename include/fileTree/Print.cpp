#include <iostream>
#include <memory>
#include "./FileTree.cpp"

void FileTree::printTree(const std::shared_ptr<Entry>& entry, int level) {
    if (!entry) return;

    for (int i = 0; i < level; ++i) {
        std::cout << "    ";
    }

    std::cout << entry->name << ", " << entry->file_content << std::endl;

    for (const auto& child : entry->children) {
        FileTree::printTree(child, level + 1);
    }

    for (const auto& sibling : entry->siblings) {
        FileTree::printTree(sibling, level);
    }
}
