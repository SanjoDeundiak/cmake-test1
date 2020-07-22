add_library(ockam_log)

target_sources(ockam_log
        PRIVATE
        "${CMAKE_CURRENT_LIST_DIR}/include/ockam/log/log.h"
        "${CMAKE_CURRENT_LIST_DIR}/src/log.c")

target_include_directories(ockam_log
        PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>)

install(TARGETS ockam_log)

install(DIRECTORY ${CMAKE_CURRENT_LIST_DIR}/include/ockam
        DESTINATION include
        FILES_MATCHING PATTERN "*.h")

# TODO: Add cmake config installation