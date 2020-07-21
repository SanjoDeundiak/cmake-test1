// This is implementation

#include <assert.h>
#include "memory.h"
#include "private/memory_private.h"

int ockam_memory_deinit(ockam_memory_t* memory)
{
    assert(NULL != memory); // TODO: Replace with macro that potentially can be customisable, have error descriptions, etc.
    assert(NULL != memory->dispatch);

    return memory->dispatch->deinit(memory);
}

int ockam_memory_alloc_zeroed(ockam_memory_t* memory, void** buffer, size_t buffer_size)
{
    assert(NULL != memory); // TODO: Replace with macro that potentially can be customisable, have error descriptions, etc.
    assert(NULL != memory->dispatch);

    return memory->dispatch->alloc_zeroed(memory, buffer, buffer_size);
}