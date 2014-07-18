/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "../src/parse.y" /* yacc.c:339  */

/*
 *	Program:	Educational CPU assembly compiler
 *	File Name:	parse.y
 *	Descrioption:	assembly parser program using bison
 */

#include <stdio.h>
#include <string.h>
#include "parse.h"
#include "parse.tab.h"

static IS is_table[42] = {
	{"NOP", 0x0, 0xF8, 0},
	{"HLT", 0xC, 0xFC, 0},
	{"OUT", 0x10, 0xF8, 0},
	{"IN", 0x18, 0xF8, 0},
	{"RCF", 0x20, 0xF8, 0},
	{"SCF", 0x28, 0xF8, 0},
	{"LD", 0x60, 0xF0, 1},
	{"ST", 0x70, 0xF0, 2},
	{"ADD", 0xB0, 0xF0, 1},
	{"ADC", 0x90, 0xF0, 1},
	{"SUB", 0xA0, 0xF0, 1},
	{"SBC", 0x80, 0xF0, 1},
	{"CMP", 0xF0, 0xF0, 1},
	{"AND", 0xE0, 0xF0, 1},
	{"OR", 0xD0, 0xF0, 1},
	{"EOR", 0xC0, 0xF0, 1},
	{"SRA", 0x40, 0xF7, 0},
	{"SLA", 0x41, 0xF7, 0},
	{"SRL", 0x42, 0xF7, 0},
	{"SLL", 0x43, 0xF7, 0},
	{"RRA", 0x44, 0xF7, 0},
	{"RLA", 0x45, 0xF7, 0},
	{"RRL", 0x46, 0xF7, 0},
	{"RLL", 0x47, 0xF7, 0},
	{"BA", 0x30, 0xFF, 2},
	{"BVF", 0x38, 0xFF, 2},
	{"BNZ", 0x31, 0xFF, 2},
	{"BZ", 0x39, 0xFF, 2},
	{"BZP", 0x32, 0xFF, 2},
	{"BN", 0x3A, 0xFF, 2},
	{"BP", 0x33, 0xFF, 2},
	{"BZN", 0x3B, 0xFF, 2},
	{"BNI", 0x34, 0xFF, 2},
	{"BNO", 0x3C, 0xFF, 2},
	{"BNC", 0x35, 0xFF, 2},
	{"BC", 0x3D, 0xFF, 2},
	{"BGE", 0x36, 0xFF, 2},
	{"BLT", 0x3E, 0xFF, 2},
	{"BGT", 0x37, 0xFF, 2},
	{"BLE", 0x3F, 0xFF, 2},
	{"JAL", 0xA, 0xFF, 2},
	{"JR", 0xB, 0xFF, 2}
};

static int offset = MAX_IS - 42;
static int line_num = 0;
static unsigned char pc = 0;

static struct Label ltable[MAXLABELS];
static int ltable_len = 0;

static OB objects[MAXOBS];
static int objects_len = 0;

static OB zero;

#line 136 "parse.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "parse.tab.h".  */
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
#line 73 "../src/parse.y" /* yacc.c:355  */

	OB object;
	char name[MAXSTRLEN];

#line 241 "parse.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_PARSE_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 256 "parse.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  53
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   118

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  10
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  84

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   314

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    86,    86,    87,    87,    88,    88,    92,    93,    94,
      95,    96,    97,    98,    99,   103,   104,   107,   108,   109,
     110,   111,   112,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   125,   126,   127,   128,   129,
     130,   131,   132,   133,   134,   135,   136,   137,   138,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   152,
     153,   154,   158,   159,   163,   164,   165,   166,   167,   168,
     169
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "COMMENT", "SPACE", "NEWLINE", "COMMA",
  "TEOF", "LABEL", "OP_LABEL", "ACC", "IX", "ADDR", "ADDR1", "ADDR2",
  "IXADDR1", "IXADDR2", "NOP", "HLT", "OUT", "IN", "RCF", "SCF", "LD",
  "ST", "ADD", "ADC", "SUB", "SBC", "CMP", "AND", "OR", "EOR", "SRA",
  "SLA", "SRL", "SLL", "RRA", "RLA", "RRL", "RLL", "BA", "BVF", "BNZ",
  "BZ", "BZP", "BN", "BP", "BZN", "BNI", "BNO", "BNC", "BC", "BGE", "BLT",
  "BGT", "BLE", "JAL", "JR", "MAX_IS", "$accept", "program", "$@1", "$@2",
  "line", "comment_line", "instruction", "operand", "a_operand",
  "b_operand", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314
};
# endif

#define YYPACT_NINF -53

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-53)))

#define YYTABLE_NINF -1

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int8 yypact[] =
{
      -3,   -53,     0,   -53,     7,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   -53,   -53,   -53,   -53,   -53,    12,     8,    94,
      96,   -53,    39,   -53,   -53,   -53,    -1,    98,    -3,    -3,
     -53,   -53,   -53,   -53,    99,   108,    95,   -53,   -53,   112,
      97,   -53,   113,   -53,   -53,   -53,   -53,   -53,   -53,   -53,
     -53,   -53,   115,   -53
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    15,     0,     2,     0,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    48,    44,    45,    46,    47,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,     0,     0,     0,
       7,    16,     0,     1,     3,     5,     0,     9,     0,     0,
       8,    61,    62,    63,    11,    60,     0,     4,     6,     0,
       0,    10,    13,    12,    64,    65,    66,    67,    68,    69,
      70,    59,     0,    14
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -53,   -52,   -53,   -53,   -53,   -53,    49,    50,   -53,   -53
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,    47,    58,    59,    48,    49,    50,    64,    65,    81
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       1,     2,    60,    51,     3,     4,    67,    68,    61,    62,
      63,    52,    53,    54,     5,     6,     7,     8,     9,    10,
      11,    12,    13,    14,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,     5,     6,     7,     8,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,    25,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,    36,    37,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    71,    55,
      56,    57,    66,    69,    61,    62,    63,    74,    75,    76,
      77,    78,    79,    80,    70,    73,    72,    82,    83
};

static const yytype_uint8 yycheck[] =
{
       3,     4,     3,     3,     7,     8,    58,    59,     9,    10,
      11,     4,     0,     5,    17,    18,    19,    20,    21,    22,
      23,    24,    25,    26,    27,    28,    29,    30,    31,    32,
      33,    34,    35,    36,    37,    38,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    55,    56,    57,    58,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,    30,
      31,    32,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,     3,     5,
       4,    52,     4,     4,     9,    10,    11,    10,    11,    12,
      13,    14,    15,    16,     6,     3,    66,     4,     3
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     7,     8,    17,    18,    19,    20,    21,
      22,    23,    24,    25,    26,    27,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    61,    64,    65,
      66,     3,     4,     0,     5,     5,     4,    66,    62,    63,
       3,     9,    10,    11,    67,    68,     4,    61,    61,     4,
       6,     3,    67,     3,    10,    11,    12,    13,    14,    15,
      16,    69,     4,     3
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    60,    61,    62,    61,    63,    61,    64,    64,    64,
      64,    64,    64,    64,    64,    65,    65,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    66,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    67,
      67,    67,    68,    68,    69,    69,    69,    69,    69,    69,
      69
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     4,     0,     4,     1,     3,     3,
       5,     3,     5,     5,     7,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 86 "../src/parse.y" /* yacc.c:1646  */
    {YYACCEPT;}
#line 1406 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 87 "../src/parse.y" /* yacc.c:1646  */
    {add_object((yyvsp[-1].object)); line_num++;}
#line 1412 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 88 "../src/parse.y" /* yacc.c:1646  */
    {line_num++;}
#line 1418 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 92 "../src/parse.y" /* yacc.c:1646  */
    {calc_object_code(&(yyval.object), &(yyvsp[0].object), &zero);}
#line 1424 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 93 "../src/parse.y" /* yacc.c:1646  */
    {calc_object_code(&(yyval.object), &(yyvsp[-2].object), &zero);}
#line 1430 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 94 "../src/parse.y" /* yacc.c:1646  */
    {calc_object_code(&(yyval.object), &(yyvsp[0].object), &zero); set_label((yyvsp[-2].name));}
#line 1436 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 95 "../src/parse.y" /* yacc.c:1646  */
    {calc_object_code(&(yyval.object), &(yyvsp[-2].object), &zero); set_label((yyvsp[-4].name));}
#line 1442 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 96 "../src/parse.y" /* yacc.c:1646  */
    {calc_object_code(&(yyval.object), &(yyvsp[-2].object), &(yyvsp[0].object));}
#line 1448 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 97 "../src/parse.y" /* yacc.c:1646  */
    {calc_object_code(&(yyval.object), &(yyvsp[-4].object), &(yyvsp[-2].object));}
#line 1454 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 98 "../src/parse.y" /* yacc.c:1646  */
    {calc_object_code(&(yyval.object), &(yyvsp[-2].object),&(yyvsp[0].object)); set_label((yyvsp[-4].name));}
#line 1460 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 99 "../src/parse.y" /* yacc.c:1646  */
    {calc_object_code(&(yyval.object), &(yyvsp[-4].object), &(yyvsp[-2].object)); set_label((yyvsp[-6].name));}
#line 1466 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 107 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[NOP-offset].code; (yyval.object).require_w2 = is_table[NOP-offset].require_op;}
#line 1472 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 108 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[HLT-offset].code; (yyval.object).require_w2 = is_table[HLT-offset].require_op;}
#line 1478 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 109 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[OUT-offset].code; (yyval.object).require_w2 = is_table[OUT-offset].require_op;}
#line 1484 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 110 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[IN-offset].code; (yyval.object).require_w2 = is_table[IN-offset].require_op;}
#line 1490 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 111 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[RCF-offset].code; (yyval.object).require_w2 = is_table[RCF-offset].require_op;}
#line 1496 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 112 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[SCF-offset].code; (yyval.object).require_w2 = is_table[SCF-offset].require_op;}
#line 1502 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 113 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[LD-offset].code; (yyval.object).require_w2 = is_table[LD-offset].require_op;}
#line 1508 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 114 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[ST-offset].code; (yyval.object).require_w2 = is_table[ST-offset].require_op;}
#line 1514 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 115 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[ADD-offset].code; (yyval.object).require_w2 = is_table[ADD-offset].require_op;}
#line 1520 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 116 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[ADC-offset].code; (yyval.object).require_w2 = is_table[ADC-offset].require_op;}
#line 1526 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 117 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[SUB-offset].code; (yyval.object).require_w2 = is_table[SUB-offset].require_op;}
#line 1532 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 118 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[SBC-offset].code; (yyval.object).require_w2 = is_table[SBC-offset].require_op;}
#line 1538 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 119 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[CMP-offset].code; (yyval.object).require_w2 = is_table[CMP-offset].require_op;}
#line 1544 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 120 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[AND-offset].code; (yyval.object).require_w2 = is_table[AND-offset].require_op;}
#line 1550 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 121 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[OR-offset].code; (yyval.object).require_w2 = is_table[OR-offset].require_op;}
#line 1556 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 122 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[EOR-offset].code; (yyval.object).require_w2 = is_table[EOR-offset].require_op;}
#line 1562 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 123 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[SRA-offset].code; (yyval.object).require_w2 = is_table[SRA-offset].require_op;}
#line 1568 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 124 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[SLA-offset].code; (yyval.object).require_w2 = is_table[SLA-offset].require_op;}
#line 1574 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 125 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[SRL-offset].code; (yyval.object).require_w2 = is_table[SRL-offset].require_op;}
#line 1580 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 126 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[SLL-offset].code; (yyval.object).require_w2 = is_table[SLL-offset].require_op;}
#line 1586 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 127 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[RRA-offset].code; (yyval.object).require_w2 = is_table[RRA-offset].require_op;}
#line 1592 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 128 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[RLA-offset].code; (yyval.object).require_w2 = is_table[RLA-offset].require_op;}
#line 1598 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 129 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[RRL-offset].code; (yyval.object).require_w2 = is_table[RRL-offset].require_op;}
#line 1604 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 130 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[RLL-offset].code; (yyval.object).require_w2 = is_table[RLL-offset].require_op;}
#line 1610 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 131 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[BA-offset].code; (yyval.object).require_w2 = is_table[BA-offset].require_op;}
#line 1616 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 132 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[BVF-offset].code; (yyval.object).require_w2 = is_table[BVF-offset].require_op;}
#line 1622 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 133 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[BNZ-offset].code; (yyval.object).require_w2 = is_table[BNZ-offset].require_op;}
#line 1628 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 134 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[BZP-offset].code; (yyval.object).require_w2 = is_table[BZP-offset].require_op;}
#line 1634 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 135 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[BN-offset].code; (yyval.object).require_w2 = is_table[BN-offset].require_op;}
#line 1640 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 136 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[BP-offset].code; (yyval.object).require_w2 = is_table[BP-offset].require_op;}
#line 1646 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 137 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[BZN-offset].code; (yyval.object).require_w2 = is_table[BZN-offset].require_op;}
#line 1652 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 138 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[BZ-offset].code; (yyval.object).require_w2 = is_table[BZ-offset].require_op;}
#line 1658 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 139 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[BNI-offset].code; (yyval.object).require_w2 = is_table[BNI-offset].require_op;}
#line 1664 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 140 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[BNO-offset].code; (yyval.object).require_w2 = is_table[BNO-offset].require_op;}
#line 1670 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 141 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[BNC-offset].code; (yyval.object).require_w2 = is_table[BNC-offset].require_op;}
#line 1676 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 142 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[BC-offset].code; (yyval.object).require_w2 = is_table[BC-offset].require_op;}
#line 1682 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 143 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[BGE-offset].code; (yyval.object).require_w2 = is_table[BGE-offset].require_op;}
#line 1688 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 144 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[BLT-offset].code; (yyval.object).require_w2 = is_table[BLT-offset].require_op;}
#line 1694 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 145 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[BGT-offset].code; (yyval.object).require_w2 = is_table[BGT-offset].require_op;}
#line 1700 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 146 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[BLE-offset].code; (yyval.object).require_w2 = is_table[BLE-offset].require_op;}
#line 1706 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 147 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[JAL-offset].code; (yyval.object).require_w2 = is_table[JAL-offset].require_op;}
#line 1712 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 148 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = is_table[JR-offset].code; (yyval.object).require_w2 = is_table[JR-offset].require_op;}
#line 1718 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 152 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = (yyvsp[-2].object).word[0] + (yyvsp[0].object).word[0]; (yyval.object).word[1] = (yyvsp[0].object).word[1]; (yyval.object).require_w2 = (yyvsp[0].object).require_w2;}
#line 1724 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 153 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).require_w2 = 0;}
#line 1730 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 154 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = 0; set_label_ref(&(yyval.object), (yyvsp[0].name)); (yyval.object).require_w2 = 1;}
#line 1736 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 158 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = 0x0; (yyval.object).word[1] = 0;}
#line 1742 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 159 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = 0x8; (yyval.object).word[1] = 0;}
#line 1748 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 163 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = 0x0; (yyval.object).word[1] = 0; (yyval.object).require_w2 = 0;}
#line 1754 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 164 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = 0x1; (yyval.object).word[1] = 0; (yyval.object).require_w2 = 0;}
#line 1760 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 165 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = 0x2; (yyval.object).word[1] = (yyvsp[0].object).word[1]; (yyval.object).require_w2 = 1;}
#line 1766 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 166 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = 0x4; (yyval.object).word[1] = (yyvsp[0].object).word[1]; (yyval.object).require_w2 = 1;}
#line 1772 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 167 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = 0x5; (yyval.object).word[1] = (yyvsp[0].object).word[1]; (yyval.object).require_w2 = 1;}
#line 1778 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 168 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = 0x6; (yyval.object).word[1] = (yyvsp[0].object).word[1]; (yyval.object).require_w2 = 1;}
#line 1784 "parse.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 169 "../src/parse.y" /* yacc.c:1646  */
    {(yyval.object).word[0] = 0x7; (yyval.object).word[1] = (yyvsp[0].object).word[1]; (yyval.object).require_w2 = 1;}
#line 1790 "parse.tab.c" /* yacc.c:1646  */
    break;


#line 1794 "parse.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 172 "../src/parse.y" /* yacc.c:1906  */


void yyerror(const char *s){
  fprintf (stderr, "l%d ERROR: %s\n", line_num, s);
}

void calc_object_code(OB *ob, OB *is, OB *op){
	ob->word[0] = is->word[0] + op->word[0];
	ob->word[1] = op->word[1];
	ob->label = op->label;

	if(is->require_w2 == 2 && op->require_w2 == 0){
		yyerror("This operand require second word but does not given");
	}

	if(is->require_w2 == 0 && op->require_w2 == 1){
		yyerror("This operand doesn't take second word but given.");
	}
	
	ob->require_w2 = is->require_w2 && op->require_w2;
}

void set_label(char *name){
	int i,j;

	if(ltable_len > MAXLABELS - 1){
		yyerror("Too much Label");
	}

	for(i=0;i<ltable_len;i++){
		/* if find undefined label */
		if(strncmp(name, ltable[i].name, MAXSTRLEN) == 0){
			if(!ltable[i].address){
				ltable[i].address = pc;
				return;
			}else{
				yyerror("Double definition of label");
			}
		}
	}

	strncpy(ltable[ltable_len].name, name, MAXSTRLEN - 1);
	ltable[ltable_len].name[MAXSTRLEN] = '\0';
	ltable[ltable_len].address = pc;
	ltable_len++;
}

void set_label_ref(OB *ob, char *name){
	int i;

	for(i=0;i<ltable_len;i++){
		if(strncmp(name, ltable[i].name, MAXSTRLEN) == 0){
			ob->label = &ltable[i];
			return;
		}
	}

	// if it cannot find label
	strncpy(ltable[ltable_len].name, name, MAXSTRLEN - 1);
	ob->label = &ltable[ltable_len];
	ltable_len++;
	return;
}

void add_object(OB ob){
	objects[objects_len++] = ob;

	pc++;
	if(ob.require_w2){
		pc++;
	}
}

void print_labels(){
	int i;
	for(i=0;i<ltable_len;i++){
		printf("%s: %x\n", ltable[i].name, ltable[i].address);
	}
}

void print_objects(int *opt){
	int i, a=0;

	if(opt[PRINT_HEADER]){
		printf("Address\tObj. Code\tSource Code\n");
	}
	
	for(i=0;i<objects_len;i++){
		if(opt[PRINT_ADDRESS]){
			printf("%02x\t", a);
		}
		if(opt[PRINT_OBJECT]){
			printf("%02x", objects[i].word[0]);
		}
		a++;

		if(objects[i].require_w2){
			if(opt[PRINT_OBJECT]){
				if(!objects[i].label){
					printf(" %02x", objects[i].word[1]);
				}else{
					printf(" %02x", objects[i].label->address);
				}
			}
			a++;
		}

		/*if(opt[PRINT_SOURCE]){

		}*/

		printf("\n");
	}
}
