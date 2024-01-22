CC=gcc
AC=nasm
TARGET=main
SRC=src/$(TARGET).c
LEXER=src/lexer.c
INCLUDE=include

all: build

.PHONY: build
build: $(LEXER)
	$(CC) -I $(INCLUDE) $(LEXER) -o $(TARGET)
	./$(TARGET)
