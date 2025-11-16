#include <stdio.h>
#include "worker.h"

void worker_init(worker_t *w,
                    const logger_interface_t *logger,
                    void *logger_instance)
{
    w->logger = logger;
    w->logger_instance = logger_instance;
}

void worker_do_work(worker_t *w)
{
    w->logger->log(w->logger_instance, "Worker did some work");
}
