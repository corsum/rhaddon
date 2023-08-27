/*
    Rhaddon - Low level procedural programming language.
    Copyright (C) 2023  Kacper Popek

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

// Lexical Analyzer takes file path and opens it, then its content is tokenized. 

#ifndef LEXER_H
#define LEXER_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "token_ext.h"
#define MAX 256

/**
 * Function `read`
 * The `read` function takes file location ,opens it and then its content is lexically analyzed.
 * 
 * @param path. Path to file needed to be open ,read and tokenized.
 * @return tokenized content. Tokenized file content.
*/

char *read(char *path){
   char buffer[MAX];
   FILE * fP = fopen(path, "r");
   if(!fP){
      perror("Error while opening a file or directory");
      return NULL;
   }
   else {
   while(fgets(buffer, MAX, fP) !=NULL){
   printf("%s\n", buffer);
    }
   fclose(fP);
}
   char *tokenizedString = strtok(buffer, " ");
   return tokenizedString;
}

int lexer(char *path){
   char *content = read(path);
   printf("%s", content);
   char token[MAX];
   scanf("%s", token);
   checkToken(token);
   return 0;
}
#endif
