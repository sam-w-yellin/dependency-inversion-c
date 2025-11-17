#include <stdio.h>
#include "worker.h"
#include "stdout_logger.h"
#include "file_logger.h"

int main(void)
{

    stdout_logger_t stdout1;
    stdout_logger_t stdout2;
    file_logger_t file1;

    STDOUT_LOGGER_INTERFACE.init(&stdout1, "stdout_logger_1");
    STDOUT_LOGGER_INTERFACE.init(&stdout2, "stdout_logger_2");
    FILE_LOGGER_INTERFACE.init(&file1, "file_logger");

    worker_t w1, w2, w3;

    worker_init(&w1, &STDOUT_LOGGER_INTERFACE, &stdout1);
    worker_init(&w2, &STDOUT_LOGGER_INTERFACE, &stdout2);
    worker_init(&w3, &FILE_LOGGER_INTERFACE, &file1);

    worker_do_work(&w1);
    worker_do_work(&w2);
    worker_do_work(&w3);

    return 0;
}
