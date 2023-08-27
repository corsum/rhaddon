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

// Token Util is extension for token.h which contains of...

#ifndef TOKENUTIL_H
#define TOKENUTIL_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "token.h"
// This structure is used to store information about a token features, such as its type, sort, and 

typedef struct tokenCONST{
  tokenTYPE tokenType;
  tokenSORT tokenSort;
}tokenCONST;

tokenCONST token;

/**
 * Function `checkToken`
 * The `checkToken` function takes input token and returns its type.
 * 
 * @param token. Token
 * @return token type. Token type.
*/

// Check for variable tokens

void checkToken(char *tokenCHECK){
   if(strcmp(tokenCHECK, "int") == 0   || strcmp(tokenCHECK, "bool") == 0   ||
      strcmp(tokenCHECK, "const") == 0 || strcmp(tokenCHECK, "string") == 0 ||
      strcmp(tokenCHECK, "float") == 0 || strcmp(tokenCHECK, "void") == 0   ||
      strcmp(tokenCHECK, "enum") == 0  || strcmp(tokenCHECK, "struct") == 0 ||
      strcmp(tokenCHECK, "double") == 0
   ){token.tokenSort = TOK_VAR;}

   else if(strcmp(tokenCHECK, "=") == 0  || strcmp(tokenCHECK, "==") == 0 ||
           strcmp(tokenCHECK, "!") == 0  || strcmp(tokenCHECK, "!=") == 0 ||
           strcmp(tokenCHECK, "/") == 0  || strcmp(tokenCHECK, "/=") == 0 ||
           strcmp(tokenCHECK, "+") == 0  || strcmp(tokenCHECK, "+=") == 0 ||
           strcmp(tokenCHECK, "%") == 0  || strcmp(tokenCHECK, "%=") == 0 ||
           strcmp(tokenCHECK, ">") == 0  || strcmp(tokenCHECK, ">=") == 0 ||
           strcmp(tokenCHECK, "<") == 0  || strcmp(tokenCHECK, "<=") == 0 ||
           strcmp(tokenCHECK, "@") == 0  || strcmp(tokenCHECK, "@=") == 0 ||
           strcmp(tokenCHECK, "&&") == 0 || strcmp(tokenCHECK, "&=") == 0 ||
           strcmp(tokenCHECK, "||") == 0 || strcmp(tokenCHECK, "|=") == 0
   ){token.tokenSort = TOK_OPER;}
   
   else if(strcmp(tokenCHECK, "(") == 0  || strcmp(tokenCHECK, ")") == 0 ||
           strcmp(tokenCHECK, "{") == 0  || strcmp(tokenCHECK, "}") == 0 ||
           strcmp(tokenCHECK, "[") == 0  || strcmp(tokenCHECK, "]") == 0 ||
           strcmp(tokenCHECK, "\"") == 0 || strcmp(tokenCHECK, "'") == 0 ||
           strcmp(tokenCHECK, ".") == 0  || strcmp(tokenCHECK, ",") == 0 ||
           strcmp(tokenCHECK, ":") == 0  || strcmp(tokenCHECK, ";") == 0 
   ){token.tokenSort = TOK_SEPAR;}
 
   else if(strcmp(tokenCHECK, "using") == 0  || strcmp(tokenCHECK, "switch") == 0    ||
           strcmp(tokenCHECK, "case") == 0   || strcmp(tokenCHECK, "namespace") == 0 ||
           strcmp(tokenCHECK, "return") == 0 || strcmp(tokenCHECK, "if") == 0        ||
           strcmp(tokenCHECK, "else") == 0   || strcmp(tokenCHECK, "break") == 0     ||
           strcmp(tokenCHECK, "and") == 0    || strcmp(tokenCHECK, "while") == 0     ||
           strcmp(tokenCHECK, "for") == 0    || strcmp(tokenCHECK, "continue") == 0 
   ){token.tokenSort = TOK_KEY;}
   
   else{
     token.tokenSort = TOK_NONE;
     }
      
   char *tokenstr;
   switch (token.tokenSort){
      case 0:
        tokenstr = "TOK_VAR";
        break;
      case 1:
        tokenstr = "TOK_OPER";
        break;
      case 2:
        tokenstr = "TOK_SEPAR";
        break;
      case 3:
        tokenstr = "TOK_KEY";
        break;
      case 4:
        tokenstr = "TOK_NONE";
        break;  
   }
  printf("%d\n", token.tokenSort);
  printf("%s\n", tokenstr);
}
#endif
