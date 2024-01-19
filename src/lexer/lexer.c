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
#include <stdio.h>
#include <string.h>
#include <alias.h>
#include <token.h>
#include <error.h>
Error error;

char *splitString(char *str, const char delim){
  char *token[strlen(str)];
  return 0;
}

char *loadFile(char *src){
  FILE *file = fopen(src,"w");
  if(file == NULL){
   printf("%sLexer Error: Cannot find file '%s'",RED,src); 
   return 0;
  }
  fclose(file);
}

int main(int argc, char *argv[]){
  loadFile(argv[1]); 
  return 0;
}

#ifdef __cplusplus
}
#endif
