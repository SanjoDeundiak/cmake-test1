add_library(ockam_memory_stdlib)

target_sources(ockam_memory_stdlib
    PRIVATE
        "${CMAKE_CURRENT_LIST_DIR}/include/ockam/memory_stdlib/memory_stdlib.h"
        "${CMAKE_CURRENT_LIST_DIR}/include/ockam/memory_stdlib/memory_stdlib_impl.h"
        "${CMAKE_CURRENT_LIST_DIR}/include/ockam/memory_stdlib/private/memory_stdlib_private.h"
        "${CMAKE_CURRENT_LIST_DIR}/src/memory_alloc_helper.h"
        "${CMAKE_CURRENT_LIST_DIR}/src/memory_alloc_helper.c"
        "${CMAKE_CURRENT_LIST_DIR}/src/memory_stdlib.c"
        "${CMAKE_CURRENT_LIST_DIR}/src/memory_stdlib_impl.c")

target_include_directories(ockam_memory_stdlib
    PUBLIC
        "${CMAKE_CURRENT_LIST_DIR}/include/ockam/memory_stdlib")

target_link_libraries(ockam_memory_stdlib
    PUBLIC
        ockam_memory)