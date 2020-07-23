add_library(ockam_memory_stdlib)

target_sources(ockam_memory_stdlib
    PRIVATE
        "${CMAKE_CURRENT_LIST_DIR}/include/ockam/memory/stdlib/memory_stdlib.h"
        "${CMAKE_CURRENT_LIST_DIR}/include/ockam/memory/stdlib/memory_stdlib_impl.h"
        "${CMAKE_CURRENT_LIST_DIR}/include/ockam/memory/stdlib/private/memory_stdlib_private.h"
        "${CMAKE_CURRENT_LIST_DIR}/src/memory_alloc_helper.h"
        "${CMAKE_CURRENT_LIST_DIR}/src/memory_alloc_helper.c"
        "${CMAKE_CURRENT_LIST_DIR}/src/memory_stdlib_error.h"
        "${CMAKE_CURRENT_LIST_DIR}/src/memory_stdlib_error.c"
        "${CMAKE_CURRENT_LIST_DIR}/src/memory_stdlib.c"
        "${CMAKE_CURRENT_LIST_DIR}/src/memory_stdlib_impl.c")

target_include_directories(ockam_memory_stdlib
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>)

target_link_libraries(ockam_memory_stdlib
    PUBLIC
        ockam_error
    PRIVATE
        ockam_memory
        ockam_log)

install(TARGETS ockam_memory_stdlib)

install(DIRECTORY ${CMAKE_CURRENT_LIST_DIR}/include/ockam
        DESTINATION include
        FILES_MATCHING PATTERN "*.h")

# TODO: Add cmake config installation