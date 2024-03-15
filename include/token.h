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

// OPERATORS
#define AMPER       ( 0)
#define COMMA       ( 1)
#define DOT         ( 2)
#define EQUAL       ( 3)
#define EXCLAMATION ( 4) 
#define MINUS       ( 5)
#define PERCENT     ( 6)
#define PIPE        ( 7)
#define PLUS        ( 8)
#define SEMICOLON   ( 9)
#define SLASH       (10)
#define ASTERISK    (11)
#define XOR         (12)
#define AT          (13)
#define HASH	    (14)

// SEPARATORS
#define L_BRACKET   (15)
#define R_BRACKET   (16)
#define L_C_BRACKET (17)
#define R_C_BRACKET (18)
#define L_S_BRACKET (19)
#define R_S_BRACKET (20)

// DATATYPES
#define INT 	    (21)
#define DOUBLE 	    (22)
#define FLOAT 	    (23)
#define CHAR 	    (24)
#define STRING      (25)
#define BOOL        (26)
#define ENUM 	    (27)
#define STRUCT	    (28)
#define CONST 	    (29)

// KEYWORDS
#define BREAK	    (30)
#define	CASE	    (31)
#define	CONTINUE    (32)
#define	DEFAULT	    (33)
#define	ELSE	    (34)
#define	FOR         (35)
#define	IF          (36)
#define RETURN      (37)
#define	SWITCH	    (38)
#define	WHILE	    (39)

// ASCII ESCAPE CODES
#define TAB	    0x09
#define SPACE       0x20
#define NEWLINE     0x0A  
#define VTAB        0x0B
#define COMMENT     0x00 

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
* @field unsigned int tokenKind
* @field
* @field unsigned int 64 tokenRow
* @field unsigned int 64 tokenCol
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

int checkChar(const char token){
   switch(token){
     case '&': return AMPER;
     case ':': return COMMA;
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
