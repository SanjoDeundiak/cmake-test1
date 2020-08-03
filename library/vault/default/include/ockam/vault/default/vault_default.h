//
// Created by Oleksandr Deundiak on 03.08.2020.
//

#ifndef OCKAM_VAULT_DEFAULT_H
#define OCKAM_VAULT_DEFAULT_H

#include <stdint.h>
#include <ockam/memory/interface/memory.h>

typedef struct {
    ockam_memory_t* memory;
//    ockam_random_t* random;
    uint32_t        features;
} ockam_vault_default_attributes_t;

typedef struct ockam_vault_default_t ockam_vault_default_t;

ockam_error_t ockam_vault_default_new(ockam_vault_default_t** vault, ockam_vault_default_attributes_t* attributes);
ockam_error_t ockam_vault_default_init(ockam_vault_default_t* vault, ockam_vault_default_attributes_t* attributes);
void ockam_vault_default_deinit(ockam_vault_default_t* vault);
void ockam_vault_default_delete(ockam_vault_default_t** vault);

#endif //OCKAM_VAULT_DEFAULT_H
