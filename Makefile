CC=gcc
AC=nasm
TARGET=main
SRC=src/$(TARGET).c
LEXER=src/lexer.c
INCLUDE=include

CFLAGS= -I include -Wall -Wextra -g

all: build build-f

.PHONY: build build-f
build: $(LEXER)
	$(CC) -I include/ $(LEXER) -o $(TARGET)
	./$(TARGET)

build-f: $(LEXER)
	$(CC) $(CFLAGS) $(LEXER) -o $(TARGET)
	./$(TARGET)
clean:
	rm -rf ./$(TARGET)
