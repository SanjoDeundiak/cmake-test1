add_library(ockam_error INTERFACE)

target_sources(ockam_error
    INTERFACE
        "${CMAKE_CURRENT_LIST_DIR}/include/ockam/error/error.h")

target_include_directories(ockam_error
    INTERFACE
        $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>)

install(TARGETS ockam_error)

install(DIRECTORY ${CMAKE_CURRENT_LIST_DIR}/include/ockam
        DESTINATION include
        FILES_MATCHING PATTERN "*.h")

# TODO: Add cmake config installation