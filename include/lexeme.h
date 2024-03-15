#ifdef __cplusplus
extern "C"
#endif
#ifndef LEXEME_H
#define LEXEME_H

// OPERATORS
#define AMPER       ( 0)
#define COMMA       ( 1)
#define DOT         ( 2)
#define EQUAL       ( 3)
#define EXCLAMATION ( 4) 
#define MINUS       ( 5)
#define PERCENT     ( 6)
#define PIPE        ( 7)
#define PLUS        ( 8)
#define SEMICOLON   ( 9)
#define SLASH       (10)
#define ASTERISK    (11)
#define XOR         (12)
#define AT          (13)
#define HASH	    (14)

// SEPARATORS
#define L_BRACKET   (15)
#define R_BRACKET   (16)
#define L_C_BRACKET (17)
#define R_C_BRACKET (18)
#define L_S_BRACKET (19)
#define R_S_BRACKET (20)

// DATATYPES
#define INT 	    (21)
#define DOUBLE 	    (22)
#define FLOAT 	    (23)
#define CHAR 	    (24)
#define STRING      (25)
#define BOOL        (26)
#define ENUM 	    (27)
#define STRUCT	    (28)
#define CONST 	    (29)

// KEYWORDS
#define BREAK	    (30)
#define	CASE	    (31)
#define	CONTINUE    (32)
#define	DEFAULT	    (33)
#define	ELSE	    (34)
#define	FOR         (35)
#define	IF          (36)
#define RETURN      (37)
#define	SWITCH	    (38)
#define	WHILE	    (39)

// ASCII ESCAPE CODES
#define TAB	    0x09
#define SPACE       0x20
#define NEWLINE     0x0A  
#define VTAB        0x0B
#define COMMENT     0x00 

#endif
#ifdef __cplusplus
}
#endif
