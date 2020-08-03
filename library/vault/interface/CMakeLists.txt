add_library(ockam_vault_interface)

target_sources(ockam_vault_interface
    PRIVATE
        "include/ockam/vault/interface/vault.h"
        "include/ockam/vault/interface/private/vault_private.h"
        "src/vault.c")

target_include_directories(ockam_vault_interface
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_LIST_DIR}/include>
        $<INSTALL_INTERFACE:${CMAKE_INSTALL_INCLUDEDIR}>)

target_link_libraries(ockam_vault_interface
    PUBLIC
        ockam_error
        ockam_memory
    PRIVATE
        ockam_log)