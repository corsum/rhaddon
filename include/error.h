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

#ifndef _ERROR_H
#define _ERROR_H
#include <stdio.h>
#include "alias.h"
#define E_SEGF 	     (0) // Segmentation fault
#define E_SYNT       (1) // Syntax
#define E_LINK       (2) // Linker
#define E_RUNT       (3) // Runtime
#define E_SEMA       (4) // Semantic
#define E_UNDF       (5) // Undefined

#define RED          "\033[0;31m"   
#define GREEN        "\033[0;32m"
#define YELLOW       "\033[1;32m"
#define BLUE 	     "\033[0;34m"
#define DEF          "\033[0m"

typedef struct throwError{
  STR src;
  int type;
  int cols;
  int lines;
}throwError;

int checkError(throwError error){
  switch(error.type){
   case 0:
     printf("%sError in file:%s.%d.%d:%s\n", RED,error.src, error.cols,error.lines,DEF);
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

  }
}

#endif // error.h
