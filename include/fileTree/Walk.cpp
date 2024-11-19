#include <filesystem>
#include <algorithm>
#include <memory>
#include <vector>
#include <string>
#include <fstream>
#include "./FileTree.cpp"

std::shared_ptr<FileTree::Entry> FileTree::walk(const std::string& directory, char level) {
    auto root = std::make_shared<Entry>();
    root->name = std::filesystem::path(directory).filename().string();

    std::vector<std::filesystem::directory_entry> entries;

    for (const auto& entry : std::filesystem::directory_iterator(directory)) {
        if (entry.path().filename().string()[0] != '.') {
            entries.push_back(entry);
        }
    }

    std::sort(entries.begin(), entries.end(), [](const std::filesystem::directory_entry& left, const std::filesystem::directory_entry& right) -> bool {
        return left.path().filename() < right.path().filename();
    });

    std::shared_ptr<Entry> previousSibling = nullptr;
    for (const auto& entry : entries) {
        auto newEntry = std::make_shared<Entry>();
        newEntry->name = entry.path().filename().string();

        if (entry.is_directory()) {
            newEntry->children = walk(entry.path().string(), level + 1)->children;
        } else {
            std::ifstream file(entry.path());
            std::string content((std::istreambuf_iterator<char>(file)),
                                     std::istreambuf_iterator<char>());

            newEntry->file_content = content;
        }

        if (previousSibling) {
            previousSibling->siblings.push_back(newEntry);
        } else {
            root->children.push_back(newEntry);
        }

        previousSibling = newEntry;
    }

    return root;
}
