#include <ockam/memory/stdlib/memory_stdlib.h>
#include "memory_stdlib_error.h"

const char* const OCKAM_MEMORY_STDLIB_ERROR_DOMAIN = "OCKAM_MEMORY_STDLIB_DOMAIN";

ockam_error_t ockam_memory_std_lib_error_none = {
        OCKAM_ERROR_NONE,
        OCKAM_MEMORY_STDLIB_ERROR_DOMAIN
};