/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



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
     RETURN = 291,
     SUB = 292,
     PLUS = 293,
     MOD = 294,
     DIVI = 295,
     MULT = 296,
     OR = 297,
     AND = 298,
     NEQ = 299,
     EQ = 300,
     GTE = 301,
     GT = 302,
     LTE = 303,
     LT = 304,
     NOT = 305,
     ASSIGN = 306
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
#define RETURN 291
#define SUB 292
#define PLUS 293
#define MOD 294
#define DIVI 295
#define MULT 296
#define OR 297
#define AND 298
#define NEQ 299
#define EQ 300
#define GTE 301
#define GT 302
#define LTE 303
#define LT 304
#define NOT 305
#define ASSIGN 306




/* Copy the first part of user declarations.  */
#line 3 "mini_l.y"

#include "heading.h"
int yyerror(char *s);
int yylex(void);



/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
#line 10 "mini_l.y"
{
  int		int_val;
  string*	op_val;
}
/* Line 193 of yacc.c.  */
#line 210 "mini_l.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 223 "mini_l.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  6
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   151

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  25
/* YYNRULES -- Number of rules.  */
#define YYNRULES  69
/* YYNRULES -- Number of states.  */
#define YYNSTATES  141

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      45,    46,    47,    48,    49,    50,    51
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     5,     6,     9,    22,    23,    27,    30,
      34,    36,    40,    43,    47,    49,    51,    55,    57,    64,
      68,    75,    81,    88,    91,    94,    96,    99,   100,   103,
     105,   109,   111,   115,   120,   123,   126,   131,   135,   137,
     139,   143,   145,   147,   149,   151,   153,   155,   158,   159,
     163,   167,   170,   171,   175,   179,   183,   185,   188,   190,
     195,   196,   198,   202,   204,   206,   210,   212,   217,   221
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      53,     0,    -1,    54,    -1,    -1,    55,    54,    -1,     5,
       4,    29,     6,    56,     7,     8,    56,     9,    10,    57,
      11,    -1,    -1,    58,    29,    56,    -1,     1,    29,    -1,
       1,    29,    56,    -1,     1,    -1,    61,    29,    57,    -1,
      61,    29,    -1,    59,    30,    60,    -1,     1,    -1,     4,
      -1,     4,    31,    59,    -1,    12,    -1,    13,    34,     3,
      35,    14,    12,    -1,    75,    51,    67,    -1,    15,    63,
      16,    57,    62,    17,    -1,    19,    63,    22,    57,    23,
      -1,    20,    22,    57,    23,    19,    63,    -1,    25,    76,
      -1,    26,    76,    -1,    24,    -1,    36,    67,    -1,    -1,
      18,    57,    -1,    64,    -1,    64,    42,    63,    -1,    65,
      -1,    65,    43,    64,    -1,    50,    67,    66,    67,    -1,
      50,    27,    -1,    50,    28,    -1,    50,    32,    63,    33,
      -1,    67,    66,    67,    -1,    27,    -1,    28,    -1,    32,
      63,    33,    -1,    45,    -1,    44,    -1,    49,    -1,    47,
      -1,    48,    -1,    46,    -1,    69,    68,    -1,    -1,    38,
      69,    68,    -1,    37,    69,    68,    -1,    71,    70,    -1,
      -1,    41,    71,    70,    -1,    40,    71,    70,    -1,    39,
      71,    70,    -1,    74,    -1,    37,    74,    -1,    72,    -1,
       4,    32,    73,    33,    -1,    -1,    67,    -1,    67,    31,
      73,    -1,    75,    -1,     3,    -1,    32,    67,    33,    -1,
       4,    -1,     4,    34,    67,    35,    -1,    75,    31,    76,
      -1,    75,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    65,    65,    67,    68,    70,    72,    73,    74,    75,
      76,    78,    79,    82,    83,    86,    87,    90,    91,    93,
      94,    95,    96,    97,    98,    99,   100,   103,   104,   108,
     109,   111,   112,   115,   116,   117,   118,   119,   120,   121,
     122,   125,   126,   127,   128,   129,   130,   132,   134,   135,
     136,   138,   140,   141,   142,   143,   146,   147,   148,   150,
     153,   154,   155,   157,   158,   159,   161,   162,   164,   165
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "NUMBER", "IDENTIFIERS", "FUNCTION",
  "BEGINPARAMS", "ENDPARAMS", "BEGINLOCALS", "ENDLOCALS", "BEGINBODY",
  "ENDBODY", "INTEGER", "ARRAY", "OF", "IF", "THEN", "ENDIF", "ELSE",
  "WHILE", "DO", "FOREACH", "BEGINLOOP", "ENDLOOP", "CONTINUE", "READ",
  "WRITE", "TRUE", "FALSE", "SEMICOLON", "COLON", "COMMA", "LPAREN",
  "RPAREN", "LSQUARE", "RSQUARE", "RETURN", "SUB", "PLUS", "MOD", "DIVI",
  "MULT", "OR", "AND", "NEQ", "EQ", "GTE", "GT", "LTE", "LT", "NOT",
  "ASSIGN", "$accept", "prog_start", "functions", "function",
  "Declarations", "statements", "declaration", "Identifiers", "Arrayid",
  "statement", "elsestates", "bool_expr", "relation_And_Expr",
  "relation_Expr", "comp", "expression", "expre", "multiplicative_Expr",
  "terms", "term", "ident", "ex", "posterm", "var", "vars", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    54,    54,    55,    56,    56,    56,    56,
      56,    57,    57,    58,    58,    59,    59,    60,    60,    61,
      61,    61,    61,    61,    61,    61,    61,    62,    62,    63,
      63,    64,    64,    65,    65,    65,    65,    65,    65,    65,
      65,    66,    66,    66,    66,    66,    66,    67,    68,    68,
      68,    69,    70,    70,    70,    70,    71,    71,    71,    72,
      73,    73,    73,    74,    74,    74,    75,    75,    76,    76
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,    12,     0,     3,     2,     3,
       1,     3,     2,     3,     1,     1,     3,     1,     6,     3,
       6,     5,     6,     2,     2,     1,     2,     0,     2,     1,
       3,     1,     3,     4,     2,     2,     4,     3,     1,     1,
       3,     1,     1,     1,     1,     1,     1,     2,     0,     3,
       3,     2,     0,     3,     3,     3,     1,     2,     1,     4,
       0,     1,     3,     1,     1,     3,     1,     4,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     2,     3,     0,     1,     4,     0,     0,
      10,    15,     0,     0,     0,     0,     0,     0,     0,     0,
       9,    16,     0,     7,    17,     0,    13,     0,     0,     0,
       0,     0,     0,    66,     0,     0,     0,    25,     0,     0,
       0,     0,     0,     0,     0,     0,    64,    66,    38,    39,
       0,     0,     0,     0,    29,    31,     0,    48,    52,    58,
      56,    63,     0,     0,    69,    23,    24,     0,    26,     5,
      12,     0,    18,     0,    60,     0,     0,    57,    34,    35,
       0,     0,     0,     0,     0,    42,    41,    46,    44,    45,
      43,     0,     0,     0,    47,     0,     0,     0,    51,     0,
       0,     0,     0,    11,    19,    67,    61,     0,    40,    65,
       0,     0,    27,    30,    32,    37,    48,    48,    52,    52,
      52,     0,     0,    68,    60,    59,    36,    33,     0,     0,
      50,    49,    55,    54,    53,    21,     0,    62,    28,    20,
      22
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    12,    41,    13,    14,    26,    42,
     129,    53,    54,    55,    91,    56,    94,    57,    98,    58,
      59,   107,    60,    61,    65
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -115
static const yytype_int16 yypact[] =
{
       6,    16,    23,  -115,     6,   -13,  -115,  -115,    37,    17,
      32,    20,    60,    50,    51,    73,    49,    75,    73,    24,
    -115,  -115,    26,  -115,  -115,    56,  -115,    83,    94,    96,
      78,    69,   106,    89,    22,    22,   102,  -115,   121,   121,
      25,   115,    98,    77,   117,    25,  -115,    12,  -115,  -115,
      22,    10,    28,   114,    90,    88,    70,    38,    46,  -115,
    -115,  -115,   111,    69,   103,  -115,  -115,    25,  -115,  -115,
      69,    25,  -115,   100,    25,   104,    63,  -115,  -115,  -115,
      22,    70,    69,    22,    22,  -115,  -115,  -115,  -115,  -115,
    -115,    25,    25,    25,  -115,    25,    25,    25,  -115,    69,
     113,   121,   105,  -115,  -115,  -115,   108,   107,  -115,  -115,
     109,    25,   123,  -115,  -115,  -115,    38,    38,    46,    46,
      46,   120,   125,  -115,    25,  -115,  -115,  -115,    69,   128,
    -115,  -115,  -115,  -115,  -115,  -115,    22,  -115,  -115,  -115,
    -115
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -115,  -115,   142,  -115,    48,   -60,  -115,   131,  -115,  -115,
    -115,   -35,    64,  -115,    68,   -33,   -17,    29,  -114,     7,
    -115,    27,    99,   -30,   -37
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -7
static const yytype_int16 yytable[] =
{
      62,    43,    66,   100,   132,   133,   134,    68,    64,    64,
     103,     1,    73,    46,    33,    75,     8,    76,    10,    81,
       5,    11,   112,     6,    -6,    46,    47,    10,    46,    47,
      11,    46,    47,    43,   102,    -6,    24,    25,   104,   121,
      43,   106,    67,     9,    74,   110,    45,    76,   113,    48,
      49,    16,    43,    11,    50,    78,    79,    67,   115,    51,
      80,    15,    51,    20,   123,    51,    23,    17,   138,    43,
      27,    64,    52,    33,    10,    92,    93,    11,   127,    18,
      -6,    19,    -6,    22,    34,    95,    96,    97,    35,    36,
      28,   106,    29,    37,    38,    39,   109,    30,    43,   130,
     131,   140,   118,   119,   120,    40,    31,    85,    86,    87,
      88,    89,    90,    32,    85,    86,    87,    88,    89,    90,
      44,   116,   117,    45,    63,    33,    69,    70,    71,    72,
      82,    84,    83,    99,   101,   105,   122,   108,   109,   124,
     125,   128,   126,   135,   136,   139,     7,    21,   114,   111,
      77,   137
};

static const yytype_uint8 yycheck[] =
{
      35,    31,    39,    63,   118,   119,   120,    40,    38,    39,
      70,     5,    45,     3,     4,    50,    29,    50,     1,    52,
       4,     4,    82,     0,     7,     3,     4,     1,     3,     4,
       4,     3,     4,    63,    67,     9,    12,    13,    71,    99,
      70,    74,    32,     6,    32,    80,    34,    80,    83,    27,
      28,    31,    82,     4,    32,    27,    28,    32,    91,    37,
      32,    29,    37,    15,   101,    37,    18,     7,   128,    99,
      22,   101,    50,     4,     1,    37,    38,     4,   111,    29,
       7,    30,     9,     8,    15,    39,    40,    41,    19,    20,
      34,   124,     9,    24,    25,    26,    33,     3,   128,   116,
     117,   136,    95,    96,    97,    36,    10,    44,    45,    46,
      47,    48,    49,    35,    44,    45,    46,    47,    48,    49,
      14,    92,    93,    34,    22,     4,    11,    29,    51,    12,
      16,    43,    42,    22,    31,    35,    23,    33,    33,    31,
      33,    18,    33,    23,    19,    17,     4,    16,    84,    81,
      51,   124
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    53,    54,    55,     4,     0,    54,    29,     6,
       1,     4,    56,    58,    59,    29,    31,     7,    29,    30,
      56,    59,     8,    56,    12,    13,    60,    56,    34,     9,
       3,    10,    35,     4,    15,    19,    20,    24,    25,    26,
      36,    57,    61,    75,    14,    34,     3,     4,    27,    28,
      32,    37,    50,    63,    64,    65,    67,    69,    71,    72,
      74,    75,    63,    22,    75,    76,    76,    32,    67,    11,
      29,    51,    12,    67,    32,    63,    67,    74,    27,    28,
      32,    67,    16,    42,    43,    44,    45,    46,    47,    48,
      49,    66,    37,    38,    68,    39,    40,    41,    70,    22,
      57,    31,    67,    57,    67,    35,    67,    73,    33,    33,
      63,    66,    57,    63,    64,    67,    69,    69,    71,    71,
      71,    57,    23,    76,    31,    33,    33,    67,    18,    62,
      68,    68,    70,    70,    70,    23,    19,    73,    57,    17,
      63
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}


/* Prevent warnings from -Wmissing-prototypes.  */

#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{
  
  int yystate;
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss;
  yyvsp = yyvs;

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;

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
     `$$ = $1'.

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
#line 65 "mini_l.y"
    {cout << "prog_start -> functions"<< endl;;}
    break;

  case 3:
#line 67 "mini_l.y"
    {cout << "functions ->	epsilon" << endl;;}
    break;

  case 4:
#line 68 "mini_l.y"
    {cout << "functions -> function functions"<< endl;;}
    break;

  case 5:
#line 70 "mini_l.y"
    {cout<<"function -> FUNCTION IDENT "<<*((yyvsp[(2) - (12)].op_val))<<" SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY"<<endl;;}
    break;

  case 6:
#line 72 "mini_l.y"
    {cout << "Declaration -> epsilon" << endl;;}
    break;

  case 7:
#line 73 "mini_l.y"
    {cout << "Declaration -> declaration SEMICOLON declarations"<< endl;;}
    break;

  case 11:
#line 78 "mini_l.y"
    {cout << "statements -> statement SEMICOLON statements"<< endl;;}
    break;

  case 12:
#line 79 "mini_l.y"
    {cout << "statements -> statement SEMICOLON " << endl;;}
    break;

  case 13:
#line 82 "mini_l.y"
    {cout << "declaration -> identifiers COLON Arrayid" << endl;;}
    break;

  case 15:
#line 86 "mini_l.y"
    {cout << "identifiers -> IDENT "<<*((yyvsp[(1) - (1)].op_val))<<endl ;;}
    break;

  case 16:
#line 87 "mini_l.y"
    {cout<<"identidiers -> IDENT "<<*((yyvsp[(1) - (3)].op_val))<<" COMMA id" << endl;;}
    break;

  case 17:
#line 90 "mini_l.y"
    {cout << "Arrayid -> INTEGER" << endl;;}
    break;

  case 18:
#line 91 "mini_l.y"
    {cout << "Arrayid -> ARRAY LSQUARE NUMBER "<< ((yyvsp[(3) - (6)].int_val)) << " RSQUARE OF INTEGER"<< endl;;}
    break;

  case 19:
#line 93 "mini_l.y"
    {cout << "statement -> var ASSIGN expression" << endl;;}
    break;

  case 20:
#line 94 "mini_l.y"
    {cout << "statement -> IF bool_expr THEN statements elsestates ENDIF" << endl;;}
    break;

  case 21:
#line 95 "mini_l.y"
    {cout << "statement -> WHILE bool_expr BEGINLOOP statements" << endl;;}
    break;

  case 22:
#line 96 "mini_l.y"
    {cout << "statement -> DO BEGINLOOP statements ENDLOOP statements ENDLOOP WHILE bool_expr " << endl;;}
    break;

  case 23:
#line 97 "mini_l.y"
    {cout << "statement -> READ vars" << endl;;}
    break;

  case 24:
#line 98 "mini_l.y"
    {cout << "statement -> WRITE vars" << endl;;}
    break;

  case 25:
#line 99 "mini_l.y"
    {cout << "statement -> CONTINUE" << endl;;}
    break;

  case 26:
#line 100 "mini_l.y"
    {cout << "statement -> RETURN Expression" << endl;;}
    break;

  case 27:
#line 103 "mini_l.y"
    {cout << "elsestates -> epsilon" << endl;;}
    break;

  case 28:
#line 104 "mini_l.y"
    {cout << "elsestates -> ELSE statements" << endl;;}
    break;

  case 29:
#line 108 "mini_l.y"
    {cout << "bool_expr -> relation-And-Expr" << endl;;}
    break;

  case 30:
#line 109 "mini_l.y"
    {cout << "bool_expr -> relationn-And-Expr OR bool_exper" << endl;;}
    break;

  case 31:
#line 111 "mini_l.y"
    {cout << "relation_And_Expr -> relationn_Expr" << endl;;}
    break;

  case 32:
#line 112 "mini_l.y"
    {cout << "relation_And_Expr -> relation_Expr AND relation_And_Expr" << endl;;}
    break;

  case 33:
#line 115 "mini_l.y"
    {cout << "relation_Expr	-> NOT expressions" << endl;;}
    break;

  case 34:
#line 116 "mini_l.y"
    {cout << "relation_Expr -> NOT TRUE" << endl;;}
    break;

  case 35:
#line 117 "mini_l.y"
    {cout << "relation_Expr -> NOT FALSE" << endl;;}
    break;

  case 36:
#line 118 "mini_l.y"
    {cout << "relation_Expr -> NOT LPAREN bool_expr RPAREN" << endl;;}
    break;

  case 37:
#line 119 "mini_l.y"
    {cout << "relation_Expr	-> expressions" << endl;;}
    break;

  case 38:
#line 120 "mini_l.y"
    {cout << "relation_Expr -> TRUE" << endl;;}
    break;

  case 39:
#line 121 "mini_l.y"
    {cout << "relation_Expr -> FALSE" << endl;;}
    break;

  case 40:
#line 122 "mini_l.y"
    {cout << "relation_Expr -> LPAREN bool_expr RPAREN" << endl;;}
    break;

  case 41:
#line 125 "mini_l.y"
    {cout<< "comp -> EQ" <<endl;;}
    break;

  case 42:
#line 126 "mini_l.y"
    {cout<< "comp -> NEQ" <<endl;;}
    break;

  case 43:
#line 127 "mini_l.y"
    {cout<< "comp -> LT" <<endl;;}
    break;

  case 44:
#line 128 "mini_l.y"
    {cout<< "comp -> GT" <<endl;;}
    break;

  case 45:
#line 129 "mini_l.y"
    {cout<< "comp -> LTE" <<endl;;}
    break;

  case 46:
#line 130 "mini_l.y"
    {cout<< "comp -> GTE" <<endl;;}
    break;

  case 47:
#line 132 "mini_l.y"
    {cout << "expressionn -> multiplicative_Expr expre" << endl;;}
    break;

  case 48:
#line 134 "mini_l.y"
    {cout << "expre -> epsilon" << endl;;}
    break;

  case 49:
#line 135 "mini_l.y"
    {cout << "expre -> PLUS multiplicative_expr expre" << endl;;}
    break;

  case 50:
#line 136 "mini_l.y"
    {cout << "expre -> SUB multiplicative_expr expre" << endl;;}
    break;

  case 51:
#line 138 "mini_l.y"
    {cout << "multiplicative_Expr -> term terms" << endl;;}
    break;

  case 52:
#line 140 "mini_l.y"
    {cout << "terms -> epsilon" << endl;;}
    break;

  case 53:
#line 141 "mini_l.y"
    {cout << "terms -> MULT term terms" << endl;;}
    break;

  case 54:
#line 142 "mini_l.y"
    {cout << "terms -> DIVI term terms" << endl;;}
    break;

  case 55:
#line 143 "mini_l.y"
    {cout << "terms -> MOD term terms" << endl;;}
    break;

  case 56:
#line 146 "mini_l.y"
    {cout << "term -> Posterm" << endl;;}
    break;

  case 57:
#line 147 "mini_l.y"
    {cout << "term -> SUB posterm" << endl;;}
    break;

  case 58:
#line 148 "mini_l.y"
    {cout << "term -> ident" << endl;;}
    break;

  case 59:
#line 150 "mini_l.y"
    {cout << "ident -> IDENT " <<*((yyvsp[(1) - (4)].op_val)) << " LPAREN ex RPAREN" << endl;;}
    break;

  case 60:
#line 153 "mini_l.y"
    {cout << "ex -> epsilon" << endl;;}
    break;

  case 61:
#line 154 "mini_l.y"
    {cout << "ex -> expression" << endl;;}
    break;

  case 62:
#line 155 "mini_l.y"
    {cout << "ex -> expression COMMA ex";}
    break;

  case 63:
#line 157 "mini_l.y"
    {cout << "posterm -> var" << endl;;}
    break;

  case 64:
#line 158 "mini_l.y"
    {cout << "posterm -> NUMBER "<< (yyvsp[(1) - (1)].int_val) << endl;;}
    break;

  case 65:
#line 159 "mini_l.y"
    {cout << "posterm -> LPAREN expression RPAREN" << endl;;}
    break;

  case 66:
#line 161 "mini_l.y"
    {cout << "var -> IDENT " << *((yyvsp[(1) - (1)].op_val)) << endl;;}
    break;

  case 67:
#line 162 "mini_l.y"
    {cout << "var -> IDENT "<< *((yyvsp[(1) - (4)].op_val)) <<" LSQUARE expression RSQUARE" << endl;;}
    break;

  case 68:
#line 164 "mini_l.y"
    {cout << "vars -> var COMMA vars" << endl;;}
    break;

  case 69:
#line 165 "mini_l.y"
    {cout << "vars -> var" << endl;;}
    break;


/* Line 1267 of yacc.c.  */
#line 1864 "mini_l.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;


  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}


#line 167 "mini_l.y"


int yyerror(string s)
{
  extern int column,line;	// defined and maintained in lex.c
  extern char *yytext;	// defined and maintained in lex.c
  //printf ( "SYNTAX(PARSER) Error at line %s, column %s :Unexpected Symbol %s Encoutered ", line, column, yytext );

cerr << "SYNTAX(PARSER) Error at line " << line <<", column " << column << " : Unexpected Symbol \"" << yytext << "\" Encountered." << endl;

}

int yyerror(char *s)
{
  return yyerror(string(s));
}





