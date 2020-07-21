add_library(ockam_memory)

target_sources(ockam_memory
    PRIVATE
        "${CMAKE_CURRENT_LIST_DIR}/include/ockam/memory/memory.h"
        "${CMAKE_CURRENT_LIST_DIR}/include/ockam/memory/private/memory_private.h"
        "${CMAKE_CURRENT_LIST_DIR}/src/memory.c")

target_include_directories(ockam_memory
    PUBLIC
        "${CMAKE_CURRENT_LIST_DIR}/include/ockam/memory")