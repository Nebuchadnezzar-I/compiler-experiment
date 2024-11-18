cmake_minimum_required(VERSION 3.10)

project(FileWalker VERSION 1.0)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

include_directories(src)

add_executable(
    compiler
    src/main.cpp
    src/fileTree/FileTree.cpp
    src/fileTree/Debug.cpp
)
