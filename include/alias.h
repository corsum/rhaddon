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

// Unsigned
typedef uint64_t UI64; 		// 0 - (1,844674*10^19) | unsigned long long 
typedef uint32_t UI32; 		// 0 - (4,294967*10^9)  | unsigned int
typedef uint16_t UI16; 		// 0 - (6,5535*10^4)    | unsigned short
typedef uint8_t  UI8; 	 	// 0 - (2,55*10^2)      | unsigned char

// Signed
typedef int64_t I64; 		// -128 - (,*10^)       | signed long long
typedef int32_t I32; 		// 0 - (,*10^) 		| signed int
typedef int16_t I16; 		// -32.768 - 32.767 	| signed short
typedef int8_t  I8; 	 	// -128 - 127     	| signed char

// String
typedef char* STR;              // 32-bit OS: 0 - (2^32-1) 64-bit OS: 0 - (2^64-1)

// Experimental
typedef unsigned char UCH;	// 0 - () |
typedef unsigned short int USI; // 0 - () |
typedef signed char SCH;	// 0 - |
typedef signed short int SSI;   // 0 - |
