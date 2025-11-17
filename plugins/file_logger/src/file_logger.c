#include <stdio.h>
#include <string.h>
#include "file_logger.h"

static char* logname = "log.txt";

static void file_logger_init()
{
    FILE* f = fopen(logname, "w");
    if (f != NULL) {
        fclose(f);
    }
}

static void file_logger_log(const char* logger_name, const char *msg)
{
    FILE* f = fopen(logname, "a");
    if (f != NULL) {
        fprintf(f, "[%s] %s\n", logger_name, msg);
        fflush(f);
        fclose(f);
    }
}

logger_interface_t mk_file_logger(const char* name) {
    logger_interface_t logger;
    logger.name = name;
    logger.init = file_logger_init;
    logger.log = file_logger_log;
    return logger;
}
