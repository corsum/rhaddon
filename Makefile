CC=gcc
AC=nasm
TARGET=main
SRC=src/$(TARGET).c
LEXER=src/lexer.c
INCLUDE=include

CFLAGS= -I include -Wall -Wextra

all: build build-f

.PHONY: build build-f
build-f: $(LEXER)
	$(CC) -I include $(LEXER) -o $(TARGET)
	./$(TARGET)

build: $(LEXER)
	$(CC) $(CFLAGS) $(LEXER) -o $(TARGET)
	./$(TARGET)
