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
#include <token.h>
#include <error.h>
#include <lexeme.h>
#include <file.h>

/*
* @function splitString is used to split source file contents
*
* @param src	Source file location
* @param delim  Separator
*
* @return
*/

char *splitString(char *src, const char delim){
  char *token[strlen(src)];
  return 0;
}

Token token;

int main(int argc, char *argv[]){
  char *sourceCode = loadFile(argv[1]);
  doubleChars(token, "&&");
  doubleChars(token, "&=");
  doubleChars(token, "&");
  return 0;
}

#ifdef __cplusplus
}
#endif
