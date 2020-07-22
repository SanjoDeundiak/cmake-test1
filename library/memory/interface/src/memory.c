// This is implementation

#include <assert.h>
#include "interface/memory.h"
#include "interface/private/memory_private.h"

void ockam_memory_deinit(ockam_memory_t* memory)
{
    assert(NULL != memory); // TODO: Replace with macro that potentially can be customisable, have error descriptions, etc.
    assert(NULL != memory->dispatch);

    memory->dispatch->deinit(memory->ctx);
}

int ockam_memory_alloc_zeroed(ockam_memory_t* memory, void** buffer, size_t buffer_size)
{
    assert(NULL != memory); // TODO: Replace with macro that potentially can be customisable, have error descriptions, etc.
    assert(NULL != memory->dispatch);

    return memory->dispatch->alloc_zeroed(memory->ctx, buffer, buffer_size);
}