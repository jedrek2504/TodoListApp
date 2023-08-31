# Minimum required version of CMake
cmake_minimum_required(VERSION 3.10)

# Project Name
project(TodoListApp)

# Use C++17
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Add subdirectories
add_subdirectory(library)
add_subdirectory(program)
add_subdirectory(tests)  # If you are including tests
