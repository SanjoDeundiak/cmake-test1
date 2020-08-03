//
// Created by Oleksandr Deundiak on 21.07.2020.
//

#include <ockam/vault/interface/private/vault_private.h>

void ockam_vault_deinit(ockam_vault_t* vault) {
    vault->dispatch->deinit(vault->ctx);
}

ockam_error_t ockam_vault_random_bytes_generate(ockam_vault_t* vault, uint8_t* buffer, size_t buffer_size) {
    return vault->dispatch->ockam_vault_random_bytes_generate(vault->ctx, buffer, buffer_size);
}