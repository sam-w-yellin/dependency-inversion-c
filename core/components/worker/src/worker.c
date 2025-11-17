#include <stdio.h>
#include "worker.h"

void worker_init(worker_t *w,
                    const logger_interface_t *logger)
{
    w->logger = logger;
    w->logger->init();
}

void worker_do_work(worker_t *w)
{
    w->logger->log(w->logger->name, "Worker did some work");
}
