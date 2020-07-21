add_library(ockam_vault)

target_sources(ockam_vault
    PRIVATE
        "${CMAKE_CURRENT_LIST_DIR}/include/ockam/vault/vault.h"
        "${CMAKE_CURRENT_LIST_DIR}/src/vault.c")

target_include_directories(ockam_vault
    PUBLIC
        "${CMAKE_CURRENT_LIST_DIR}/include/ockam/vault")

target_link_libraries(ockam_vault
    PUBLIC
        ockam_memory)