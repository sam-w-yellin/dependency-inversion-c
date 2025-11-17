#include <stdio.h>
#include <string.h>
#include "file_logger.h"

static void file_logger_init(
    void *self, const char *name)
{
    file_logger_t *logger = (file_logger_t *)self;

    logger->file = fopen("log.txt", "a");
    logger->name = name;
}

static void file_logger_log(void *self, const char *msg)
{
    file_logger_t *logger = (file_logger_t *)self;

    if (logger->file) {
        fprintf(logger->file, "[%s] %s\n", logger->name, msg);
        fflush(logger->file);
    }
}

const logger_interface_t FILE_LOGGER_INTERFACE = {
    .init = file_logger_init,
    .log = file_logger_log
};
