#include <assert.h>
#include <ockam/log/log.h>
#include <ockam/memory/stdlib/memory_stdlib_impl.h>
#include <ockam/memory/stdlib/memory_stdlib.h>

int main(void) {
    ockam_log_set_level(OCKAM_LOG_LEVEL_WARN);

    ockam_memory_t *memory;
    ockam_error_t error = ockam_memory_new_with_stdlib(&memory);

    if (error.code != OCKAM_ERROR_NONE) {

    }

    assert(error.code == OCKAM_ERROR_NONE);
    assert(error.domain == OCKAM_MEMORY_STDLIB_ERROR_DOMAIN);

    char* buffer;

    error = ockam_memory_alloc_zeroed(memory, (void **) &buffer, 5);

    assert(error.code == OCKAM_MEMORY_STDLIB_ERROR_OUT_OF_MEMORY);
    assert(error.domain == OCKAM_MEMORY_STDLIB_ERROR_DOMAIN);
}