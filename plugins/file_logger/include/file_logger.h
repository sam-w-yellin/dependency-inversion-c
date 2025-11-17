#pragma once

#include <stdio.h>
#include <stddef.h>
#include "logger_interface.h"

typedef struct {
    FILE *file;
    const char *name;
} file_logger_t;

extern const logger_interface_t FILE_LOGGER_INTERFACE;
