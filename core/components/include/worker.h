#pragma once

#include "logger_interface.h"

typedef struct {
    const logger_interface_t *logger;
    void *logger_instance;
} component_t;

void component_init(component_t *c,
                    const logger_interface_t *logger,
                    void *logger_instance);

void component_do_work(component_t *c);
