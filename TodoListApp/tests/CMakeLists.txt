# Add tests executable
add_executable(TodoTests)

# Link tests executable with TodoLibrary
target_link_libraries(TodoTests TodoLibrary)
