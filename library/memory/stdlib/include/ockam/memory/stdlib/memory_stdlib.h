//
// Created by Oleksandr Deundiak on 21.07.2020.
//

#ifndef OCKAM_MEMORY_STDLIB_H
#define OCKAM_MEMORY_STDLIB_H

#include <stddef.h>
#include <ockam/error/error.h>

typedef enum ockam_memory_stdlib_error_t {
    OCKAM_MEMORY_STDLIB_ERROR_NONE,
    OCKAM_MEMORY_STDLIB_ERROR_OUT_OF_MEMORY,
} ockam_memory_stdlib_error_t;

extern const char* const OCKAM_MEMORY_STDLIB_ERROR_DOMAIN;

// This is for implementation context (useless for memory, but useful as an example)
typedef struct ockam_memory_stdlib_t ockam_memory_stdlib_t;

ockam_error_t  ockam_memory_stdlib_new(ockam_memory_stdlib_t** memory);
ockam_error_t  ockam_memory_stdlib_init(ockam_memory_stdlib_t* memory);
void ockam_memory_stdlib_deinit(ockam_memory_stdlib_t* memory);
void ockam_memory_stdlib_delete(ockam_memory_stdlib_t** memory);
ockam_error_t ockam_memory_stdlib_alloc_zeroed(ockam_memory_stdlib_t* memory, void** buffer, size_t buffer_size);

#endif //OCKAM_MEMORY_STDLIB_H
