# Include Directories
include_directories(include)

# Create library
file(GLOB SOURCES "src/*.cpp")
add_library(TodoLibrary ${SOURCES})
