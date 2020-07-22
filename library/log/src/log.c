#include <stdio.h>
#include <ockam/log/log.h>

#ifndef OCKAM_CUSTOM_LOG
void ockam_log_printf(const char* str) {
    printf("%s\n", str);
}
#endif