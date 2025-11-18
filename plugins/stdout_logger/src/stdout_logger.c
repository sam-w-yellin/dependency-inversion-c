#include <stdio.h>
#include <string.h>
#include "stdout_logger.h"

static void stdout_logger_init()
{
}

static void stdout_logger_log(const char* logger_name, const char *msg)
{
    printf("[%s] %s\n", logger_name, msg);
}

logger_interface_t mk_stdout_logger(const char* name) 
{
    logger_interface_t logger;
    logger.name = name;
    logger.init = stdout_logger_init;
    logger.log = stdout_logger_log;
    return logger;
}
