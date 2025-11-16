#include <stdio.h>
#include <string.h>
#include "stdout_logger.h"

static void stdout_logger_init(
    void *self, char *buffer, size_t buffer_len, const char *name)
{
    stdout_logger_t *logger = (stdout_logger_t *)self;
    logger->buffer = buffer;
    logger->buffer_len = buffer_len;
    logger->idx = 0;
    logger->name = name;

    snprintf(buffer, buffer_len, "[%s] init\n", name);
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
