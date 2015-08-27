
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "try.y"

#include <sstream>
#include <string>
#include <map>
#include <stdio.h>
#include <stdlib.h> 
#include <algorithm>
#include <iostream>
#include <vector>
#include <ctype.h>
#include <string.h>
#include <time.h>
#define MAX 1000

using namespace std;

	extern FILE *yyin;
    int yylex(void);
    void yyerror(char *);
	void identifer_type(string str);
	void insert_tokentable(string str1);
	void   update_tokentable(string str2);
	string get_variable_value(string myvar);
	

	
map < string, int > typeCheck;	
int tokenCount = 0;	
bool value_flag = false;


int temp_int=0;
float temp_float=0.0;
string temp_char="";


int var_pos=0;

int int_value=0;
float float_value = 0.0;
string char_value = "";
string char_temp_value = "";

string check = "";



string var_name = "";
string var_value = "";
string var_type = "";

	
	struct tokenTable{
                 string token_Name;
                 string token_Type;
                 string token_Value;
	}token_No[MAX];
	
	
	
	


/* Line 189 of yacc.c  */
#line 137 "y.tab.c"

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


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INTVAL = 258,
     VAR = 259,
     FLOATVAL = 260,
     CHARVAL = 261,
     PRINTF = 262,
     TYPEINT = 263,
     TYPELONG = 264,
     TYPEFLOAT = 265,
     TYPEDOUBLE = 266,
     TYPECHAR = 267,
     EQ = 268,
     SEM = 269,
     NL = 270,
     COM = 271,
     SQ = 272,
     RETURN = 273,
     MAIN = 274,
     VOID = 275
   };
#endif
/* Tokens.  */
#define INTVAL 258
#define VAR 259
#define FLOATVAL 260
#define CHARVAL 261
#define PRINTF 262
#define TYPEINT 263
#define TYPELONG 264
#define TYPEFLOAT 265
#define TYPEDOUBLE 266
#define TYPECHAR 267
#define EQ 268
#define SEM 269
#define NL 270
#define COM 271
#define SQ 272
#define RETURN 273
#define MAIN 274
#define VOID 275




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 65 "try.y"

    float fval;
	int ival;
	char *cval;
	char *type;



/* Line 214 of yacc.c  */
#line 222 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 234 "y.tab.c"

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
# if YYENABLE_NLS
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
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
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
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   104

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  28
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  19
/* YYNRULES -- Number of rules.  */
#define YYNRULES  61
/* YYNRULES -- Number of states.  */
#define YYNSTATES  103

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   275

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      26,    27,    23,    21,    25,    22,     2,    24,     2,     2,
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
      15,    16,    17,    18,    19,    20
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint8 yyprhs[] =
{
       0,     0,     3,     6,     7,    11,    15,    19,    23,    27,
      28,    34,    36,    38,    40,    42,    46,    50,    54,    58,
      62,    64,    66,    68,    70,    74,    76,    80,    82,    86,
      88,    92,    94,    98,   100,   104,   106,   110,   112,   116,
     118,   122,   124,   128,   130,   134,   138,   142,   146,   150,
     152,   154,   158,   162,   166,   170,   174,   176,   178,   180,
     182,   184
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      29,     0,    -1,    29,    30,    -1,    -1,     8,    33,    14,
      -1,     9,    34,    14,    -1,    10,    35,    14,    -1,    11,
      36,    14,    -1,    12,    37,    14,    -1,    -1,     4,    31,
      13,    32,    14,    -1,    46,    -1,    18,    -1,    19,    -1,
      20,    -1,    32,    21,    32,    -1,    32,    22,    32,    -1,
      32,    23,    32,    -1,    32,    24,    32,    -1,    26,    32,
      27,    -1,     3,    -1,     5,    -1,     6,    -1,     4,    -1,
      33,    25,    38,    -1,    38,    -1,    34,    25,    39,    -1,
      39,    -1,    35,    25,    40,    -1,    40,    -1,    36,    25,
      41,    -1,    41,    -1,    37,    25,    42,    -1,    42,    -1,
       4,    13,    43,    -1,     4,    -1,     4,    13,    43,    -1,
       4,    -1,     4,    13,    44,    -1,     4,    -1,     4,    13,
      44,    -1,     4,    -1,     4,    13,    45,    -1,     4,    -1,
      43,    21,    43,    -1,    43,    22,    43,    -1,    43,    23,
      43,    -1,    43,    24,    43,    -1,    26,    43,    27,    -1,
       3,    -1,     4,    -1,    44,    21,    44,    -1,    44,    22,
      44,    -1,    44,    23,    44,    -1,    44,    24,    44,    -1,
      26,    44,    27,    -1,     5,    -1,     3,    -1,     4,    -1,
       6,    -1,     4,    -1,     7,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    87,    87,    88,    94,    96,    98,   100,   102,   104,
     104,   140,   142,   144,   146,   153,   168,   180,   192,   227,
     243,   258,   271,   283,   369,   370,   373,   374,   377,   378,
     381,   382,   385,   386,   390,   392,   395,   397,   400,   402,
     405,   407,   410,   412,   419,   420,   421,   422,   435,   436,
     437,   481,   482,   483,   484,   496,   497,   498,   499,   533,
     534,   565
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTVAL", "VAR", "FLOATVAL", "CHARVAL",
  "PRINTF", "TYPEINT", "TYPELONG", "TYPEFLOAT", "TYPEDOUBLE", "TYPECHAR",
  "EQ", "SEM", "NL", "COM", "SQ", "RETURN", "MAIN", "VOID", "'+'", "'-'",
  "'*'", "'/'", "','", "'('", "')'", "$accept", "stm", "code", "$@1",
  "expn", "varlist", "varlistlong", "varlistfloat", "varlistdouble",
  "varlistchar", "vareq", "vareqlong", "vareqfloat", "vareqdouble",
  "vareqchar", "exp", "expfloat", "expchar", "myprintf", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,    43,    45,    42,    47,    44,    40,    41
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    28,    29,    29,    30,    30,    30,    30,    30,    31,
      30,    30,    30,    30,    30,    32,    32,    32,    32,    32,
      32,    32,    32,    32,    33,    33,    34,    34,    35,    35,
      36,    36,    37,    37,    38,    38,    39,    39,    40,    40,
      41,    41,    42,    42,    43,    43,    43,    43,    43,    43,
      43,    44,    44,    44,    44,    44,    44,    44,    44,    45,
      45,    46
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     3,     3,     3,     3,     3,     0,
       5,     1,     1,     1,     1,     3,     3,     3,     3,     3,
       1,     1,     1,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     3,     3,     3,     3,     1,
       1,     3,     3,     3,     3,     3,     1,     1,     1,     1,
       1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       3,     0,     1,     9,    61,     0,     0,     0,     0,     0,
      12,    13,    14,     2,    11,     0,    35,     0,    25,    37,
       0,    27,    39,     0,    29,    41,     0,    31,    43,     0,
      33,     0,     0,     4,     0,     0,     5,     0,     0,     6,
       0,     0,     7,     0,     0,     8,     0,    20,    23,    21,
      22,     0,     0,    49,    50,     0,    34,    24,    36,    26,
      57,    58,    56,     0,    38,    28,    40,    30,    60,    59,
      42,    32,     0,    10,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    19,    15,
      16,    17,    18,    48,    44,    45,    46,    47,    55,    51,
      52,    53,    54
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     1,    13,    15,    52,    17,    20,    23,    26,    29,
      18,    21,    24,    27,    30,    56,    64,    70,    14
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -46
static const yytype_int8 yypact[] =
{
     -46,    52,   -46,   -46,   -46,     5,    12,    17,    21,    31,
     -46,   -46,   -46,   -46,   -46,    41,    56,    -7,   -46,    83,
      -6,   -46,    84,     1,   -46,    85,     3,   -46,    86,     9,
     -46,    -2,    10,   -46,     5,    10,   -46,    12,     7,   -46,
      17,     7,   -46,    21,    49,   -46,    31,   -46,   -46,   -46,
     -46,    -2,    44,   -46,   -46,    10,    67,   -46,    67,   -46,
     -46,   -46,   -46,     7,    71,   -46,    71,   -46,   -46,   -46,
     -46,   -46,    16,   -46,    -2,    -2,    -2,    -2,    53,    10,
      10,    10,    10,    60,     7,     7,     7,     7,   -46,    18,
      18,   -46,   -46,   -46,    55,    55,   -46,   -46,   -46,    62,
      62,   -46,   -46
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -46,   -46,   -46,   -46,   -45,   -46,   -46,   -46,   -46,   -46,
     -12,    20,    33,    57,    58,   -35,   -36,   -46,   -46
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      58,    47,    48,    49,    50,    66,    72,    33,    36,    16,
      60,    61,    62,    53,    54,    39,    19,    42,    34,    37,
      78,    22,    57,    45,    51,    25,    40,    83,    43,    89,
      90,    91,    92,    63,    46,    28,    55,    74,    75,    76,
      77,    76,    77,    88,    94,    95,    96,    97,    99,   100,
     101,   102,     2,    68,    31,    69,     3,    59,    73,     4,
       5,     6,     7,     8,     9,    74,    75,    76,    77,    32,
      10,    11,    12,    65,    79,    80,    81,    82,    81,    82,
      93,    84,    85,    86,    87,    86,    87,    98,    79,    80,
      81,    82,    84,    85,    86,    87,    35,    38,    41,    44,
      67,     0,     0,     0,    71
};

static const yytype_int8 yycheck[] =
{
      35,     3,     4,     5,     6,    41,    51,    14,    14,     4,
       3,     4,     5,     3,     4,    14,     4,    14,    25,    25,
      55,     4,    34,    14,    26,     4,    25,    63,    25,    74,
      75,    76,    77,    26,    25,     4,    26,    21,    22,    23,
      24,    23,    24,    27,    79,    80,    81,    82,    84,    85,
      86,    87,     0,     4,    13,     6,     4,    37,    14,     7,
       8,     9,    10,    11,    12,    21,    22,    23,    24,    13,
      18,    19,    20,    40,    21,    22,    23,    24,    23,    24,
      27,    21,    22,    23,    24,    23,    24,    27,    21,    22,
      23,    24,    21,    22,    23,    24,    13,    13,    13,    13,
      43,    -1,    -1,    -1,    46
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    29,     0,     4,     7,     8,     9,    10,    11,    12,
      18,    19,    20,    30,    46,    31,     4,    33,    38,     4,
      34,    39,     4,    35,    40,     4,    36,    41,     4,    37,
      42,    13,    13,    14,    25,    13,    14,    25,    13,    14,
      25,    13,    14,    25,    13,    14,    25,     3,     4,     5,
       6,    26,    32,     3,     4,    26,    43,    38,    43,    39,
       3,     4,     5,    26,    44,    40,    44,    41,     4,     6,
      45,    42,    32,    14,    21,    22,    23,    24,    43,    21,
      22,    23,    24,    44,    21,    22,    23,    24,    27,    32,
      32,    32,    32,    27,    43,    43,    43,    43,    27,    44,
      44,    44,    44
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
# if YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
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
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
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


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

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
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
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

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
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

/* Line 1455 of yacc.c  */
#line 87 "try.y"
    {}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 94 "try.y"
    { identifer_type("int"); }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 96 "try.y"
    { identifer_type("long"); }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 98 "try.y"
    { identifer_type("float"); }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 100 "try.y"
    { identifer_type("double"); }
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 102 "try.y"
    { identifer_type("char"); }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 104 "try.y"
    { var_name=(yyvsp[(1) - (1)].cval); if(typeCheck[var_name]==0)
							            {
							                printf("Undefined Variable!\n");
								            cout<<"Variable Name: "<<var_name<<endl;
											exit(0);
							             }
										}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 111 "try.y"
    { 
                                             if(typeCheck[var_name]==1)
											   {
											      int_value = temp_int;
												  update_tokentable("int");
											   }
											 else if(typeCheck[var_name]==2)
											   {
											      int_value = temp_int;
												  update_tokentable("long");
											   }
											 else if(typeCheck[var_name]==3)
											   {
											      float_value = temp_float;
												  update_tokentable("float");
											   }
											 else if(typeCheck[var_name]==4)
											   { 
											      float_value = temp_float;
												  update_tokentable("double");
											   }
											 else if(typeCheck[var_name]==5)
											   {
											      char_value = temp_char;
												  update_tokentable("char");
											   }
																					 
							        }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 140 "try.y"
    {}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 142 "try.y"
    {identifer_type("return");}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 144 "try.y"
    {identifer_type("main");}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 146 "try.y"
    {identifer_type("void");}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 153 "try.y"
    {
                         
                          
						  if(typeCheck[var_name]==1 || typeCheck[var_name]==2)
						  {
                           (yyval.ival)=(yyvsp[(1) - (3)].ival)+(yyvsp[(3) - (3)].ival);
						   temp_int = (yyval.ival);
						   }
						  else if(typeCheck[var_name]==3 || typeCheck[var_name]==4)
						  {
						   (yyval.fval)=(yyvsp[(1) - (3)].fval)+(yyvsp[(3) - (3)].fval);
						   temp_float = (yyval.fval);
						   
						  }
					   }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 168 "try.y"
    {
	                      if(typeCheck[var_name]==1 || typeCheck[var_name]==2)
						  {
                           (yyval.ival)=(yyvsp[(1) - (3)].ival)-(yyvsp[(3) - (3)].ival);
						   temp_int = (yyval.ival);
						  }
						 else if(typeCheck[var_name]==3 || typeCheck[var_name]==4)
						  {
						   (yyval.fval)=(yyvsp[(1) - (3)].fval)-(yyvsp[(3) - (3)].fval);
						   temp_float = (yyval.fval);
						  }
					  }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 180 "try.y"
    {
	                     if(typeCheck[var_name]==1 || typeCheck[var_name]==2)
						 {
                          (yyval.ival)=(yyvsp[(1) - (3)].ival)*(yyvsp[(3) - (3)].ival);
						  temp_int = (yyval.ival);
						 }
						 else if(typeCheck[var_name]==3 || typeCheck[var_name]==4)
						 {
						  (yyval.fval)=(yyvsp[(1) - (3)].fval)*(yyvsp[(3) - (3)].fval);
						  temp_float = (yyval.fval);
						 }
	                  }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 192 "try.y"
    {
	  
	                   if(typeCheck[var_name]==1 || typeCheck[var_name]==2)
					   {
						   if((yyvsp[(3) - (3)].ival) == 0)
					         {
						        printf("Can not divide by 0\n");
						        exit(0);
						   
						     }
							 else
							 {
							  (yyval.ival)=(yyvsp[(1) - (3)].ival)/(yyvsp[(3) - (3)].ival);
							  temp_int = (yyval.ival);
							 }
						}
						
						else if(typeCheck[var_name]==3 || typeCheck[var_name]==4)
						{
					     if((yyvsp[(3) - (3)].fval) == 0)
					         {
						        printf("Can not divide by 0\n");
						        exit(0);
						     }
						  else
						  {
					        (yyval.fval)=(yyvsp[(1) - (3)].fval)/(yyvsp[(3) - (3)].fval);
							temp_float = (yyval.fval);
						  }
					    }
					   
					  }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 227 "try.y"
    {  
	                     if(typeCheck[var_name]==1 || typeCheck[var_name]==2)
						 {
	                         (yyval.ival)=(yyvsp[(2) - (3)].ival);
							 temp_int = (yyval.ival);
							 
						 }
						 
					else if(typeCheck[var_name]==3 || typeCheck[var_name]==4)
					    {
	                        (yyval.fval)=(yyvsp[(2) - (3)].fval);
							temp_float = (yyval.fval);
						}
						  
				  }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 243 "try.y"
    {     
	                       if(typeCheck[var_name]==1 || typeCheck[var_name]==2)
						   {
	                         (yyval.ival)=(yyvsp[(1) - (1)].ival);
							 temp_int = (yyval.ival);
							}
					 	  else if(typeCheck[var_name]==3 || typeCheck[var_name]==4)
						   {
							 (yyval.fval)=(yyvsp[(1) - (1)].ival);
							 temp_float = (yyval.fval);
						   }
							 
						  
				  }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 258 "try.y"
    {
                        	if(typeCheck[var_name]==1 || typeCheck[var_name]==2)
                              {
							  printf("Float to Int Convertion!\n");
							  exit(0);
                              }							  
	                        else if(typeCheck[var_name]==3 || typeCheck[var_name]==4)
							{
	                         (yyval.fval)=(yyvsp[(1) - (1)].fval);
							 temp_float = (yyval.fval);
							}
						  
				  }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 271 "try.y"
    {      if(typeCheck[var_name]==5)
		                     {
	                           (yyval.cval)=(yyvsp[(1) - (1)].cval);
							   temp_char = (yyval.cval)[1];
							 }
						else
                           {
						    printf("Wrong Formation!\n");
							exit(0);
                           }						   
				  }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 283 "try.y"
    {   
            		string myvar = (yyvsp[(1) - (1)].cval);
		          int my_intValue;
				  float my_floatValue;
				  string my_charValue;
	                    	
		             if(typeCheck[myvar]==0)
					   {
					     cout<<"In Variable Expression -- Undefined Variable!\n"<<"Variable Name: "<<myvar<<endl;
						 exit(0);  
					   }
					 else if(typeCheck[var_name]==1 || typeCheck[var_name]==2)
					   {
					            if(typeCheck[myvar]==1 || typeCheck[myvar]==2) 
					                {
					                  std::stringstream ss(get_variable_value(myvar));
									  ss >> my_intValue;
                                      (yyval.ival) = my_intValue;	
                                      temp_int = (yyval.ival);						
					                }
								else
                                   {
								      if(typeCheck[myvar]==3 || typeCheck[myvar]==4) 
					                    {
										 cout<<"Int Variable "<<var_name<<" is trying to assign Float Variable "<<myvar<<endl;
										 exit(0);
                                        }
									  else if(typeCheck[myvar]==5) 
					                    {
										 cout<<"Int Variable "<<var_name<<" is trying to assign Character Variable "<<myvar<<endl;
										 exit(0);
                                        }
									  else
                                        {
										 cout<<"Int Variable "<<var_name<<" is trying to assign Unrecognised Type of Variable "<<myvar<<endl;
										 exit(0);
                                        }										
										
                                   }								   
						}
		              else if(typeCheck[var_name]==3 || typeCheck[var_name]==4)
					   {
					                if(typeCheck[myvar]==1 || typeCheck[myvar]==2 || typeCheck[myvar]==3 || typeCheck[myvar]==4)
									{
					                  std::stringstream ss(get_variable_value(myvar));
									  ss >> my_floatValue;
                                      (yyval.fval) = my_floatValue;	
                                      temp_float = (yyval.fval);
                                    }									  
					                else if(typeCheck[myvar]==5) 
					                    {
										 cout<<"Float Variable "<<var_name<<" is trying to assign Character Variable "<<myvar<<endl;
										 exit(0);
                                        }
									else
                                        {
										 cout<<"Float Variable "<<var_name<<" is trying to assign Unrecognised Type of Variable "<<myvar<<endl;
										 exit(0);
                                        }	
	         
				      }
					  else if(typeCheck[var_name]== 5)
					   {
					                if(typeCheck[myvar] == 5)
									{
					                   my_charValue = (get_variable_value(myvar));	
                                       temp_char = my_charValue;
                                    }									  
					                
									else
                                        {
										 cout<<"Char Variable "<<var_name<<" is trying to assign Another Type of Variable "<<myvar<<endl;
										 exit(0);
                                        }	
	         
				      }
		
		      }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 369 "try.y"
    {}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 370 "try.y"
    {}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 373 "try.y"
    {}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 374 "try.y"
    {}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 377 "try.y"
    {}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 378 "try.y"
    {}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 381 "try.y"
    {}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 382 "try.y"
    {}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 385 "try.y"
    {}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 386 "try.y"
    {}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 390 "try.y"
    { var_name = (yyvsp[(1) - (3)].cval); int_value = (yyvsp[(3) - (3)].ival); value_flag = true; insert_tokentable("int"); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 392 "try.y"
    { var_name = (yyvsp[(1) - (1)].cval); value_flag = false; insert_tokentable("int");}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 395 "try.y"
    { var_name = (yyvsp[(1) - (3)].cval); int_value = (yyvsp[(3) - (3)].ival); value_flag = true; insert_tokentable("long"); }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 397 "try.y"
    { var_name = (yyvsp[(1) - (1)].cval); value_flag = false; insert_tokentable("long");}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 400 "try.y"
    { var_name = (yyvsp[(1) - (3)].cval); float_value = (yyvsp[(3) - (3)].fval); value_flag = true; insert_tokentable("float"); }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 402 "try.y"
    { var_name = (yyvsp[(1) - (1)].cval); value_flag = false; insert_tokentable("float");}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 405 "try.y"
    { var_name = (yyvsp[(1) - (3)].cval); float_value = (yyvsp[(3) - (3)].fval); value_flag = true; insert_tokentable("double"); }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 407 "try.y"
    { var_name = (yyvsp[(1) - (1)].cval); value_flag = false; insert_tokentable("double");}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 410 "try.y"
    { var_name = (yyvsp[(1) - (3)].cval); char_value = temp_char; value_flag = true; insert_tokentable("char"); }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 412 "try.y"
    { var_name = (yyvsp[(1) - (1)].cval); value_flag = false; insert_tokentable("char");}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 419 "try.y"
    {(yyval.ival)=(yyvsp[(1) - (3)].ival)+(yyvsp[(3) - (3)].ival);}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 420 "try.y"
    {(yyval.ival)=(yyvsp[(1) - (3)].ival)-(yyvsp[(3) - (3)].ival);}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 421 "try.y"
    {(yyval.ival)=(yyvsp[(1) - (3)].ival)*(yyvsp[(3) - (3)].ival);}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 422 "try.y"
    {
	                  if((yyvsp[(3) - (3)].ival) == 0)
					    {
						   printf("Can not divide by 0\n");
						  
						 exit(0);
						   
						}
	                 else
					   {
					      (yyval.ival)=(yyvsp[(1) - (3)].ival)/(yyvsp[(3) - (3)].ival);
					   }	
					}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 435 "try.y"
    {(yyval.ival)=(yyvsp[(2) - (3)].ival);}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 436 "try.y"
    { (yyval.ival)=(yyvsp[(1) - (1)].ival);}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 437 "try.y"
    {
	  
             		 string myvar = (yyvsp[(1) - (1)].cval);
		             int my_intValue;
         	
		             if(typeCheck[myvar]==0)
					   {
					     cout<<"In Variable Expression -- Undefined Variable!\n"<<"Variable Name: "<<myvar<<endl;
						 exit(0);  
					   }
					
					 else if(typeCheck[myvar]==1 || typeCheck[myvar]==2) 
					   {
					      std::stringstream ss(get_variable_value(myvar));
					      ss >> my_intValue;
                          (yyval.ival) = my_intValue;						
					    }

                     else if(typeCheck[myvar]==3 || typeCheck[myvar]==4) 
					    {
						  cout<<"In Integer Type Variabl ---> trying to assign Float Variable "<<myvar<<endl;
						  exit(0);
                        }
					else if(typeCheck[myvar]==5) 
					    {
						  cout<<"In Integer Type Variabl ---> trying to assign Character Variable "<<myvar<<endl;
						  exit(0);
                        }
					else
                        {
						  cout<<"In Integer Type Variabl ---> trying to assign Unrecognised Type of Variable "<<myvar<<endl;
						  exit(0);
                        }										
										
                       
		
		      }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 481 "try.y"
    {(yyval.fval)=(yyvsp[(1) - (3)].fval)+(yyvsp[(3) - (3)].fval);}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 482 "try.y"
    {(yyval.fval)=(yyvsp[(1) - (3)].fval)-(yyvsp[(3) - (3)].fval);}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 483 "try.y"
    {(yyval.fval)=(yyvsp[(1) - (3)].fval)*(yyvsp[(3) - (3)].fval);}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 484 "try.y"
    {
	                  if((yyvsp[(3) - (3)].fval) == 0)
					    {
						   printf("Can not divide by 0\n");
						 exit(0);
						   
						}
	                 else
					   {
					      (yyval.fval)=(yyvsp[(1) - (3)].fval)/(yyvsp[(3) - (3)].fval);
					   }	
					}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 496 "try.y"
    {(yyval.fval)=(yyvsp[(2) - (3)].fval);}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 497 "try.y"
    { (yyval.fval)=(yyvsp[(1) - (1)].fval);}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 498 "try.y"
    {(yyval.fval)=(yyvsp[(1) - (1)].ival);}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 499 "try.y"
    {   
            	       string myvar = (yyvsp[(1) - (1)].cval);
		               float my_floatValue;
				               
	                    	
		             if(typeCheck[myvar]==0)
					   {
					     cout<<"In Variable Expression -- Undefined Variable!\n"<<"Variable Name: "<<myvar<<endl;
						 exit(0);  
					   }
					 
					 else if(typeCheck[myvar]==1 || typeCheck[myvar]==2 || typeCheck[myvar]==3 || typeCheck[myvar]==4) 
					   {
					     std::stringstream ss(get_variable_value(myvar));
						 ss >> my_floatValue;
                         (yyval.fval) = my_floatValue;						
					   }
								
					 else if(typeCheck[myvar]==5) 
					   {
						 cout<<"Float Variable is trying to assign Character Variable "<<myvar<<endl;
					     exit(0);
                       }
				     else
                       {
					     cout<<"Float Variable  is trying to assign Unrecognised Type of Variable "<<myvar<<endl;
						 exit(0);
                       }										
		      }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 533 "try.y"
    { (yyval.cval)=(yyvsp[(1) - (1)].cval); temp_char = (yyval.cval)[1];}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 534 "try.y"
    {   
            		string myvar = (yyvsp[(1) - (1)].cval);
				    string my_charValue;
	                    	
		             if(typeCheck[myvar]==0)
					   {
					     cout<<"In Variable Expression -- Undefined Variable!\n"<<"Variable Name: "<<myvar<<endl;
						 exit(0);  
					   }
					  else if(typeCheck[myvar]== 5)
					   {
					     my_charValue = get_variable_value(myvar);	
                         temp_char = my_charValue;
                       }									  
					  else
                        {
						  cout<<"Char Variable "<<var_name<<" is trying to assign Another Type of Variable "<<myvar<<endl;
						  exit(0);
                        }	
	         
				      
		
		      }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 565 "try.y"
    {
                          identifer_type("printf");
			              
						  string myString = (string)(yyvsp[(1) - (1)].cval);
			
			              string myText = "";
			              string myResultText = "";
			              string myVariableList = "";
			
			              bool fcom = false;
			              int TextCheck = 0;
			              string  myVariable[100];
			              string myVariableValue[100];
			              string myVariableType[100];
			
					      int i=6;
					
					      while(myString[i]!=';')
					        {
					           if(TextCheck>=2)
					                 break;
					           if(myString[i]=='"')
					             {
					                TextCheck++;
						            i++;
						            continue;
					             }
					           if( TextCheck == 1)
					             {					      
						            myText += myString[i];
					             }
					          i++;
					         }
			
			             TextCheck = 0;	
                         i=0;				 
                         while(myString[i]!=';')
					       {
					          if(myString[i]=='"')
					             {
					               TextCheck++;
						           i++;
						           continue;
					             }
					          if( TextCheck >= 2 && myString[i]!=' ')
					             {
                                    if(fcom==true)               					   
						                myVariableList += myString[i];
					                if(myString[i]==',')
					                    fcom = true;
					             }
					          i++;
					       }
					
     					myVariableList[myVariableList.length()-1]='\0';

	     		        i=0; int j=0;
		    	        bool tmpflag = false;
			    
         				while(myVariableList[i]!='\0')
		        		    {
				        	   tmpflag = true;
				               if(myVariableList[i]!= ' ' && myVariableList[i]!= ',')
						          {
						              myVariable[j] += myVariableList[i];
						          }
						       if(myVariableList[i]== ',') 
					           	  {
						              j++;
					              }
						       i++;
				            }
				   
				          int totalVariable;
				          if(tmpflag == false)
				            {
				               totalVariable = 0;
				            }
				          else
				           {
				              totalVariable = j+1;
				           }
				   
				          int varCount = 0;
				          for(i=0;i<totalVariable;i++)
				             {
					            for(int k=1;k<=tokenCount;k++)
	                               {
							          if(myVariable[i]==token_No[k].token_Name)
								        {
								          myVariableValue[i] = token_No[k].token_Value;
								          myVariableType[i] = token_No[k].token_Type;
								          varCount++;
								        }
                                   }
					         }
	
				   
	    			   int  FScounter = 0;
		    		   int variableTrack=0;
				
				   for(i=0;i<myText.length();i++)
				     {
					 
					     if(myText[i]=='%')
						   {	
						       i++;					  
						       if(myText[i]=='d')
							    {
								   if(myVariableType[variableTrack]=="Identifier: Integer")
								    {
									  myResultText+=myVariableValue[variableTrack];
									  variableTrack++;
									  FScounter++;
									}
									else
									{
									  printf("Wrong Formate Specifier!\n");
									  exit(0);
									}
								}
								else if(myText[i]=='f')
								{
								    if(myVariableType[variableTrack]=="Identifier: Floating Point")
								     {
									  myResultText+=myVariableValue[variableTrack];
									  variableTrack++;
									  FScounter++;
									 }
									else
									 {
									  printf("Wrong Formate Specifier!\n");
									  exit(0);
									 }
								 }
								else if(myText[i]=='c')
								{		
								   if(myVariableType[variableTrack]=="Identifier: Character")
								    {
									  myResultText+=myVariableValue[variableTrack];
									  variableTrack++;
									  FScounter++;
									}
									else
									{
									  printf("Wrong Formate Specifier!\n");
									  exit(0);
									}
								}
								else if(myText[i]=='l')
								{
								    i++;
								           if(myText[i]=='d')
							                  {
											     
								                 if(myVariableType[variableTrack]=="Identifier: Long Integer")
								                   {
												     
									                 myResultText+=myVariableValue[variableTrack];
									                 variableTrack++;
													 FScounter++;
									               }
												  else
									                {
									                  printf("Wrong Formate Specifier!\n");
									                  exit(0);
									                }
								              }
								          else if(myText[i]=='f')
								             {
											    if(myVariableType[variableTrack]=="Identifier: Double Floating Point")
								                   {
												   
									                 myResultText+=myVariableValue[variableTrack];
									                 variableTrack++;
													 FScounter++;
									               }
												   else
									                {
									                  printf("Wrong Formate Specifier!\n");
									                  exit(0);
									                }
								             }
								          else
										    {
											   printf("Wrong Formate Specifier!\n");
									           exit(0);
										    }
								
								}
								else
								{
								    printf("Wrong Formate Specifier!\n");
								    exit(0);
								}
						   }
						   
						   
						   else
						       {
							   
							      if(myText[i]=='\\')
								   {
								     i++;
									   if(myText[i]=='n')
									     myResultText+="\n";
									   else if(myText[i]=='t')
									     myResultText+="	"; 
									  else
                                         myResultText+=myText[i];									  
									}
							      else
							         myResultText+=myText[i];
						       }
						   
					 
					 
					 }
					 
					 	
					  if(FScounter != totalVariable)
				        {
				         printf("Number of Format Specifiers or Variables are not Equal!\n");
						 exit(0);
				        }
					 
					      tokenCount++;
			              token_No[tokenCount].token_Name=myText;
			              token_No[tokenCount].token_Type="Constant: String";
			              token_No[tokenCount].token_Value=myResultText;
            }
    break;



/* Line 1455 of yacc.c  */
#line 2492 "y.tab.c"
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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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



/* Line 1675 of yacc.c  */
#line 804 "try.y"




void yyerror(char *s) {
    fprintf(stderr, "%s\n", s);
		
	exit(0);	
}



void identifer_type(string str)
{

                                 if(typeCheck["int"]==0 && str == "int")
		                             {
			                          typeCheck["int"]=6;
			                          tokenCount++;
			                          token_No[tokenCount].token_Name="int";
			                          token_No[tokenCount].token_Type="keyword: Datatype";
			                          token_No[tokenCount].token_Value="NA";
									 }
								else if(typeCheck["long"]==0 && str == "long")
		                             {
			                          typeCheck["long"]=6;
			                          tokenCount++;
			                          token_No[tokenCount].token_Name="long";
			                          token_No[tokenCount].token_Type="keyword: Datatype";
			                          token_No[tokenCount].token_Value="NA";
									 }
								else if(typeCheck["float"]==0 && str == "float")
		                             {
			                          typeCheck["float"]=6;
			                          tokenCount++;
			                          token_No[tokenCount].token_Name="float";
			                          token_No[tokenCount].token_Type="keyword: Datatype";
			                          token_No[tokenCount].token_Value="NA";
									 }
                               else if(typeCheck["double"]==0 && str == "double")
		                             {
			                          typeCheck["double"]=6;
			                          tokenCount++;
			                          token_No[tokenCount].token_Name="double";
			                          token_No[tokenCount].token_Type="keyword: Datatype";
			                          token_No[tokenCount].token_Value="NA";
									 }
                               else if(typeCheck["char"]==0 && str == "char")
		                             {
			                          typeCheck["char"]=6;
			                          tokenCount++;
			                          token_No[tokenCount].token_Name="char";
			                          token_No[tokenCount].token_Type="keyword: Datatype";
			                          token_No[tokenCount].token_Value="NA";
									 }
                               else if(typeCheck["printf"]==0 && str == "printf")
		                             {
			                          typeCheck["printf"]=6;
			                          tokenCount++;
			                          token_No[tokenCount].token_Name="printf";
			                          token_No[tokenCount].token_Type="Keyword: Function";
			                          token_No[tokenCount].token_Value="NA";
			                         }
                              else if(typeCheck["return"]==0 && str == "return")
		                            {
			                         typeCheck["return"]=6;
			                         tokenCount++;
			                         token_No[tokenCount].token_Name="return";
			                         token_No[tokenCount].token_Type="Keyword";
			                         token_No[tokenCount].token_Value="NA";
			                        }	
                              else if(typeCheck["main"]==0 && str == "main")
		                           { 
			                        typeCheck["main"]=6;
			                        tokenCount++;
			                        token_No[tokenCount].token_Name="main";
			                        token_No[tokenCount].token_Type="Identifier: Function";
			                        token_No[tokenCount].token_Value="NA";
			                       }
		                      else if(typeCheck["void"]==0 && str == "void")
			                  	   {
					                typeCheck["void"]=6;
			 		                tokenCount++;
			 		                token_No[tokenCount].token_Name="void";
			 		                token_No[tokenCount].token_Type="Keyword: Datatype";
			 		                token_No[tokenCount].token_Value="NA";
			  		               }								   
    
}




void insert_tokentable(string str1)
{
                                  if(str1=="int")
								  {
								     var_pos = 1;
								      if(value_flag==true)
									    {
                                          std::stringstream ss;
                                          ss << int_value;
                                          ss >> var_value;
									    }
									  else
									      var_value = "NA";
									  
									 var_type = "Identifier: Integer";
								  }
								  else if(str1=="long")
								  {
								   var_pos = 2;
                                    if(value_flag==true)
									    {
                                          std::stringstream ss;
                                          ss << int_value;
                                          ss >> var_value;
									    }
									  else
									      var_value = "NA";
									 var_type = "Identifier: Long Integer";
								   }
								  else if(str1=="float")
								   {
								    var_pos = 3;
                                    if(value_flag==true)
									    {
                                          std::stringstream ss;
                                          ss << float_value;
                                          ss >> var_value;
									    }
									  else
									      var_value = "NA";
									var_type = "Identifier: Floating Point";
								   }
								   else if(str1=="double")
								   {
								    var_pos = 4;
								    if(value_flag==true)
									    {
                                          std::stringstream ss;
                                          ss << float_value;
                                          ss >> var_value;
									    }
									  else
									      var_value = "NA";
									 var_type = "Identifier: Double Floating Point";
								   }
								   else if(str1=="char")
								   {
								   var_pos = 5;
								   if(value_flag==true)
									    {
                                          std::stringstream ss;
                                          ss << char_value;
                                          ss >> var_value;
									    }
									  else
									      var_value = "NA";
									var_type = "Identifier: Character";
								   }

                                    
								  if(typeCheck[var_name]==0)
		                             {
			                          typeCheck[var_name]=var_pos;
			                          tokenCount++;
									  token_No[tokenCount].token_Name = var_name;
			                          token_No[tokenCount].token_Type=var_type;
			                          token_No[tokenCount].token_Value=var_value;

									 }
									 
									else
									 {
									    cout<<"Duplicate Variable! \n"<<"Variable Name: "<<var_name<<endl;
										
										exit(0);
									 }

}




void   update_tokentable(string str2)
{
                               if(str2=="int" || str2 == "long")
								  {
								     std::stringstream ss;
                                     ss << int_value;
                                     ss >> var_value;  
								  }
							   else if(str2=="float" || str2=="double")
								  {
								     std::stringstream ss;
                                     ss << float_value;
                                     ss >> var_value;   
								  }
							  else if(str2=="char")
								   {
								     std::stringstream ss;
                                     ss << char_value;
                                     ss >> var_value;  
								   }

                     for(int k=1; k<=tokenCount; k++)
	                       {						  
						      if(var_name == token_No[k].token_Name )
							    {								 
						   		 token_No[k].token_Value = var_value;								
								 break;
								}
						   }
}


string get_variable_value(string myvar)
{
    string myvalue="";
                   for(int k=1; k<=tokenCount; k++)
	                       {						  
						      if( myvar == token_No[k].token_Name )
							    {								 
						   		 myvalue=token_No[k].token_Value;								
								 break;
								}
						   }
				
                    if(myvalue == "NA")
                      {
					     cout<<"In Variable Expression a NULL valued variable!\n"<<"Variable Name: "<<myvar<<endl;
						 exit(0);
                       }

              return myvalue;					   
}


int main()
{
    typeCheck["auto"] = typeCheck["break"] = typeCheck["case"] = typeCheck["char"] = typeCheck["const"] = typeCheck["continue"] = typeCheck["default"] = typeCheck["do"] = typeCheck["double"] = typeCheck["else"] = typeCheck["enum"] = typeCheck["extern"] = typeCheck["float"] = typeCheck["for"] = typeCheck["goto"] = typeCheck["if"] = typeCheck["int"] = typeCheck["long"] = typeCheck["register"] = typeCheck["return"] = typeCheck["short"] = typeCheck["signed"] = typeCheck["sizeof"] = typeCheck["static"] = typeCheck["struct"] = typeCheck["switch"] = typeCheck["typedef"] = typeCheck["union"] = typeCheck["unsigned"] = typeCheck["void"] = typeCheck["volatile"] = typeCheck["while"] = typeCheck["main"] = typeCheck["printf"] = 0;

    yyin = fopen("input.txt","r");

    yyparse();
	   
	printf("\nToken\tName\t\t\tType\t\t\tValue\n\n");
	for(int i=1;i<=tokenCount;i++)
	{
      cout<<" "<<i<<"\t"<<token_No[i].token_Name<<"\t\t"<<token_No[i].token_Type<<"\t\t"<<token_No[i].token_Value<<"\n"<<endl;
	}  
	   
	fclose(yyin);
	
	getchar();
	
	return 0;
}
