CC=gcc
AC=nasm
TARGET=main
SRC=src/$(TARGET).c
LEXER=src/lexer.c
INCLUDE=include

CFLAGS= -I include -Wall -Wextra

all: build

.PHONY: build
build: $(LEXER)
	$(CC) $(CFLAGS) $(LEXER) -o $(TARGET)
	./$(TARGET)
