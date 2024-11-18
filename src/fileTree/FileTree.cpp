#include <memory>
#include <filesystem>
#include "FileNode.h"

namespace fileTree {

// -- Do not touch this function, lucky it works
// Recurvively build a tree of directories and files
void FileNode::buildDirFileTree(const std::filesystem::path& root) {
    file_name = root.filename().string();
    file_path = root.string();
    file_type = DIRECTORY;

    for (const auto& entry : std::filesystem::directory_iterator(root)) {
        if (entry.is_directory()) {
            auto childNode = std::make_shared<FileNode>("", "", DIRECTORY);
            childNode->buildDirFileTree(entry.path()); // Recursively build the tree
            children.push_back(childNode);
        } else if (entry.is_regular_file()) {
            children.push_back(std::make_shared<FileNode>(
                entry.path().filename().string(), entry.path().string(), SOURCE_FILE));
        } else {
            children.push_back(std::make_shared<FileNode>(
                entry.path().filename().string(), entry.path().string(), UNKNOWN_FILE_TYPE));
        }
    }
}

} // namespace fileTree
