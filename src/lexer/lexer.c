/*
    Rhaddon - High level procedural programming language.
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

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <alias.h>
#include <token.h>
#include <error.h>
#include "lexer.h"
#define VAR 	  (0)
#define KEYWORD   (1)
#define OPERATOR  (2)
#define SEPARATOR (3)
#define LITERAL   (4)

/*
\033[0;31m Red
\033[0;32m Green
\033[1;32m Yellow
\033[0;34m Blue
\033[0m    Default
*/

STR tokenizz(STR src, const STR delim){
   return 0;
}

typedef struct Node{
  int data;
  struct node *next;
}Node;

STR openFile(STR src){
  FILE *file = fopen(src,"r");
}

typedef struct Lexer{
  STR input;
  STR *token;
} Lexer;

int main(){
  STR token[256];
  Lexer lexer = {"dsa",token};
  openFile("main.rh");
  return 0;
}
