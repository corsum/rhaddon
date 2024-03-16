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

#ifdef __cplusplus
extern "C"{
#endif
#ifndef TOKEN_H
#define TOKEN_H
#include <string.h>
#include <stdint.h>
#include "lexeme.h"

/*
* @struct	doubleOperator
*
* @field	fChar
* @field	sChar
*/

typedef struct doubleOperator{
   int fChar;
   int sChar;
} doubleOperator;


/*
* @enum	tokenType
*
* @constant	T_VAR	Token type for variables e.g int, bool
* @constant	T_KEY	Token type for keywords e.g switch, if
* @constant	T_OPER	Token type for operators e.g +,-
* @constant	T_SEP	Token type for sperators e.g (,{ 
* @constant	T_LIT	Token type for literals e.g 0.80,"Hello world!"
* @constant	T_ID	Token type for identifiers e.g a
*/

typedef enum tokenType{
  T_VAR, T_KEY, T_OPER, T_SEP, T_LIT, T_ID
}tokenType;

/*
* @struct	Token
*
* @field size_t tokenKind
* @field enum   tokenType
* @field size_t tokenRow
* @field size_t tokenCol
* @field
*/

typedef struct Token{
  size_t tokenKind;
  tokenType tokenType;
  size_t tokenRow;
  size_t tokenCol;
} Token;

/*
* @function
*
* @param const char token
*
* @return tokenKind 
*/

int checkChar(Token token, const char symbol){
   token.tokenType = 2;
   switch(symbol){
     case '&': return token.tokenKind = 0;
     case ':': return token.tokenKind = 1;
     case '.': return DOT;
     case '=': return EQUAL;
     case '!': return EXCLAMATION;
     case '-': return MINUS;
     case '%': return PERCENT;
     case '|': return PIPE;
     case '+': return PLUS;
     case ';': return SEMICOLON;
     case '/': return SLASH;
     case '*': return ASTERISK;
     case '^': return XOR;
     case '@': return AT;
     case '#': return HASH;
  }
}

/*
* @function	doubleChars
*
* @param	token
*
* @return	@struct doubleOperator
*
*/

char *doubleChars(const char *token){
 doubleOperator DOP = {0,0};
 if(strlen(token) == 2){
  if(token[0] == '+' ){
     switch(token[1]){
      case '+': DOP.sChar = 0;
      case '=': DOP.fChar = 3;
   }
}
  if(token[0] == '-' ){
     switch(token[1]){
      case '-': printf("minus");
      case '=': printf("minusek");
   }
}
   if(token[0] == '<' ){
     switch(token[1]){
      case '<': printf("minus");
      case '=': printf("minusek");
   }
}
   if(token[0] == '>' ){
     switch(token[1]){
      case '>': printf("minus");
      case '=': printf("minusek");
   }
}
   if(token[0] == '&' ){
     switch(token[1]){
      case '&': printf("minus");
      case '=': printf("minusek");
   }
}
   if(token[0] == '|' ){
     switch(token[1]){
      case '|': printf("minus");
      case '=': printf("minusek");
   }
}
   if(token[0] == '!' ){
     switch(token[1]){
      case '=':
        printf("minus");
   }
  }
 }
}


#ifdef __cplusplus
}
#endif
#endif
