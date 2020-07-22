#include <ockam/log/log.h>

#if OCKAM_CUSTOM_LOG_FUNCTION
void (*ockam_log)(const char* str);
void set_log_function(void (*log_function)(const char* str)) {
    ockam_log = log_function;
}
#else
#include <stdio.h>
void ockam_log_printf(const char* str) {
    printf("%s\n", str);
}
void (*ockam_log)(const char* str) = ockam_log_printf;
#define LOG_FUNCTION(str) ockam_log_printf(str)
#endif