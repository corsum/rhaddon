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

// Token Util is extension for token.h which contains of...

#ifndef TOKENUTIL_H
#define TOKENUTIL_H
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "token.h"
// This structure is used to store information about a token features, such as its type, sort, and 

typedef struct tokenCONST{
  tokenTYPE tokenType;
  tokenSORT tokenSort;
}tokenCONST;

tokenCONST token;

void checkToken(char *tokenCHECK){
  char *VAR[9] = {"int","bool","const","string","float","void","enum","struct","double"};
  char *OP[12] = {"=", "!", "*","/","+","-", "%", ">","<","@", "&", "|"};  
  char *SEP[12] = {"(",")","{","}","[","]","\"","'",".",",",":",";"};  
  char *KEY[12] = {"using","switch","case","namespace","return","if","else","break","and","while","for","continue"};  
 
  for(int i = 0; i < 9; i++){
    if(strcmp(tokenCHECK, VAR[i]) == 0){
     token.tokenSort = TOKEN_VAR; 
   }}
  for(int i = 0; i < 12; i++){
    if(strcmp(tokenCHECK, OP[i]) == 0){
     token.tokenSort = TOKEN_OPER;
   }}
  for(int i = 0; i < 12; i++){
    if(strcmp(tokenCHECK, SEP[i]) == 0){
     token.tokenSort = TOKEN_SEPAR;
   }}
  for(int i = 0; i < 12; i++){
    if(strcmp(tokenCHECK, KEY[i]) == 0){
     token.tokenSort = TOKEN_KEY;
   }}
  char *tokenstr;
   switch (token.tokenSort){
      case 0:
        tokenstr = "VARIABLE";
        break;
      case 1:
        tokenstr = "OPERATOR";
        break;
      case 2:
        tokenstr = "SEPARATOR";
        break;
      case 3:
        tokenstr = "KEYWORD";
        break;
      case 4:
        tokenstr = "NONE";
        break;  
   }
  printf("%d\n", token.tokenSort);
  printf("%s\n", tokenstr);
}
#endif
