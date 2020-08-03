//
// Created by Oleksandr Deundiak on 03.08.2020.
//

#ifndef OCKAM_VAULT_PRIVATE_H
#define OCKAM_VAULT_PRIVATE_H

#include <ockam/vault/interface/vault.h>

typedef struct {
    void (*deinit)(void* ctx);
    ockam_error_t (*ockam_vault_random_bytes_generate)(void* ctx, uint8_t* buffer, size_t buffer_size);
} ockam_vault_dispatch_table_t;

struct ockam_vault_t {
    ockam_vault_dispatch_table_t* dispatch;
    void*                          ctx;
};

#endif //OCKAM_VAULT_PRIVATE_H
