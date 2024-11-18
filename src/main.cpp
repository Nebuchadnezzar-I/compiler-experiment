#include <cstdlib>
#include <filesystem>
#include "fileTree/FileNode.h"

int main() {
    const std::filesystem::path src_dir{"../lang"};
    auto root = std::make_shared<fileTree::FileNode>("", "", fileTree::DIRECTORY);
    root->buildDirFileTree(src_dir);
    root->printFileAndDirs();

    return EXIT_SUCCESS;
}
