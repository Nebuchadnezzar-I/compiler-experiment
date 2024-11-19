#include <memory>

#include "./FileTree.cpp"

std::shared_ptr<FileTree::Entry> FileTree::getIndexFile(
    const std::shared_ptr<Entry>& root, std::string search_name) {
    if (!root) return nullptr;

    if (root->name == search_name) {
        return root;
    }

    for (const auto& child : root->children) {
        auto found = FileTree::getIndexFile(child, search_name);
        if (found) return found;
    }

    for (const auto& child : root->siblings) {
        auto found = FileTree::getIndexFile(child, search_name);
        if (found) return found;
    }

    return nullptr;
}
