cmake_minimum_required(VERSION 3.10)

project(CompilerExperiment LANGUAGES CXX)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED True)

add_executable(CompilerExperiment
    src/main.cpp
    include/fileTree/Print.cpp
    include/fileTree/Utils.cpp
    include/fileTree/Walk.cpp
    include/fileTree/FileTree.cpp
)

target_include_directories(CompilerExperiment PRIVATE include)
