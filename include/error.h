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
