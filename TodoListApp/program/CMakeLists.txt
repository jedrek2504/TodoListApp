# Add Executable
add_executable(TodoListApp src/main.cpp)

# Link with TodoLibrary
target_link_libraries(TodoListApp TodoListLibrary)

# If you use SQLite or other packages, find and link them here
# find_package(SQLite3)
# target_link_libraries(TodoListApp ${SQLite3_LIBRARIES})
