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
#line 9 "mini_l.y"
{
  int		int_val;
  string*	op_val;
}
/* Line 193 of yacc.c.  */
#line 209 "mini_l.tab.c"
	YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 222 "mini_l.tab.c"

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
#define YYLAST   136

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  72
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
       0,     0,     3,     5,     6,     9,    22,    23,    26,    30,
      34,    37,    41,    43,    47,    49,    56,    58,    60,    62,
      64,    66,    68,    70,    72,    76,    83,    84,    87,    92,
     101,   104,   107,   109,   112,   114,   118,   120,   124,   127,
     129,   133,   135,   137,   141,   143,   145,   147,   149,   151,
     153,   156,   157,   161,   165,   168,   169,   173,   177,   181,
     183,   186,   188,   193,   194,   196,   200,   202,   204,   208,
     210,   215,   219
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      53,     0,    -1,    54,    -1,    -1,    55,    54,    -1,     5,
       4,    29,     6,    56,     7,     8,    56,     9,    10,    57,
      11,    -1,    -1,    58,    29,    -1,    58,    29,    56,    -1,
      61,    29,    57,    -1,    61,    29,    -1,    59,    30,    60,
      -1,     4,    -1,     4,    31,    59,    -1,    12,    -1,    13,
      34,     3,    35,    14,    12,    -1,    62,    -1,    63,    -1,
      65,    -1,    66,    -1,    67,    -1,    68,    -1,    69,    -1,
      70,    -1,    84,    51,    76,    -1,    15,    71,    16,    57,
      64,    17,    -1,    -1,    18,    57,    -1,    19,    71,    22,
      57,    -1,    20,    22,    57,    23,    57,    23,    19,    71,
      -1,    25,    85,    -1,    26,    85,    -1,    24,    -1,    36,
      76,    -1,    72,    -1,    72,    42,    71,    -1,    73,    -1,
      73,    43,    72,    -1,    50,    74,    -1,    74,    -1,    76,
      75,    76,    -1,    27,    -1,    28,    -1,    32,    71,    33,
      -1,    45,    -1,    44,    -1,    49,    -1,    47,    -1,    48,
      -1,    46,    -1,    78,    77,    -1,    -1,    38,    78,    77,
      -1,    37,    78,    77,    -1,    80,    79,    -1,    -1,    41,
      80,    79,    -1,    40,    80,    79,    -1,    39,    80,    79,
      -1,    83,    -1,    37,    83,    -1,    81,    -1,     4,    32,
      82,    33,    -1,    -1,    76,    -1,    76,    31,    82,    -1,
      84,    -1,     3,    -1,    32,    76,    33,    -1,     4,    -1,
       4,    34,    76,    35,    -1,    84,    31,    85,    -1,    84,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    64,    64,    66,    67,    69,    71,    72,    73,    75,
      75,    77,    80,    81,    84,    85,    87,    88,    89,    90,
      91,    92,    93,    94,    96,    98,   101,   102,   105,   107,
     109,   111,   113,   115,   118,   119,   121,   122,   124,   125,
     127,   128,   129,   130,   132,   133,   134,   135,   136,   137,
     139,   141,   142,   143,   145,   147,   148,   149,   150,   153,
     154,   155,   157,   160,   161,   162,   164,   165,   166,   168,
     169,   171,   172
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
  "statement", "astate", "bstate", "elsestates", "cstate", "dstate",
  "estate", "fstate", "gstate", "hstate", "bool_expr", "relation_And_Expr",
  "relation_Expr", "re_ex", "comp", "expression", "expre",
  "multiplicative_Expr", "terms", "term", "ident", "ex", "posterm", "var",
  "vars", 0
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
       0,    52,    53,    54,    54,    55,    56,    56,    56,    57,
      57,    58,    59,    59,    60,    60,    61,    61,    61,    61,
      61,    61,    61,    61,    62,    63,    64,    64,    65,    66,
      67,    68,    69,    70,    71,    71,    72,    72,    73,    73,
      74,    74,    74,    74,    75,    75,    75,    75,    75,    75,
      76,    77,    77,    77,    78,    79,    79,    79,    79,    80,
      80,    80,    81,    82,    82,    82,    83,    83,    83,    84,
      84,    85,    85
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     0,     2,    12,     0,     2,     3,     3,
       2,     3,     1,     3,     1,     6,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     6,     0,     2,     4,     8,
       2,     2,     1,     2,     1,     3,     1,     3,     2,     1,
       3,     1,     1,     3,     1,     1,     1,     1,     1,     1,
       2,     0,     3,     3,     2,     0,     3,     3,     3,     1,
       2,     1,     4,     0,     1,     3,     1,     1,     3,     1,
       4,     3,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     0,     2,     3,     0,     1,     4,     0,     6,
      12,     0,     0,     0,     0,     0,     6,     0,    13,     6,
       8,    14,     0,    11,     0,     0,     0,     0,     0,     0,
      69,     0,     0,     0,    32,     0,     0,     0,     0,     0,
      16,    17,    18,    19,    20,    21,    22,    23,     0,     0,
       0,    67,    69,    41,    42,     0,     0,     0,     0,    34,
      36,    39,     0,    51,    55,    61,    59,    66,     0,     0,
      72,    30,    31,     0,    33,     5,    10,     0,    15,     0,
      63,     0,     0,    60,    38,     0,     0,     0,    45,    44,
      49,    47,    48,    46,     0,     0,     0,    50,     0,     0,
       0,    54,     0,     0,     0,     0,     9,    24,    70,    64,
       0,    43,    68,    26,    35,    37,    40,    51,    51,    55,
      55,    55,    28,     0,    71,    63,    62,     0,     0,    53,
      52,    58,    57,    56,     0,    65,    27,    25,     0,     0,
      29
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,     4,    11,    38,    12,    13,    23,    39,
      40,    41,   128,    42,    43,    44,    45,    46,    47,    58,
      59,    60,    61,    94,    62,    97,    63,   101,    64,    65,
     110,    66,    67,    71
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -81
static const yytype_int8 yypact[] =
{
       5,    18,     2,   -81,     5,    26,   -81,   -81,    28,    41,
      43,    52,    61,    37,    41,    64,    41,    16,   -81,    41,
     -81,   -81,    60,   -81,    86,    94,    88,    73,     0,    85,
      75,     3,     3,    89,   -81,   106,   106,    44,   101,    84,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,    63,   103,
      44,   -81,    36,   -81,   -81,     3,     9,    29,   100,    76,
      74,   -81,    57,    51,    11,   -81,   -81,   -81,    97,     0,
      90,   -81,   -81,    44,   -81,   -81,     0,    44,   -81,    87,
      44,    91,    38,   -81,   -81,     0,     3,     3,   -81,   -81,
     -81,   -81,   -81,   -81,    44,    44,    44,   -81,    44,    44,
      44,   -81,     0,   102,   106,    93,   -81,   -81,   -81,    92,
      95,   -81,   -81,   109,   -81,   -81,   -81,    51,    51,    11,
      11,    11,   -81,     0,   -81,    44,   -81,     0,   112,   -81,
     -81,   -81,   -81,   -81,   107,   -81,   -81,   -81,   113,     3,
     -81
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -81,   -81,   116,   -81,    -2,   -58,   -81,   117,   -81,   -81,
     -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -81,   -32,
      46,   -81,    77,   -81,   -34,   -80,    -3,   -57,   -20,   -81,
      10,    80,   -27,   -31
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      68,    48,     6,    74,    30,    72,    51,    52,    70,    70,
       1,   103,    51,    30,    20,    31,    79,    24,   106,    32,
      33,    82,     5,    81,    34,    35,    36,   113,    21,    22,
      53,    54,    51,    52,     9,    55,    37,   129,   130,   105,
      56,    73,    48,   107,   122,    10,   109,    51,    52,    48,
      98,    99,   100,    57,   114,     8,    53,    54,    48,    15,
     116,    55,   131,   132,   133,   134,    56,    17,    80,   136,
      50,   112,    19,   124,    14,    48,    73,    70,   119,   120,
     121,    56,    88,    89,    90,    91,    92,    93,    95,    96,
      16,   109,   117,   118,    25,    26,    48,    27,    28,    49,
      48,    88,    89,    90,    91,    92,    93,   140,    29,    50,
      30,    69,    75,    76,    77,    78,    85,    87,    86,   102,
       7,   104,   108,   125,   111,   123,   112,   127,   126,   137,
     138,    18,   139,   115,    84,   135,    83
};

static const yytype_uint8 yycheck[] =
{
      32,    28,     0,    37,     4,    36,     3,     4,    35,    36,
       5,    69,     3,     4,    16,    15,    50,    19,    76,    19,
      20,    55,     4,    55,    24,    25,    26,    85,    12,    13,
      27,    28,     3,     4,     6,    32,    36,   117,   118,    73,
      37,    32,    69,    77,   102,     4,    80,     3,     4,    76,
      39,    40,    41,    50,    86,    29,    27,    28,    85,     7,
      94,    32,   119,   120,   121,   123,    37,    30,    32,   127,
      34,    33,     8,   104,    31,   102,    32,   104,    98,    99,
     100,    37,    44,    45,    46,    47,    48,    49,    37,    38,
      29,   125,    95,    96,    34,     9,   123,     3,    10,    14,
     127,    44,    45,    46,    47,    48,    49,   139,    35,    34,
       4,    22,    11,    29,    51,    12,    16,    43,    42,    22,
       4,    31,    35,    31,    33,    23,    33,    18,    33,    17,
      23,    14,    19,    87,    57,   125,    56
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    53,    54,    55,     4,     0,    54,    29,     6,
       4,    56,    58,    59,    31,     7,    29,    30,    59,     8,
      56,    12,    13,    60,    56,    34,     9,     3,    10,    35,
       4,    15,    19,    20,    24,    25,    26,    36,    57,    61,
      62,    63,    65,    66,    67,    68,    69,    70,    84,    14,
      34,     3,     4,    27,    28,    32,    37,    50,    71,    72,
      73,    74,    76,    78,    80,    81,    83,    84,    71,    22,
      84,    85,    85,    32,    76,    11,    29,    51,    12,    76,
      32,    71,    76,    83,    74,    16,    42,    43,    44,    45,
      46,    47,    48,    49,    75,    37,    38,    77,    39,    40,
      41,    79,    22,    57,    31,    76,    57,    76,    35,    76,
      82,    33,    33,    57,    71,    72,    76,    78,    78,    80,
      80,    80,    57,    23,    85,    31,    33,    18,    64,    77,
      77,    79,    79,    79,    57,    82,    57,    17,    23,    19,
      71
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
#line 64 "mini_l.y"
    {cout << "prog_start -> functions"<< endl;;}
    break;

  case 3:
#line 66 "mini_l.y"
    {cout << "functions ->	epsilon" << endl;;}
    break;

  case 4:
#line 67 "mini_l.y"
    {cout << "functions -> function functions"<< endl;;}
    break;

  case 5:
#line 69 "mini_l.y"
    {cout<<"function -> FUNCTION IDENT "<<*((yyvsp[(2) - (12)].op_val))<<" SEMI		 COLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY"<<endl;;}
    break;

  case 6:
#line 71 "mini_l.y"
    {cout << "Declaration -> epsilon" << endl;;}
    break;

  case 7:
#line 72 "mini_l.y"
    {cout << "Declaration -> declaration SEMICOLON"<< endl;;}
    break;

  case 8:
#line 73 "mini_l.y"
    {cout << "Declaration -> declaration SEMICOLON declarations"<< endl;;}
    break;

  case 9:
#line 75 "mini_l.y"
    {cout << "statements -> statement SEMICOLON statements"<< endl;;}
    break;

  case 10:
#line 75 "mini_l.y"
    {cout << "statements -> statement SEMICOLON " << endl;;}
    break;

  case 11:
#line 77 "mini_l.y"
    {cout << "declaration -> identifiers COLON Arrayid" << endl;;}
    break;

  case 12:
#line 80 "mini_l.y"
    {cout << "identifiers -> IDENT "<<*((yyvsp[(1) - (1)].op_val))<<endl ;;}
    break;

  case 13:
#line 81 "mini_l.y"
    {cout<<"identidiers -> IDENT "<<*((yyvsp[(1) - (3)].op_val))<<" COMMA id" << endl;;}
    break;

  case 14:
#line 84 "mini_l.y"
    {cout << "Arrayid -> INTEGER" << endl;;}
    break;

  case 15:
#line 85 "mini_l.y"
    {cout << "Arrayid -> ARRAY LSQUARE NUMBER RSQUARE OF INTEGER"<< endl;;}
    break;

  case 16:
#line 87 "mini_l.y"
    {cout << "statement -> a_state" << endl;;}
    break;

  case 17:
#line 88 "mini_l.y"
    {cout << "statement -> b_state" << endl;;}
    break;

  case 18:
#line 89 "mini_l.y"
    {cout << "statement -> c_state" << endl;;}
    break;

  case 19:
#line 90 "mini_l.y"
    {cout << "statement -> d_state" << endl;;}
    break;

  case 20:
#line 91 "mini_l.y"
    {cout << "statement -> e_state" << endl;;}
    break;

  case 21:
#line 92 "mini_l.y"
    {cout << "statement -> f_state" << endl;;}
    break;

  case 22:
#line 93 "mini_l.y"
    {cout << "statement -> g_state" << endl;;}
    break;

  case 23:
#line 94 "mini_l.y"
    {cout << "statement -> h_state" << endl;;}
    break;

  case 24:
#line 96 "mini_l.y"
    {cout << "a_state -> var ASSIGN expression" << endl;;}
    break;

  case 25:
#line 98 "mini_l.y"
    {cout << "b_state -> IF bool_expr THEN statements elsestates ENDIF" << endl;;}
    break;

  case 26:
#line 101 "mini_l.y"
    {cout << "elsestates -> epsilon" << endl;;}
    break;

  case 27:
#line 102 "mini_l.y"
    {cout << "elsestates -> ELSE statements" << endl;;}
    break;

  case 28:
#line 105 "mini_l.y"
    {cout << "c_state -> WHILE bool_expr BEGINLOOP statements" << endl;;}
    break;

  case 29:
#line 107 "mini_l.y"
    {cout << "d_state -> DO BEGINLOOP statements ENDLOOP statements ENDLOOP WHILE bool_expr " << endl;;}
    break;

  case 30:
#line 109 "mini_l.y"
    {cout << "e_state -> READ vars" << endl;;}
    break;

  case 31:
#line 111 "mini_l.y"
    {cout << "g_state -> WRITE vars" << endl;;}
    break;

  case 32:
#line 113 "mini_l.y"
    {cout << "h_state -> CONTINUE" << endl;;}
    break;

  case 33:
#line 115 "mini_l.y"
    {cout << "i_state -> RETURN Expression" << endl;;}
    break;

  case 34:
#line 118 "mini_l.y"
    {cout << "bool_expr -> relation-And-Expr" << endl;;}
    break;

  case 35:
#line 119 "mini_l.y"
    {cout << "bool_expr -> relationn-And-Expr OR bool_exper" << endl;;}
    break;

  case 36:
#line 121 "mini_l.y"
    {cout << "relation_And_Expr -> relationn_Expr" << endl;;}
    break;

  case 37:
#line 122 "mini_l.y"
    {cout << "relation_And_Expr -> relation_Expr AND relation_And_Expr" << endl;;}
    break;

  case 38:
#line 124 "mini_l.y"
    {cout << "relation_Expr -> NOT re_ex" << endl;;}
    break;

  case 39:
#line 125 "mini_l.y"
    {cout << "relationn_Expr -> re_ex" << endl;;}
    break;

  case 40:
#line 127 "mini_l.y"
    {cout << "re_ex	-> expressions" << endl;;}
    break;

  case 41:
#line 128 "mini_l.y"
    {cout << "re_ex -> TRUE" << endl;;}
    break;

  case 42:
#line 129 "mini_l.y"
    {cout << "re_ex -> FALSE" << endl;;}
    break;

  case 43:
#line 130 "mini_l.y"
    {cout << "re_ex -> LPAREN bool_expr RPAREN" << endl;;}
    break;

  case 44:
#line 132 "mini_l.y"
    {cout<< "comp -> EQ" <<endl;;}
    break;

  case 45:
#line 133 "mini_l.y"
    {cout<< "comp -> NEQ" <<endl;;}
    break;

  case 46:
#line 134 "mini_l.y"
    {cout<< "comp -> LT" <<endl;;}
    break;

  case 47:
#line 135 "mini_l.y"
    {cout<< "comp -> GT" <<endl;;}
    break;

  case 48:
#line 136 "mini_l.y"
    {cout<< "comp -> LTE" <<endl;;}
    break;

  case 49:
#line 137 "mini_l.y"
    {cout<< "comp -> GTE" <<endl;;}
    break;

  case 50:
#line 139 "mini_l.y"
    {cout << "expressionn -> multiplicative_Expr expre" << endl;;}
    break;

  case 51:
#line 141 "mini_l.y"
    {cout << "expre -> epsilon" << endl;;}
    break;

  case 52:
#line 142 "mini_l.y"
    {cout << "expre -> PLUS multiplicative_expr expre" << endl;;}
    break;

  case 53:
#line 143 "mini_l.y"
    {cout << "expre -> SUB multiplicative_expr expre" << endl;;}
    break;

  case 54:
#line 145 "mini_l.y"
    {cout << "multiplicative_Expr -> term terms" << endl;;}
    break;

  case 55:
#line 147 "mini_l.y"
    {cout << "terms -> epsilon" << endl;;}
    break;

  case 56:
#line 148 "mini_l.y"
    {cout << "terms -> MULT term terms" << endl;;}
    break;

  case 57:
#line 149 "mini_l.y"
    {cout << "terms -> DIVI term terms" << endl;;}
    break;

  case 58:
#line 150 "mini_l.y"
    {cout << "terms -> MOD term terms" << endl;;}
    break;

  case 59:
#line 153 "mini_l.y"
    {cout << "term -> Posterm" << endl;;}
    break;

  case 60:
#line 154 "mini_l.y"
    {cout << "term -> SUB posterm" << endl;;}
    break;

  case 61:
#line 155 "mini_l.y"
    {cout << "term -> ident" << endl;;}
    break;

  case 62:
#line 157 "mini_l.y"
    {cout << "ident -> IDENT " <<*((yyvsp[(1) - (4)].op_val)) << "LPAREN ex RPAREN" << endl;;}
    break;

  case 63:
#line 160 "mini_l.y"
    {cout << "ex -> epsilon" << endl;;}
    break;

  case 64:
#line 161 "mini_l.y"
    {cout << "ex -> expression" << endl;;}
    break;

  case 65:
#line 162 "mini_l.y"
    {cout << "ex -> expression COMMA ex";}
    break;

  case 66:
#line 164 "mini_l.y"
    {cout << "posterm -> var" << endl;;}
    break;

  case 67:
#line 165 "mini_l.y"
    {cout << "posterm -> NUMBER" << endl;;}
    break;

  case 68:
#line 166 "mini_l.y"
    {cout << "posterm -> LPAREN expression RPAREN" << endl;;}
    break;

  case 69:
#line 168 "mini_l.y"
    {cout << "var -> IDENT " << *((yyvsp[(1) - (1)].op_val)) << endl;;}
    break;

  case 70:
#line 169 "mini_l.y"
    {cout << "var -> IDENT "<< *((yyvsp[(1) - (4)].op_val)) <<" LSQUARE expression RSQUARE" << endl;;}
    break;

  case 71:
#line 171 "mini_l.y"
    {cout << "vars -> var COMMA vars" << endl;;}
    break;

  case 72:
#line 172 "mini_l.y"
    {cout << "vars -> var" << endl;;}
    break;


/* Line 1267 of yacc.c.  */
#line 1902 "mini_l.tab.c"
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


#line 174 "mini_l.y"


int yyerror(string s)
{
  extern int column,line;	// defined and maintained in lex.c
  extern char *yytext;	// defined and maintained in lex.c
  
   cerr << "SYNTAX(PARSER) Error at line " << line <<", column " << column << " : Unexpected Symbol \"" << yytext << "\" Encountered." << endl;
  exit(1);
}

int yyerror(char *s)
{
  return yyerror(string(s));
}





