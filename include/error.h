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

/*
* Filename:error.h
* Description:Header used mainly for the lexer
*
* This file contains
*/

#ifdef __cplusplus
extern "C" {
#endif
#ifndef _ERROR_H
#define _ERROR_H
#include <stdio.h>
#include "alias.h"
#include "vga.h" 
#define E_SEGF 	     (0) // Segmentation fault
#define E_SYNT       (1) // Syntax
#define E_LINK       (2) // Linker
#define E_RUNT       (3) // Runtime
#define E_SEMA       (4) // Semantic
#define E_UNDF       (5) // Undefined
#define E_FNF        (6) // File not found

/*
* @struct 	Error	
*
* @field src    Name of the file where the error is located
* @field type   Type of the error presented with int
* @field cols   Column when the error is located
* @field lines  Line when the error is located
*
* @return
*/

typedef struct Error{
  STR src;
  int type;
  int cols;
  int lines;
}Error;

/* 
* @function throwError is used to print error messages
* 
* @param Error  da
* @return
*/

int throwError(Error error){
  printf("%sError:%s.%d.%d:%s", RED,error.src, error.cols,error.lines,NONE);
  switch(error.type){
   case 0:
     printf("%sSegmentation fault: Core dumped\n", CYAN);
     return E_SEGF;
   case 1:
     return E_SYNT;
   case 2:
     return E_LINK; 
   case 3:
     return E_RUNT;
   case 4:
     return E_SEMA;
   case 5:
     return E_UNDF;
   case 6:
     printf("%sFile not found:%s%s\n", CYAN, error.src, NONE);
     return E_FNF;
  }
}
#endif
#ifdef __cplusplus
}
#endif
