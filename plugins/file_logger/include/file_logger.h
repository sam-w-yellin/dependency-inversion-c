#pragma once

#include <stdio.h>
#include <stddef.h>
#include "logger_interface.h"

logger_interface_t mk_file_logger(const char* name);
