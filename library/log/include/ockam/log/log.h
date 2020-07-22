#ifndef OCKAM_LOG_H
#define OCKAM_LOG_H

#ifdef OCKAM_CUSTOM_LOG_FUNCTION
    #define LOG_FUNCTION(str) OCKAM_CUSTOM_LOG_FUNCTION(str)
#else
    #define LOG_FUNCTION(str) ockam_log_printf(str)
#endif

void ockam_log_printf(const char* str);

#if OCKAM_DISABLE_LOG
#define OCKAM_LOG_ENABLED 0
#else
#define OCKAM_LOG_ENABLED 1
#endif

#define ockam_log(str) \
        do { if (OCKAM_LOG_ENABLED) LOG_FUNCTION(str); } while(0)

#endif //OCKAM_LOG_H
