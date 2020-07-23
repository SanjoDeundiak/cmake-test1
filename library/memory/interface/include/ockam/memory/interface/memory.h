// This is public header with declarations only.

#ifndef OCKAM_MEMORY_H
#define OCKAM_MEMORY_H

#include <stddef.h>
#include <ockam/error/error.h>

typedef struct ockam_memory_t ockam_memory_t;

void ockam_memory_deinit(ockam_memory_t* memory);
ockam_error_t ockam_memory_alloc_zeroed(ockam_memory_t* memory, void** buffer, size_t buffer_size);
// Other functions go here

#endif //OCKAM_MEMORY_H
