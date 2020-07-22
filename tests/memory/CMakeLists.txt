cmake_minimum_required(VERSION 3.12 FATAL_ERROR)

project(ockam_tests_memory VERSION 0.0.1 LANGUAGES C)

add_executable(test_compare test_compare.c)
target_link_libraries(test_compare ockam_memory_stdlib)
add_test(NAME test_compare COMMAND test_compare)