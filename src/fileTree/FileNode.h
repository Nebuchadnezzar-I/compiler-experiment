#include <string>
#include <vector>
#include <memory>
#include <filesystem>

namespace fileTree {

enum FileType {
    SOURCE_FILE,
    DIRECTORY,
    UNKNOWN_FILE_TYPE
};

struct FileNode {
    std::string file_name;
    std::string file_path;
    FileType file_type;
    std::vector<std::shared_ptr<FileNode>> children; // Child nodes for directories

    FileNode(std::string file_name, std::string file_path, FileType file_type)
        : file_name(std::move(file_name)), file_path(std::move(file_path)), file_type(file_type) {}

    void buildDirFileTree(const std::filesystem::path& root);
    void printFileAndDirs(uint8_t depth = 0) const;
};

} // namespace fileTree
