add_library(ockam_memory)

target_sources(ockam_memory
    PRIVATE
        "${CMAKE_CURRENT_LIST_DIR}/include/ockam/memory/interface/memory.h"
        "${CMAKE_CURRENT_LIST_DIR}/include/ockam/memory/interface/private/memory_private.h"
        "${CMAKE_CURRENT_LIST_DIR}/src/memory.c")

target_include_directories(ockam_memory
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>)

target_link_libraries(ockam_memory
    PUBLIC
        ockam_error)

install(TARGETS ockam_memory)

install(DIRECTORY ${CMAKE_CURRENT_LIST_DIR}/include/ockam
        DESTINATION include
        FILES_MATCHING PATTERN "*.h")

# TODO: Add cmake config installation