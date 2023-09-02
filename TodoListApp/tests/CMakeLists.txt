# Add tests executable and its source files
add_executable(TodoListTests test1.cpp)

# Link tests executable with TodoLibrary (assuming TodoLibrary is a target defined elsewhere in your CMake setup)
target_link_libraries(TodoListTests TodoListLibrary)
