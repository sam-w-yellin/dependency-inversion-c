#pragma once

#include <stddef.h>

typedef struct logger_interface {
    void (*init)(void);
    void (*log)(const char* logger_name, const char *msg);
    const char* name;
} logger_interface_t;

