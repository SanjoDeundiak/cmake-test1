#ifndef OCKAM_LOG_H
#define OCKAM_LOG_H

#if OCKAM_CUSTOM_LOG_FUNCTION
void set_log_function(void (*log_function)(const char* str));
#else
void ockam_log_printf(const char* str);
#endif

#if OCKAM_DISABLE_LOG
#define OCKAM_LOG_ENABLED 0
#else
#define OCKAM_LOG_ENABLED 1
#endif

#define ockam_log(str) \
        do { if (OCKAM_LOG_ENABLED) LOG_FUNCTION(str); } while(0)

#endif //OCKAM_LOG_H
