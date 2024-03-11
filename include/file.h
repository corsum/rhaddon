#ifdef __cplusplus
extern "C" {
#endif
#ifndef FILE_H
#define FILE_H
#include "error.h"

/*
* @function loadFile
*
* @param src  Source file location
*
* @return
*/

char *loadFile(char *src){
  FILE *file = fopen(src,"w");
  if(file == NULL){
   Error error = {"File not found",1,1,1};
   throwError(error);
     return 0;}
  fclose(file);
}

#endif
#ifdef __cplusplus
}
#endif
