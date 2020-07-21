#include <stdlib.h>
#include <assert.h>
#include "private/memory_private.h"
#include "private/memory_stdlib_private.h"
#include "memory_stdlib_impl.h"

int deinit(ockam_memory_t* memory) {
    return memory_stdlib_deinit(memory->context);
}

int alloc_zeroed(ockam_memory_t* memory, void** buffer, size_t buffer_size) {
    return memory_stdlib_alloc_zeroed(memory->context, buffer, buffer_size);
}

static ockam_memory_dispatch_table_t dispatch = {
        deinit,
        alloc_zeroed
};

int ockam_memory_init_stdlib(ockam_memory_t** memory) {
    assert(NULL != memory);

    int error = 0;

    *memory = malloc(sizeof(ockam_memory_t));

    ockam_memory_stdlib_t* context = malloc(sizeof(ockam_memory_stdlib_t));

    (*memory)->context = context;

    context->foo = 1;
    context->bar = 2;

    (*memory)->dispatch = &dispatch;

    return error;
}

