CC = gcc
CFLAGS = -Wall -Wextra -g -std=gnu11
SRC = $(filter-out src/files.c, $(wildcard src/*.c))

server: src/*.c
	$(CC) $(CFLAGS) -o server src/*.c

clean: 
	rm -f server

