add_library(ockam_vault_default)

target_sources(ockam_vault_default
    PRIVATE
        "include/ockam/vault/default/vault_default.h"
        "include/ockam/vault/default/vault_default_impl.h"
        "include/ockam/vault/default/private/vault_default_private.h"
        "src/default_impl.c"
        "src/default.c")

target_include_directories(ockam_vault_default
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>)

target_link_libraries(ockam_vault_default
    PUBLIC
        ockam_vault_interface
        ockam_error
        ockam_memory
    PRIVATE
        ockam_log)

#install(TARGETS ockam_vault)
#
#install(DIRECTORY ${CMAKE_CURRENT_LIST_DIR}/include/ockam
#        DESTINATION include
#        FILES_MATCHING PATTERN "*.h")

# TODO: Add cmake config installation