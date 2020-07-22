cmake_minimum_required(VERSION 3.12 FATAL_ERROR)

project(ockam VERSION 0.0.1 LANGUAGES C)

add_subdirectory(library/memory)
add_subdirectory(library/vault)
add_subdirectory(library/log)

option(ENABLE_TESTING "" ON)

if (ENABLE_TESTING)
    add_subdirectory(tests)
endif()