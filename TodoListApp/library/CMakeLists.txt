set(LIB_SOURCES src/Task.cpp)
set(LIB_HEADERS include/Task.h)

add_library(TodoListLibrary STATIC ${LIB_SOURCES} ${LIB_HEADERS})

target_include_directories(TodoListLibrary PUBLIC include)
