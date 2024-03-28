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
#include <errno.h>

#define NONE         "\033[0m"
#define R            "\033[0;31m"   
#define G            "\033[0;32m"
#define B 	     "\033[0;34m"
#define C  	     "\033[0;36m"
#define M	     "\033[0;35m"
#define Y            "\033[1;32m"
#define K	     "\033[0;30m"
#define W	     "\033[0;37m"

/*
* @function showError is used to print error messages
*
* @param src message to be shown
* @param cols number of columns
*/

void showError(char *src, int cols){
  printf("%sError:%s.%d",R,src,cols);
}

#endif
#ifdef __cplusplus
}
#endif
