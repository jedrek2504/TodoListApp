include(FetchContent)

# Pobierz GTest
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG v1.15.0
)

set(gtest_force_shared_crt ON CACHE BOOL "" FORCE)
FetchContent_MakeAvailable(googletest)

# Dodaj testy
add_executable(TodoListTests
    TaskTest.cpp
    TaskListTest.cpp
)

target_link_libraries(TodoListTests
    PRIVATE
        TodoListLibrary
        GTest::gtest_main
)

include(GoogleTest)
gtest_discover_tests(TodoListTests)
