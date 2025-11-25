# Add Executable
add_executable(TodoListApp src/main.cpp)
# Link with TodoLibrary
target_link_libraries(TodoListApp TodoListLibrary)
