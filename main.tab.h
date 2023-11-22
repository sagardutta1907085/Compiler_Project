
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

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
     ID = 258,
     NUM = 259,
     STR = 260,
     EQ = 261,
     NE = 262,
     GE = 263,
     LE = 264,
     GT = 265,
     LT = 266,
     MINUS = 267,
     PLUS = 268,
     POWER = 269,
     DIV = 270,
     MUL = 271,
     MODULUS = 272,
     SCAN = 273,
     FLOAT = 274,
     LESS = 275,
     GREAT = 276,
     WHILE = 277,
     INT = 278,
     DOUBLE = 279,
     CHAR = 280,
     MAIN = 281,
     FBS = 282,
     FBE = 283,
     SBS = 284,
     SBE = 285,
     SEMICOLON = 286,
     COMMA = 287,
     ASGN = 288,
     SHOW_VAR = 289,
     SHOW_STR = 290,
     SHOW_LINE = 291,
     IF = 292,
     ELSE = 293,
     ELSEIF = 294,
     FOR = 295,
     INCREMENT_BY = 296,
     TO = 297,
     SWITCH = 298,
     DEFAULT = 299,
     COLON = 300,
     FUNCTION = 301,
     IFX = 302
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 1676 of yacc.c  */
#line 81 "main.y"

  char text[10000];
  int val;



/* Line 1676 of yacc.c  */
#line 106 "main.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


