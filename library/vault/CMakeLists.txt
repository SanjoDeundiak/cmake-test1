add_library(ockam_vault)

target_sources(ockam_vault
    PRIVATE
        "${CMAKE_CURRENT_LIST_DIR}/include/ockam/vault/vault.h"
        "${CMAKE_CURRENT_LIST_DIR}/src/vault.c")

target_include_directories(ockam_vault
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>)

target_link_libraries(ockam_vault
    PUBLIC
        ockam_memory)

install(TARGETS ockam_vault)

install(DIRECTORY ${CMAKE_CURRENT_LIST_DIR}/include/ockam
        DESTINATION include
        FILES_MATCHING PATTERN "*.h")

# TODO: Add cmake config installation