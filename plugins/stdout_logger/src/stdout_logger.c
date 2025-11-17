#include <stdio.h>
#include <string.h>
#include "stdout_logger.h"

static void stdout_logger_init(
    void *self, const char *name)
{
    stdout_logger_t *logger = (stdout_logger_t *)self;
    logger->name = name;
}

static void stdout_logger_log(void *self, const char *msg)
{
    stdout_logger_t *logger = (stdout_logger_t *)self;

    printf("[%s] %s\n", logger->name, msg);
}

const logger_interface_t STDOUT_LOGGER_INTERFACE = {
    .init = stdout_logger_init,
    .log = stdout_logger_log
};
