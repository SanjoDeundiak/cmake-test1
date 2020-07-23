#include <assert.h>
#include <stdlib.h>
#include <ockam/memory/stdlib/private/memory_stdlib_private.h>
#include <ockam/log/log.h>
#include "memory_alloc_helper.h"

int ockam_memory_stdlib_new(ockam_memory_stdlib_t** memory) {
    assert(NULL != memory);

    *memory = malloc(sizeof(ockam_memory_stdlib_t));

    return ockam_memory_stdlib_init(*memory);
}

int ockam_memory_stdlib_init(ockam_memory_stdlib_t* memory) {
    assert(NULL != memory);

    ockam_log_set_level(OCKAM_LOG_LEVEL_WARN);

    ockam_log_info("This is ockam memory stdlib init INFO");
    ockam_log_debug("This is ockam memory stdlib init DEBUG");
    ockam_log_warn("This is ockam memory stdlib init WARN");
    ockam_log_error("This is ockam memory stdlib init ERROR");
    ockam_log_fatal("This is ockam memory stdlib init FATAL");

    memory->foo = 3;
    memory->bar = 5;

    return 0;
}

void ockam_memory_stdlib_deinit(ockam_memory_stdlib_t* memory) {
    if (NULL != memory) {
        memory->foo = 0;
        memory->bar = 0;
    }
}

void ockam_memory_stdlib_delete(ockam_memory_stdlib_t** memory) {
    assert(NULL != memory);

    ockam_memory_stdlib_deinit(*memory);

    *memory = NULL;
}

int ockam_memory_stdlib_alloc_zeroed(ockam_memory_stdlib_t* memory, void** buffer, size_t buffer_size) {
    assert(NULL != memory);
    assert(NULL != buffer);
    assert(0 != buffer_size);

    int test = memory->foo + memory->bar + help_alloc_memory();

    *buffer = malloc(buffer_size);
    // TODO

    return test;
}