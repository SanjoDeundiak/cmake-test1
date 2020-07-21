// This is public header with declarations only.

#ifndef TEST1_MEMORY_H
#define TEST1_MEMORY_H

#include <stddef.h>

typedef struct ockam_memory_t ockam_memory_t;

int ockam_memory_deinit(ockam_memory_t* memory);
int ockam_memory_alloc_zeroed(ockam_memory_t* memory, void** buffer, size_t buffer_size);
// Other functions go here

#endif //TEST1_MEMORY_H
