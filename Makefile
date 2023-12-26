CC=gcc
ASMC=nasm
TARGET=main
SOURCE=src/$(TARGET).c
LEXER=src/lexer/lexer.c
INCLUDE=include

all: build

.PHONY: build
build: $(LEXER)
	$(CC) -I $(INCLUDE) $(LEXER) -o $(TARGET)
	./$(TARGET)
