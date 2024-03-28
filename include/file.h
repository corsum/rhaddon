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
   showError("FNF",1);
     return 0;}
  fclose(file);
}

/*
* @function writeFile
*
* @param src  Source file location
*
* @return
*/

// under construction

char *writeFile(char *src, char *code){
  FILE *file = fopen(code,"w");
  fclose(file);
  return 0;
}

#endif
#ifdef __cplusplus
}
#endif
