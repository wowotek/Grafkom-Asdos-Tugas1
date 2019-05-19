CC=g++
CFLAGS=-Wall
all:
	$(CC) $(CFLAGS) src/main.cpp -o bin/main.exec
