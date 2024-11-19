cmake_minimum_required(VERSION 3.10)
project(CompilerExperiment)

set(CMAKE_CXX_STANDARD 17)

# Define paths for ANTLR runtime
set(ANTLR_RUNTIME_INCLUDE_DIR /home/admiralcapo/antlr4/runtime/Cpp/runtime/src)
set(ANTLR_RUNTIME_LIB_DIR /home/admiralcapo/antlr4/runtime/Cpp/dist)

# Include directories
include_directories(include ${ANTLR_RUNTIME_INCLUDE_DIR})

# Collect all source files in fileTree and antlr directories
file(GLOB FILETREE_SOURCES "include/fileTree/*.cpp")
file(GLOB ANTLR_SOURCES "include/antlr/*.cpp")

# Add executable with all collected sources
add_executable(CompilerExperiment src/main.cpp ${FILETREE_SOURCES} ${ANTLR_SOURCES})

# Link with the ANTLR runtime library
target_link_libraries(CompilerExperiment ${ANTLR_RUNTIME_LIB_DIR}/libantlr4-runtime.a)
