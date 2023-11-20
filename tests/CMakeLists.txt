include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

add_executable(structure_examples structure_examples.cpp)

add_executable(calculator_tests
        calculator_tests.cpp
        ../src/calculator.cpp
)

target_link_libraries(structure_examples gtest gtest_main)
target_link_libraries(calculator_tests gtest gtest_main)
