#include <stdio.h>
#include "worker.h"

void component_init(component_t *c,
                    const logger_interface_t *logger,
                    void *logger_instance)
{
    c->logger = logger;
    c->logger_instance = logger_instance;
}

void component_do_work(component_t *c)
{
    c->logger->log(c->logger_instance, "Component did some work");
}
