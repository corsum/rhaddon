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

#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <alias.h>
#include <token.h>
#include <error.h>
#include "lexer.h"

int checkChar(char token){
   Token TOKEN;
   switch(token){
     case '+':
       return PLUS;
	 case '-':
       return MINUS;
  }
}

typedef enum tokenType{
  T_VAR, T_KEY, T_OPER, T_SEP, T_LIT, T_ID
}tokenType;

int main(){
  return 0;
}
