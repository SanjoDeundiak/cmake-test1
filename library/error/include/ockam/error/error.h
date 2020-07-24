#ifndef OCKAM_ERROR_H
#define OCKAM_ERROR_H

typedef struct {
    int code;
    const char* domain;
} ockam_error_t;

typedef enum {
    OCKAM_ERROR_NONE = 0,
} ockam_error_code_t;

#endif //OCKAM_ERROR_H
