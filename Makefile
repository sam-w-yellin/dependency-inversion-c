CC = gcc
CFLAGS = -std=c17 -Wall -Wextra -Icore/include -Icore/components/include -Iplugins/file_logger/include -Iplugins/stdout_logger/include

SRC = app/main.c \
      core/components/src/worker.c \
      plugins/stdout_logger/src/stdout_logger.c \
      plugins/file_logger/src/file_logger.c

OBJ = $(SRC:.c=.o)

DEMO = demo

all: $(DEMO)

$(DEMO): $(OBJ)
	$(CC) $(CFLAGS) $^ -o $@

worker.o: components/src/worker.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(DEMO) log.txt

.PHONY: all clean
