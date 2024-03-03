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
#include "alias.h"

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
*
*
*
*/

typedef struct doubleOperator{
   int fChar;
   int sChar;
} doubleOperator;

/*
*
*
*
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
  I32 tokenKind;
  tokenType tokenType;
  I32 tokenRow;
  I32 tokenCol;
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
     case '&':
       return AMPER;
     case ':':
       return COMMA;
     case '.':
       return DOT;
     case '=':
       return EQUAL;
     case '!':
       return EXCLAMATION;
     case '-':
       return MINUS;
     case '%':
       return PERCENT;
     case '|':
       return PIPE;
  }
}

STR doubleChars(const char *token){
 doubleOperator DOP = {0,0};
 if(strlen(token) == 2){
  if(token[0] == '+' ){
     switch(token[1]){
      case '+':
        DOP.sChar = 0;
        break;
      case '=':
	DOP.fChar = 3;
	break;
   }}
  if(token[0] == '-' ){
     switch(token[1]){
      case '-':
        printf("minus");
        break;
      case '=':
        printf("minusek");
        break;
   }}
   if(token[0] == '<' ){
     switch(token[1]){
      case '<':
        printf("minus");
        break;
      case '=':
        printf("minusek");
        break;
   }}
   if(token[0] == '>' ){
     switch(token[1]){
      case '>':
        printf("minus");
        break;
      case '=':
        printf("minusek");
        break;
   }}
   if(token[0] == '&' ){
     switch(token[1]){
      case '&':
        printf("minus");
        break;
      case '=':
        printf("minusek");
        break;
   }}
   if(token[0] == '|' ){
     switch(token[1]){
      case '|':
        printf("minus");
        break;
      case '=':
        printf("minusek");
        break;
   }}
   if(token[0] == '!' ){
     switch(token[1]){
      case '=':
        printf("minus");
        break;
   }}
}}


#ifdef __cplusplus
}
#endif
#endif
