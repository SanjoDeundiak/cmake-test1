#include <stdlib.h>
#include <assert.h>
#include <ockam/memory/stdlib/memory_stdlib.h>
#include <ockam/memory/interface/private/memory_private.h>
#include <ockam/memory/stdlib/private/memory_stdlib_private.h>
#include <ockam/memory/stdlib/memory_stdlib_impl.h>
#include "memory_stdlib_error.h"

static ockam_memory_dispatch_table_t dispatch = {
        (void (*)(void *)) ockam_memory_stdlib_deinit,
        // Type-casts should be checked manually...
        (ockam_error_t (*)(void *, void **, size_t)) ockam_memory_stdlib_alloc_zeroed,
};

ockam_error_t ockam_memory_new_with_stdlib(ockam_memory_t** memory) {
    assert(NULL != memory);

    ockam_error_t error = ockam_memory_std_lib_error_none;

    *memory = malloc(sizeof(ockam_memory_t));

    ockam_memory_stdlib_new((ockam_memory_stdlib_t**)&(*memory)->ctx);

    (*memory)->dispatch = &dispatch;

    return error;
}

