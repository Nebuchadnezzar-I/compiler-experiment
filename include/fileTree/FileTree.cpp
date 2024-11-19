#ifndef FILE_TREE_H
#define FILE_TREE_H

#include <string>
#include <memory>
#include <vector>

namespace FileTree {

struct Entry {
    std::string name;
    std::string file_content;
    std::vector<std::shared_ptr<Entry>> children;
    std::vector<std::shared_ptr<Entry>> siblings;
};

std::shared_ptr<Entry> walk(const std::string& directory, char level = 0);
void printTree(const std::shared_ptr<Entry>& entry, int level = 0);

// Getters
std::shared_ptr<Entry> getIndexFile(const std::shared_ptr<Entry>& entry, std::string search_name);

} // namespace FileTree

#endif
