/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     NUMBER = 258,
     IDENTIFIERS = 259,
     FUNCTION = 260,
     BEGINPARAMS = 261,
     ENDPARAMS = 262,
     BEGINLOCALS = 263,
     ENDLOCALS = 264,
     BEGINBODY = 265,
     ENDBODY = 266,
     INTEGER = 267,
     ARRAY = 268,
     OF = 269,
     IF = 270,
     THEN = 271,
     ENDIF = 272,
     ELSE = 273,
     WHILE = 274,
     DO = 275,
     FOREACH = 276,
     BEGINLOOP = 277,
     ENDLOOP = 278,
     CONTINUE = 279,
     READ = 280,
     WRITE = 281,
     TRUE = 282,
     FALSE = 283,
     SEMICOLON = 284,
     COLON = 285,
     COMMA = 286,
     LPAREN = 287,
     RPAREN = 288,
     LSQUARE = 289,
     RSQUARE = 290,
     ASSIGN = 291,
     RETURN = 292,
     SUB = 293,
     PLUS = 294,
     MOD = 295,
     DIVI = 296,
     MULT = 297,
     OR = 298,
     AND = 299,
     NEQ = 300,
     EQ = 301,
     GTE = 302,
     GT = 303,
     LTE = 304,
     LT = 305,
     NOT = 306
   };
#endif
/* Tokens.  */
#define NUMBER 258
#define IDENTIFIERS 259
#define FUNCTION 260
#define BEGINPARAMS 261
#define ENDPARAMS 262
#define BEGINLOCALS 263
#define ENDLOCALS 264
#define BEGINBODY 265
#define ENDBODY 266
#define INTEGER 267
#define ARRAY 268
#define OF 269
#define IF 270
#define THEN 271
#define ENDIF 272
#define ELSE 273
#define WHILE 274
#define DO 275
#define FOREACH 276
#define BEGINLOOP 277
#define ENDLOOP 278
#define CONTINUE 279
#define READ 280
#define WRITE 281
#define TRUE 282
#define FALSE 283
#define SEMICOLON 284
#define COLON 285
#define COMMA 286
#define LPAREN 287
#define RPAREN 288
#define LSQUARE 289
#define RSQUARE 290
#define ASSIGN 291
#define RETURN 292
#define SUB 293
#define PLUS 294
#define MOD 295
#define DIVI 296
#define MULT 297
#define OR 298
#define AND 299
#define NEQ 300
#define EQ 301
#define GTE 302
#define GT 303
#define LTE 304
#define LT 305
#define NOT 306




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 9 "mini_l.y"
{
  int		int_val;
  string*	op_val;
}
/* Line 1529 of yacc.c.  */
#line 156 "mini_l.tab.h"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

