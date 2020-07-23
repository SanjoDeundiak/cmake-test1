// This is private header with struct definition. Acts like public, but should not be included in most cases

#ifndef OCKAM_MEMORY_PRIVATE_H
#define OCKAM_MEMORY_PRIVATE_H

#include <ockam/memory/interface/memory.h>

typedef struct {
    void (*deinit)(void* ctx);

    ockam_error_t (*alloc_zeroed)(void* ctx, void** buffer, size_t buffer_size);
} ockam_memory_dispatch_table_t;

struct ockam_memory_t {
    ockam_memory_dispatch_table_t* dispatch;
    void*                          ctx;
};

#endif //OCKAM_MEMORY_PRIVATE_H
