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

#ifndef LEXER_H
#define LEXER_H
#include <string.h>
#include <alias.h>

STR doubleChars(char *token){
 if(strlen(token) == 2){
  if(token[0] == '+' ){
     switch(token[1]){
      case '+':
        printf("plus");
        break;
      case '=':
        printf("plusek");
        break;
   }}
  if(token[0] == '-' ){
     switch(token[1]){
      case '-':
        printf("minus");
        break;
      case '=':
        printf("minusek");
        break;
   }}
   if(token[0] == '<' ){
     switch(token[1]){
      case '<':
        printf("minus");
        break;
      case '=':
        printf("minusek");
        break;
   }}
   if(token[0] == '>' ){
     switch(token[1]){
      case '>':
        printf("minus");
        break;
      case '=':
        printf("minusek");
        break;
   }}
   if(token[0] == '&' ){
     switch(token[1]){
      case '&':
        printf("minus");
        break;
      case '=':
        printf("minusek");
        break;
   }}
   if(token[0] == '|' ){
     switch(token[1]){
      case '|':
        printf("minus");
        break;
      case '=':
        printf("minusek");
        break;
   }}
   if(token[0] == '!' ){
     switch(token[1]){
      case '=':
        printf("minus");
        break;
   }}
}}

char *checkChar(char token){
   Token TOKEN = {0,0,0,0};
   switch(token){
     case '+':
      TOKEN.tokenType = 2; 
      TOKEN.tokenKind = 8;
     case '-':
      printf("minus\n");
  }
}


#endif
