cmake_minimum_required(VERSION 3.26)
project(GoogleTest_basic)

set(CMAKE_CXX_STANDARD 17)

add_executable(GoogleTest_basic src/main.cpp)

add_subdirectory(tests)
add_subdirectory(tests/lib/googletest-1.14.0)
