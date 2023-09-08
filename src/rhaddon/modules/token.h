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

// Token file contains of features and types for lexer tokens.

#ifndef TOKEN_H
#define TOKEN_H
#include <stdio.h>
#include <stdlib.h>
#include "token_ext.h"

typedef enum tokenSORT{
   TOK_VAR,    
   TOK_OPER,   
   TOK_SEPAR, 
   TOK_KEY,    
   TOK_NUM,    
   TOK_ALPHA, 
   TOK_LIT  
}tokenSORT;

typedef enum tokenTYPE{
  
// VARIABLE
  INT,
  BOOL,
  CONST,
  CHAR,
  FLOAT,
  DOUBLE,
  UNION,
  STRUCT,
  ENUM,
  FUNC,
  TYPEDEF,

// OPERATORS
  EQ,        // =
  DEQ,       // ==
  EXC,       // !
  EXCEQ,     // !=
  STAR,      // *
  STAREQ,    // *=
  SLASH,     // /
  SLASHEQ,   // /=
  PLUS,      // +
  PLUSEQ,    // +=
  MINUS,     // -
  MINUSEQ,   // -=
  PERCENT,   // %
  PERCENTEQ, // %=
  HIGH,      // >
  HIGHEQ,    // >=
  LESS,      // <
  LESSEQ,    // <=
  AMPER,     // &
  AMPEREQ,   // &=
  AT,        // @
  ATEQ,      // @=
  COLON,     // :

// SEPARATORS
  OPPAR,     // (
  CLPAR,     // )
  OPBRAC,    // {
  CLBRAC,    // }
  OPSQRBRAC, // [
  CLSQRBRAC, // ]
  QUOTE,     // "
  APOS,      // '
  DOT,       // .
  COMMA,     // ,
  ENDLN,     // ;
  
// KEYWORDS
  USING,  
  SWITCH,    
  CASE,      
  RETURN,
  NAMESPACE,
  IF,
  ELSE,
  ELIF,
  OR,
  NOT,
  AND,
  WHILE,
  FOR,
  BREAK,
  CONTINUE,

// LITERALS
  TRUE,
  FALSE,
  NONE,
  FP,
  STR 
}tokenTYPE;
#endif
