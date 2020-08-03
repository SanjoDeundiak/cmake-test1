//
// Created by Oleksandr Deundiak on 03.08.2020.
//

#ifndef OCKAM_VAULT_DEFAULT_PRIVATE_H
#define OCKAM_VAULT_DEFAULT_PRIVATE_H

#include <ockam/vault/default/vault_default.h>

struct ockam_vault_default_t {
    ockam_memory_t* memory;
//    ockam_random_t* random;
//    uint32_t        features;
    uint32_t        default_features;
    void*           random_ctx;
    void*           sha256_ctx;
    void*           hkdf_sha256_ctx;
    void*           aead_aes_gcm_ctx;
};

#endif //OCKAM_VAULT_DEFAULT_PRIVATE_H
