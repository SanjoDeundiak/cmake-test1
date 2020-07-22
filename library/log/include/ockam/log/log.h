#ifndef OCKAM_LOG_H
#define OCKAM_LOG_H

#if OCKAM_CUSTOM_LOG_FUNCTION
void ockam_set_log_function(void (*log_function)(const char* str));
#endif

#if OCKAM_DISABLE_LOG
#define OCKAM_LOG_ENABLED 0
#else
#define OCKAM_LOG_ENABLED 1
#endif

void ockam_log_print(const char* str);

#define ockam_log(str) \
        do { if (OCKAM_LOG_ENABLED) ockam_log_print(str); } while(0)

#endif //OCKAM_LOG_H
