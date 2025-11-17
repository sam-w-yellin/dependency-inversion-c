#pragma once

#include "logger_interface.h"

typedef struct {
    const logger_interface_t *logger;
} worker_t;

void worker_init(worker_t *w,
                const logger_interface_t *logger);

void worker_do_work(worker_t *w);
