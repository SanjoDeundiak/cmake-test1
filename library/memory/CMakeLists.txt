add_library(ockam_memory)

target_sources(ockam_memory
    PRIVATE
        "${CMAKE_CURRENT_LIST_DIR}/include/ockam/memory/memory.h"
        "${CMAKE_CURRENT_LIST_DIR}/include/ockam/memory/private/memory_private.h"
        "${CMAKE_CURRENT_LIST_DIR}/src/memory.c")

target_include_directories(ockam_memory
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include/ockam/memory>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>)

install(TARGETS ockam_memory)