//
// Created by Oleksandr Deundiak on 03.08.2020.
//

#ifndef OCKAM_VAULT_DEFAULT_IMPL_H
#define OCKAM_VAULT_DEFAULT_IMPL_H

#include <ockam/vault/default/vault_default.h>

ockam_error_t ockam_vault_new_with_default(ockam_vault_t** vault, ockam_vault_default_attributes_t* attributes);
ockam_error_t ockam_vault_init_with_default(ockam_vault_t* vault, ockam_vault_default_attributes_t* attributes);

#endif //OCKAM_VAULT_DEFAULT_IMPL_H
