include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(structure_examples structure_examples.cpp)

target_link_libraries(structure_examples gtest gtest_main)
