#pragma once

#include <stddef.h>
#include "logger_interface.h"

typedef struct {
    const char *name;
} stdout_logger_t;

extern const logger_interface_t STDOUT_LOGGER_INTERFACE;