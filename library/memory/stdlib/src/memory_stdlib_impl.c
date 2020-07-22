#include <stdlib.h>
#include <assert.h>
#include "memory_stdlib.h"
#include "interface/memory.h"
#include "interface/private/memory_private.h"
#include "private/memory_stdlib_private.h"
#include "memory_stdlib_impl.h"

static ockam_memory_dispatch_table_t dispatch = {
        (void (*)(void *)) ockam_memory_stdlib_deinit,
        (void (*)(void *)) ockam_memory_alloc_zeroed,
};

int ockam_memory_new_with_stdlib(ockam_memory_t** memory) {
    assert(NULL != memory);

    int error = 0;

    *memory = malloc(sizeof(ockam_memory_t));

    ockam_memory_stdlib_new((ockam_memory_stdlib_t**)&(*memory)->ctx);

    (*memory)->dispatch = &dispatch;

    return error;
}

