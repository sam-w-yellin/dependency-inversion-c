CC = gcc
CFLAGS = -std=c17 -O0 -Wall -Wextra -Icore/include -Icore/components/logger/include -Icore/components/worker/include -Iplugins/file_logger/include -Iplugins/stdout_logger/include

SRC = app/main.c \
      core/components/worker/src/worker.c \
      plugins/stdout_logger/src/stdout_logger.c \
      plugins/file_logger/src/file_logger.c

OBJ = $(SRC:.c=.o)

DEMO = demo

all: $(DEMO)

$(DEMO): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

worker.o: core/components/worker/src/worker.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(DEMO) log.txt worker.o

.PHONY: all clean
