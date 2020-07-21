// This is private header with struct definition. Acts like public, but should not be included in most cases

#ifndef TEST1_MEMORY_PRIVATE_H
#define TEST1_MEMORY_PRIVATE_H

#include "memory.h"

typedef struct {
    int (*deinit)(ockam_memory_t* memory);

    int (*alloc_zeroed)(ockam_memory_t* memory, void** buffer, size_t buffer_size);
} ockam_memory_dispatch_table_t;

struct ockam_memory_t {
    ockam_memory_dispatch_table_t* dispatch;
    void*                          context;
};

#endif //TEST1_MEMORY_PRIVATE_H
