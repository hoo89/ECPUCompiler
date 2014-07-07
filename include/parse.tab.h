/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

#ifndef YY_YY_PARSE_TAB_H_INCLUDED
# define YY_YY_PARSE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    COMMENT = 258,
    SPACE = 259,
    NEWLINE = 260,
    COMMA = 261,
    TEOF = 262,
    LABEL = 263,
    OP_LABEL = 264,
    ACC = 265,
    IX = 266,
    ADDR = 267,
    ADDR1 = 268,
    ADDR2 = 269,
    IXADDR1 = 270,
    IXADDR2 = 271,
    NOP = 272,
    HLT = 273,
    OUT = 274,
    IN = 275,
    RCF = 276,
    SCF = 277,
    LD = 278,
    ST = 279,
    ADD = 280,
    ADC = 281,
    SUB = 282,
    SBC = 283,
    CMP = 284,
    AND = 285,
    OR = 286,
    EOR = 287,
    SRA = 288,
    SLA = 289,
    SRL = 290,
    SLL = 291,
    RRA = 292,
    RLA = 293,
    RRL = 294,
    RLL = 295,
    BA = 296,
    BVF = 297,
    BNZ = 298,
    BZ = 299,
    BZP = 300,
    BN = 301,
    BP = 302,
    BZN = 303,
    BNI = 304,
    BNO = 305,
    BNC = 306,
    BC = 307,
    BGE = 308,
    BLT = 309,
    BGT = 310,
    BLE = 311,
    JAL = 312,
    JR = 313,
    MAX_IS = 314
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 73 "../src/parse.y" /* yacc.c:1909  */

	OB object;
	char name[MAXSTRLEN];

#line 119 "parse.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSE_TAB_H_INCLUDED  */
