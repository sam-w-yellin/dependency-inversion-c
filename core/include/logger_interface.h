#pragma once

#include <stddef.h>

typedef struct logger_interface {
    void (*init)(void *self,
                 char *buffer,
                 size_t buffer_len,
                 const char *name);
    void (*log)(void *self, const char *msg);
} logger_interface_t;
