//
// Created by Oleksandr Deundiak on 21.07.2020.
//

#ifndef OCKAM_VAULT_H
#define OCKAM_VAULT_H

#include <stddef.h>
#include <stdint.h>
#include <ockam/error/error.h>

typedef struct ockam_vault_t ockam_vault_t;

void ockam_vault_deinit(ockam_vault_t* vault);
ockam_error_t ockam_vault_random_bytes_generate(ockam_vault_t* vault, uint8_t* buffer, size_t buffer_size);
// Other functions...

#endif //OCKAM_VAULT_H
