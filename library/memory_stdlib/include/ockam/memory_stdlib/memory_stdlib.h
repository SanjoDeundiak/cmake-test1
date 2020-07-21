//
// Created by Oleksandr Deundiak on 21.07.2020.
//

#ifndef TEST1_MEMORY_STDLIB_H
#define TEST1_MEMORY_STDLIB_H

#include <stddef.h>

// This is for implementation context (useless for memory, but useful as an example)
typedef struct ockam_memory_stdlib_t ockam_memory_stdlib_t;

int memory_stdlib_deinit(ockam_memory_stdlib_t* memory);
int memory_stdlib_alloc_zeroed(ockam_memory_stdlib_t* memory, void** buffer, size_t buffer_size);

#endif //TEST1_MEMORY_STDLIB_H
