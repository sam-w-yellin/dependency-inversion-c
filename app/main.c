#include <stdio.h>
#include "worker.h"
#include "stdout_logger.h"
#include "file_logger.h"

int main(void)
{

    logger_interface_t stdout1 = mk_stdout_logger("stdout1");
    logger_interface_t stdout2 = mk_stdout_logger("stdout2");
    logger_interface_t file1 = mk_file_logger("file1");

    stdout1.init();
    stdout2.init();
    file1.init();
    worker_t w1, w2, w3;

    worker_init(&w1, &stdout1);
    worker_init(&w2, &stdout2);
    worker_init(&w3, &file1);

    worker_do_work(&w1);
    worker_do_work(&w2);
    worker_do_work(&w3);

    return 0;
}
