
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
#define YYLSP_NEEDED 1



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 11 "parser.y"


/* Just like lex, the text within this first region delimited by %{ and %}
 * is assumed to be C/C++ code and will be copied verbatim to the y.tab.c
 * file ahead of the definitions of the yyparse() function. Add other header
 * file inclusions or C++ variable declarations/prototypes that are needed
 * by your code here.
 */
#include "scanner.h" // for yylex
#include "parser.h"
#include "errors.h"
#include <stdio.h>

void yyerror(const char *msg); // standard error-handling routine



/* Line 189 of yacc.c  */
#line 91 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
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
     T_Void = 258,
     T_Bool = 259,
     T_Int = 260,
     T_Float = 261,
     T_LessEqual = 262,
     T_GreaterEqual = 263,
     T_EQ = 264,
     T_NE = 265,
     T_LeftAngle = 266,
     T_RightAngle = 267,
     T_And = 268,
     T_Or = 269,
     T_Equal = 270,
     T_MulAssign = 271,
     T_DivAssign = 272,
     T_AddAssign = 273,
     T_SubAssign = 274,
     T_While = 275,
     T_For = 276,
     T_If = 277,
     T_Else = 278,
     T_Return = 279,
     T_Break = 280,
     T_Const = 281,
     T_Uniform = 282,
     T_Layout = 283,
     T_Continue = 284,
     T_Do = 285,
     T_Inc = 286,
     T_Dec = 287,
     T_Switch = 288,
     T_Case = 289,
     T_Default = 290,
     T_In = 291,
     T_Out = 292,
     T_InOut = 293,
     T_Mat2 = 294,
     T_Mat3 = 295,
     T_Mat4 = 296,
     T_Vec2 = 297,
     T_Vec3 = 298,
     T_Vec4 = 299,
     T_Ivec2 = 300,
     T_Ivec3 = 301,
     T_Ivec4 = 302,
     T_Bvec2 = 303,
     T_Bvec3 = 304,
     T_Bvec4 = 305,
     T_Uint = 306,
     T_Uvec2 = 307,
     T_Uvec3 = 308,
     T_Uvec4 = 309,
     T_Struct = 310,
     T_Semicolon = 311,
     T_Dot = 312,
     T_Colon = 313,
     T_Question = 314,
     T_Comma = 315,
     T_Dash = 316,
     T_Plus = 317,
     T_Star = 318,
     T_Slash = 319,
     T_LeftParen = 320,
     T_RightParen = 321,
     T_LeftBracket = 322,
     T_RightBracket = 323,
     T_LeftBrace = 324,
     T_RightBrace = 325,
     T_Identifier = 326,
     T_IntConstant = 327,
     T_FloatConstant = 328,
     T_BoolConstant = 329
   };
#endif
/* Tokens.  */
#define T_Void 258
#define T_Bool 259
#define T_Int 260
#define T_Float 261
#define T_LessEqual 262
#define T_GreaterEqual 263
#define T_EQ 264
#define T_NE 265
#define T_LeftAngle 266
#define T_RightAngle 267
#define T_And 268
#define T_Or 269
#define T_Equal 270
#define T_MulAssign 271
#define T_DivAssign 272
#define T_AddAssign 273
#define T_SubAssign 274
#define T_While 275
#define T_For 276
#define T_If 277
#define T_Else 278
#define T_Return 279
#define T_Break 280
#define T_Const 281
#define T_Uniform 282
#define T_Layout 283
#define T_Continue 284
#define T_Do 285
#define T_Inc 286
#define T_Dec 287
#define T_Switch 288
#define T_Case 289
#define T_Default 290
#define T_In 291
#define T_Out 292
#define T_InOut 293
#define T_Mat2 294
#define T_Mat3 295
#define T_Mat4 296
#define T_Vec2 297
#define T_Vec3 298
#define T_Vec4 299
#define T_Ivec2 300
#define T_Ivec3 301
#define T_Ivec4 302
#define T_Bvec2 303
#define T_Bvec3 304
#define T_Bvec4 305
#define T_Uint 306
#define T_Uvec2 307
#define T_Uvec3 308
#define T_Uvec4 309
#define T_Struct 310
#define T_Semicolon 311
#define T_Dot 312
#define T_Colon 313
#define T_Question 314
#define T_Comma 315
#define T_Dash 316
#define T_Plus 317
#define T_Star 318
#define T_Slash 319
#define T_LeftParen 320
#define T_RightParen 321
#define T_LeftBracket 322
#define T_RightBracket 323
#define T_LeftBrace 324
#define T_RightBrace 325
#define T_Identifier 326
#define T_IntConstant 327
#define T_FloatConstant 328
#define T_BoolConstant 329




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 42 "parser.y"

    int integerConstant;
    bool boolConstant;
    float floatConstant;
    char identifier[MaxIdentLen+1]; // +1 for terminating null
    Decl *decl;
		VarDecl *varDecl;
		FnDecl *fnDecl;
    List<Decl*> *declList;
		List<VarDecl*> *vDeclList;
		List<Stmt*> *stmtList;

    Identifier *id;
    Expr *exp;
		Call *call;
		Stmt *stmt;
		Type *type;
		TypeQualifier *typeQual;
		Operator *op;



/* Line 214 of yacc.c  */
#line 298 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 323 "y.tab.c"

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
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

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
#define YYFINAL  37
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   743

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  75
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  145
/* YYNRULES -- Number of states.  */
#define YYNSTATES  236

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   329

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    16,    18,
      22,    24,    29,    31,    33,    37,    40,    43,    46,    49,
      52,    54,    57,    61,    64,    65,    67,    70,    73,    76,
      78,    80,    82,    86,    90,    92,    96,   100,   102,   106,
     110,   114,   118,   120,   124,   128,   130,   134,   136,   140,
     142,   148,   150,   154,   156,   158,   160,   162,   164,   167,
     169,   172,   175,   177,   179,   182,   186,   190,   195,   198,
     201,   205,   209,   214,   216,   218,   220,   222,   224,   227,
     231,   233,   235,   237,   239,   241,   243,   245,   247,   249,
     251,   253,   255,   257,   259,   261,   263,   265,   267,   269,
     271,   273,   275,   277,   279,   281,   283,   285,   287,   289,
     291,   293,   295,   297,   299,   302,   306,   309,   313,   317,
     322,   324,   327,   329,   332,   334,   337,   343,   351,   353,
     358,   364,   372,   376,   379,   385,   393,   400,   402,   404,
     406,   409,   413,   416,   419,   423
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      76,     0,    -1,    77,    -1,    77,    96,    -1,    96,    -1,
      71,    -1,    72,    -1,    73,    -1,    74,    -1,    65,    94,
      66,    -1,    78,    -1,    79,    67,    94,    68,    -1,    80,
      -1,    79,    -1,    79,    57,    71,    -1,    79,    31,    -1,
      79,    32,    -1,    82,    66,    -1,    81,    66,    -1,    83,
       3,    -1,    83,    -1,    83,    94,    -1,    82,    60,    94,
      -1,    84,    65,    -1,    -1,    79,    -1,    31,    85,    -1,
      32,    85,    -1,    86,    85,    -1,    62,    -1,    61,    -1,
      85,    -1,    87,    63,    85,    -1,    87,    64,    85,    -1,
      87,    -1,    88,    62,    87,    -1,    88,    61,    87,    -1,
      88,    -1,    89,    11,    88,    -1,    89,    12,    88,    -1,
      89,     7,    88,    -1,    89,     8,    88,    -1,    89,    -1,
      90,     9,    89,    -1,    90,    10,    89,    -1,    90,    -1,
      91,    13,    90,    -1,    91,    -1,    92,    14,    91,    -1,
      92,    -1,    92,    59,    94,    58,    94,    -1,    93,    -1,
      85,    95,    94,    -1,    15,    -1,    16,    -1,    17,    -1,
      18,    -1,    19,    -1,    97,    56,    -1,   126,    -1,   102,
      56,    -1,    98,    66,    -1,   100,    -1,    99,    -1,   100,
     101,    -1,    99,    60,   101,    -1,   104,    71,    65,    -1,
     103,   104,    71,    65,    -1,   104,    71,    -1,   104,    71,
      -1,   103,   104,    71,    -1,   104,    71,   105,    -1,   104,
      71,    15,    94,    -1,    26,    -1,    36,    -1,    37,    -1,
      27,    -1,   106,    -1,   106,   105,    -1,    67,    93,    68,
      -1,     3,    -1,     6,    -1,     5,    -1,    51,    -1,     4,
      -1,    42,    -1,    43,    -1,    44,    -1,    48,    -1,    49,
      -1,    50,    -1,    45,    -1,    46,    -1,    47,    -1,    52,
      -1,    53,    -1,    54,    -1,    39,    -1,    40,    -1,    41,
      -1,    94,    -1,   112,    -1,   111,    -1,   113,    -1,   111,
      -1,   113,    -1,   111,    -1,   107,    -1,   116,    -1,   117,
      -1,   119,    -1,   120,    -1,   121,    -1,   125,    -1,    69,
      70,    -1,    69,   115,    70,    -1,    69,    70,    -1,    69,
     115,    70,    -1,    69,   114,    70,    -1,    69,   114,   115,
      70,    -1,   102,    -1,   114,   102,    -1,   108,    -1,   115,
     108,    -1,    56,    -1,    94,    56,    -1,    22,    65,    94,
      66,   110,    -1,    22,    65,    94,    66,   110,    23,   110,
      -1,    94,    -1,   104,    71,    15,    94,    -1,   103,   104,
      71,    15,    94,    -1,    33,    65,    94,    66,    69,   115,
      70,    -1,    34,    94,    58,    -1,    35,    58,    -1,    20,
      65,   118,    66,   109,    -1,    30,   110,    20,    65,    94,
      66,    56,    -1,    21,    65,   122,   124,    66,   109,    -1,
     116,    -1,   107,    -1,   118,    -1,   123,    56,    -1,   123,
      56,    94,    -1,    25,    56,    -1,    24,    56,    -1,    24,
      94,    56,    -1,    97,   113,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   164,   164,   176,   177,   199,   203,   204,   205,   206,
     210,   211,   212,   213,   214,   217,   221,   228,   229,   233,
     234,   238,   239,   243,   246,   251,   252,   256,   260,   266,
     267,   271,   272,   276,   283,   284,   288,   295,   296,   300,
     304,   308,   315,   316,   320,   327,   328,   335,   336,   343,
     344,   350,   351,   357,   358,   359,   360,   361,   365,   366,
     367,   371,   375,   376,   380,   381,   385,   389,   396,   403,
     407,   411,   421,   432,   433,   434,   435,   439,   440,   446,
     450,   451,   452,   453,   454,   455,   456,   457,   458,   459,
     460,   461,   462,   463,   464,   465,   466,   467,   468,   469,
     473,   477,   478,   482,   483,   487,   488,   492,   493,   494,
     495,   496,   497,   498,   502,   505,   517,   520,   523,   527,
     534,   535,   538,   539,   543,   544,   548,   551,   557,   558,
     559,   563,   567,   568,   572,   575,   578,   583,   584,   588,
     593,   594,   598,   599,   600,   614
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "T_Void", "T_Bool", "T_Int", "T_Float",
  "T_LessEqual", "T_GreaterEqual", "T_EQ", "T_NE", "T_LeftAngle",
  "T_RightAngle", "T_And", "T_Or", "T_Equal", "T_MulAssign", "T_DivAssign",
  "T_AddAssign", "T_SubAssign", "T_While", "T_For", "T_If", "T_Else",
  "T_Return", "T_Break", "T_Const", "T_Uniform", "T_Layout", "T_Continue",
  "T_Do", "T_Inc", "T_Dec", "T_Switch", "T_Case", "T_Default", "T_In",
  "T_Out", "T_InOut", "T_Mat2", "T_Mat3", "T_Mat4", "T_Vec2", "T_Vec3",
  "T_Vec4", "T_Ivec2", "T_Ivec3", "T_Ivec4", "T_Bvec2", "T_Bvec3",
  "T_Bvec4", "T_Uint", "T_Uvec2", "T_Uvec3", "T_Uvec4", "T_Struct",
  "T_Semicolon", "T_Dot", "T_Colon", "T_Question", "T_Comma", "T_Dash",
  "T_Plus", "T_Star", "T_Slash", "T_LeftParen", "T_RightParen",
  "T_LeftBracket", "T_RightBracket", "T_LeftBrace", "T_RightBrace",
  "T_Identifier", "T_IntConstant", "T_FloatConstant", "T_BoolConstant",
  "$accept", "Program", "DeclList", "primary_expression",
  "postfix_expression", "function_call_generic",
  "function_call_header_no_parameters",
  "function_call_header_with_parameters", "function_call_header",
  "function_identifier", "unary_expression", "unary_operator",
  "multiplicative_expression", "additive_expression",
  "relational_expression", "equality_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "declaration",
  "function_prototype", "function_declarator",
  "function_header_with_parameters", "function_header",
  "parameter_declaration", "single_declaration", "type_qualifier",
  "type_specifier", "array_specifier", "type_specifier_nonarray",
  "declaration_statement", "statement", "statement_no_new_scope",
  "statement_with_scope", "simple_statement",
  "compound_statement_with_scope", "compound_statement_no_new_scope",
  "var_decl_list", "statement_list", "expression_statement",
  "selection_statement", "condition", "switch_statement", "case_label",
  "iteration_statement", "for_init_statement", "conditionopt",
  "for_rest_statement", "jump_statement", "function_definition", 0
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    75,    76,    77,    77,    78,    78,    78,    78,    78,
      79,    79,    79,    79,    79,    79,    79,    80,    80,    81,
      81,    82,    82,    83,    84,    85,    85,    85,    85,    86,
      86,    87,    87,    87,    88,    88,    88,    89,    89,    89,
      89,    89,    90,    90,    90,    91,    91,    92,    92,    93,
      93,    94,    94,    95,    95,    95,    95,    95,    96,    96,
      96,    97,    98,    98,    99,    99,   100,   100,   101,   102,
     102,   102,   102,   103,   103,   103,   103,   104,   104,   105,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     107,   108,   108,   109,   109,   110,   110,   111,   111,   111,
     111,   111,   111,   111,   112,   112,   113,   113,   113,   113,
     114,   114,   115,   115,   116,   116,   117,   117,   118,   118,
     118,   119,   120,   120,   121,   121,   121,   122,   122,   123,
     124,   124,   125,   125,   125,   126
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     3,
       1,     4,     1,     1,     3,     2,     2,     2,     2,     2,
       1,     2,     3,     2,     0,     1,     2,     2,     2,     1,
       1,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       5,     1,     3,     1,     1,     1,     1,     1,     2,     1,
       2,     2,     1,     1,     2,     3,     3,     4,     2,     2,
       3,     3,     4,     1,     1,     1,     1,     1,     2,     3,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     3,     2,     3,     3,     4,
       1,     2,     1,     2,     1,     2,     5,     7,     1,     4,
       5,     7,     3,     2,     5,     7,     6,     1,     1,     1,
       2,     3,     2,     2,     3,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    80,    84,    82,    81,    73,    76,    74,    75,    97,
      98,    99,    85,    86,    87,    91,    92,    93,    88,    89,
      90,    83,    94,    95,    96,     0,     2,     4,     0,     0,
      63,    62,     0,     0,     0,    77,    59,     1,     3,    58,
       0,   145,    61,     0,    64,     0,    60,     0,    69,     0,
      78,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   124,    30,    29,     0,     0,   116,     5,     6,
       7,     8,    10,    13,    12,     0,     0,    20,     0,    31,
       0,    34,    37,    42,    45,    47,    49,    51,   100,   120,
       0,     0,   107,   122,   102,   101,     0,     0,   108,   109,
     110,   111,   112,   113,    65,    68,    70,     0,    66,    71,
      31,     0,     0,     0,     0,   143,     0,   142,     0,   106,
     105,    26,    27,     0,     0,   133,     0,   114,     0,    15,
      16,     0,     0,    18,     0,    17,    19,    21,    23,    53,
      54,    55,    56,    57,     0,    28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   125,
       0,    69,   118,   121,     0,   117,   123,    67,    72,    79,
     128,     0,     0,     0,   138,   137,     0,     0,   144,     0,
       0,   132,     9,   115,    14,     0,    22,    52,    32,    33,
      36,    35,    40,    41,    38,    39,    43,    44,    46,    48,
       0,    70,   119,     0,     0,     0,   139,     0,     0,     0,
       0,     0,    11,     0,     0,     0,   134,   104,   103,   140,
       0,   126,     0,     0,    50,     0,   129,   141,   136,     0,
       0,     0,   130,   127,   135,   131
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    25,    26,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
     144,    27,    28,    29,    30,    31,    44,    32,    33,    34,
     109,    35,    92,    93,   216,   118,    94,    95,   120,    96,
      97,    98,    99,   173,   100,   101,   102,   176,   207,   208,
     103,    36
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -200
static const yytype_int16 yypact[] =
{
     618,  -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,
    -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,
    -200,  -200,  -200,  -200,  -200,    29,   618,  -200,   -34,   -32,
     -21,   670,   -20,   670,    -8,    -3,  -200,  -200,  -200,  -200,
     175,  -200,  -200,   670,  -200,    -6,  -200,     4,     3,   555,
    -200,     9,    11,    13,    71,    23,   523,   555,   555,    16,
     555,    26,  -200,  -200,  -200,   555,   356,  -200,  -200,  -200,
    -200,  -200,  -200,   -17,  -200,    19,   -22,    25,    18,   153,
     555,   -40,   -30,    34,    17,    76,   -10,  -200,    35,  -200,
     670,    22,  -200,  -200,  -200,  -200,   247,   375,  -200,  -200,
    -200,  -200,  -200,  -200,  -200,  -200,    30,   555,  -200,  -200,
    -200,    32,   301,   669,   555,  -200,    38,  -200,    81,  -200,
    -200,  -200,  -200,   555,    46,  -200,    39,  -200,   430,  -200,
    -200,    36,   555,  -200,   555,  -200,  -200,  -200,  -200,  -200,
    -200,  -200,  -200,  -200,   555,  -200,   555,   555,   555,   555,
     555,   555,   555,   555,   555,   555,   555,   555,   555,  -200,
      37,     2,  -200,  -200,   449,  -200,  -200,  -200,  -200,  -200,
    -200,   670,    50,    56,  -200,  -200,   301,    57,  -200,    60,
      62,  -200,  -200,  -200,  -200,    58,  -200,  -200,  -200,  -200,
     -40,   -40,   -30,   -30,   -30,   -30,    34,    34,    17,    76,
      72,  -200,  -200,    63,   114,   523,  -200,    75,    69,   523,
     555,    68,  -200,   555,   123,   555,  -200,  -200,  -200,   555,
     523,   116,    80,   578,  -200,   555,  -200,  -200,  -200,   523,
      92,   504,  -200,  -200,  -200,  -200
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,  -200,
     -37,  -200,  -101,   -99,   -96,    -7,    -4,  -200,   102,   -52,
    -200,   129,  -200,  -200,  -200,  -200,   113,   -29,   -35,   -24,
     122,  -200,    49,   -91,   -61,  -199,   -55,  -200,   -28,  -200,
     -63,    51,  -200,    -1,  -200,  -200,  -200,  -200,  -200,  -200,
    -200,  -200
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
      41,   119,   116,   128,   157,    90,   166,    45,   124,    47,
     221,    89,   110,   126,   129,   130,    91,   107,   107,    45,
     121,   122,    39,   146,   147,   137,   154,   155,   136,    37,
     233,   148,   149,   164,    42,    40,    46,   166,   134,    43,
     131,   150,   151,   145,   135,   152,   153,   190,   191,   158,
     132,   192,   193,   194,   195,   168,    57,    58,   196,   197,
     170,    90,   177,    48,    49,   105,   160,   163,   108,    49,
      49,   180,    91,   166,   112,   106,   113,   171,   114,   117,
     185,   123,   186,   138,   125,   133,    63,    64,   172,   156,
      65,   159,   187,   161,   178,   167,    68,    69,    70,    71,
     169,   179,    57,    58,   181,   182,   200,   184,   201,   188,
     189,   110,   110,   110,   110,   110,   110,   110,   110,   110,
     110,   204,   205,   209,   170,   210,   212,   115,   211,   215,
     213,   219,    63,    64,   214,   220,    65,   223,   225,   229,
     166,   171,    68,    69,    70,    71,   230,   203,   234,   198,
     217,   111,   172,   199,   119,    38,   104,    50,   222,   228,
     231,   224,   174,   226,   175,   217,     0,   227,   139,   140,
     141,   142,   143,   232,   119,   206,     0,   218,     1,     2,
       3,     4,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,   218,     0,     0,    51,    52,    53,     0,    54,
      55,     5,     6,     0,     0,    56,    57,    58,    59,    60,
      61,     7,     8,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,    62,     0,     0,     0,     0,    63,    64,     0,     0,
      65,     0,     0,     0,    66,    67,    68,    69,    70,    71,
       1,     2,     3,     4,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    51,    52,    53,
       0,    54,    55,     5,     6,     0,     0,    56,    57,    58,
      59,    60,    61,     7,     8,     0,     9,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      23,    24,     0,    62,     1,     2,     3,     4,    63,    64,
       0,     0,    65,     0,     0,     0,    66,   162,    68,    69,
      70,    71,     0,     0,     0,     0,     0,     5,     6,     0,
       0,     0,    57,    58,     0,     0,     0,     7,     8,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     0,     0,     0,     0,
       0,     0,    63,    64,     0,     0,    65,     0,     0,     0,
       0,     0,    68,    69,    70,    71,    51,    52,    53,     0,
      54,    55,     0,     0,     0,     0,    56,    57,    58,    59,
      60,    61,     0,     0,     0,    51,    52,    53,     0,    54,
      55,     0,     0,     0,     0,    56,    57,    58,    59,    60,
      61,     0,    62,     0,     0,     0,     0,    63,    64,     0,
       0,    65,     0,     0,     0,    66,   127,    68,    69,    70,
      71,    62,     0,     0,     0,     0,    63,    64,     0,     0,
      65,     0,     0,     0,    66,   165,    68,    69,    70,    71,
      51,    52,    53,     0,    54,    55,     0,     0,     0,     0,
      56,    57,    58,    59,    60,    61,     0,     0,     0,    51,
      52,    53,     0,    54,    55,     0,     0,     0,     0,    56,
      57,    58,    59,    60,    61,     0,    62,     0,     0,     0,
       0,    63,    64,     0,     0,    65,     0,     0,     0,    66,
     183,    68,    69,    70,    71,    62,     0,     0,     0,     0,
      63,    64,     0,     0,    65,     0,     0,     0,    66,   202,
      68,    69,    70,    71,    51,    52,    53,     0,    54,    55,
       0,     0,     0,     0,    56,    57,    58,    59,    60,    61,
       0,     0,     0,    51,    52,    53,     0,    54,    55,     0,
       0,     0,     0,    56,    57,    58,    59,    60,    61,     0,
      62,     0,     0,     0,     0,    63,    64,     0,     0,    65,
       0,     0,     0,    66,   235,    68,    69,    70,    71,    62,
       0,     0,     0,     0,    63,    64,    57,    58,    65,     0,
       0,     0,    40,     0,    68,    69,    70,    71,    51,    52,
      53,     0,    54,    55,     0,     0,     0,     0,    56,    57,
      58,    59,    60,    61,     0,     0,    63,    64,     0,     0,
      65,     1,     2,     3,     4,     0,    68,    69,    70,    71,
       0,     0,     0,     0,    62,     0,     0,     0,     0,    63,
      64,     0,     0,    65,     5,     6,     0,    66,     0,    68,
      69,    70,    71,     0,     7,     8,     0,     9,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    20,    21,
      22,    23,    24,     1,     2,     3,     4,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      57,    58,     0,     0,     0,     0,     0,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    62,     0,     0,     0,     0,
      63,    64,     0,     0,    65,     0,     0,     0,     0,     0,
      68,    69,    70,    71
};

static const yytype_int16 yycheck[] =
{
      28,    56,    54,    66,    14,    40,    97,    31,    60,    33,
     209,    40,    49,    65,    31,    32,    40,    15,    15,    43,
      57,    58,    56,    63,    64,    77,     9,    10,     3,     0,
     229,    61,    62,    96,    66,    69,    56,   128,    60,    60,
      57,     7,     8,    80,    66,    11,    12,   148,   149,    59,
      67,   150,   151,   152,   153,   107,    31,    32,   154,   155,
     112,    96,   114,    71,    67,    71,    90,    96,    65,    67,
      67,   123,    96,   164,    65,    71,    65,   112,    65,    56,
     132,    65,   134,    65,    58,    66,    61,    62,   112,    13,
      65,    56,   144,    71,    56,    65,    71,    72,    73,    74,
      68,    20,    31,    32,    58,    66,   158,    71,    71,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,    71,    66,    66,   176,    65,    68,    56,    66,    15,
      58,    56,    61,    62,    71,    66,    65,    69,    15,    23,
     231,   176,    71,    72,    73,    74,    66,   171,    56,   156,
     205,    49,   176,   157,   209,    26,    43,    35,   210,   220,
     223,   213,   113,   215,   113,   220,    -1,   219,    15,    16,
      17,    18,    19,   225,   229,   176,    -1,   205,     3,     4,
       5,     6,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,   220,    -1,    -1,    20,    21,    22,    -1,    24,
      25,    26,    27,    -1,    -1,    30,    31,    32,    33,    34,
      35,    36,    37,    -1,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    56,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,
      65,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
       3,     4,     5,     6,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,
      -1,    24,    25,    26,    27,    -1,    -1,    30,    31,    32,
      33,    34,    35,    36,    37,    -1,    39,    40,    41,    42,
      43,    44,    45,    46,    47,    48,    49,    50,    51,    52,
      53,    54,    -1,    56,     3,     4,     5,     6,    61,    62,
      -1,    -1,    65,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    74,    -1,    -1,    -1,    -1,    -1,    26,    27,    -1,
      -1,    -1,    31,    32,    -1,    -1,    -1,    36,    37,    -1,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    -1,    -1,    -1,    -1,
      -1,    -1,    61,    62,    -1,    -1,    65,    -1,    -1,    -1,
      -1,    -1,    71,    72,    73,    74,    20,    21,    22,    -1,
      24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      34,    35,    -1,    -1,    -1,    20,    21,    22,    -1,    24,
      25,    -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,
      35,    -1,    56,    -1,    -1,    -1,    -1,    61,    62,    -1,
      -1,    65,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,    56,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,
      65,    -1,    -1,    -1,    69,    70,    71,    72,    73,    74,
      20,    21,    22,    -1,    24,    25,    -1,    -1,    -1,    -1,
      30,    31,    32,    33,    34,    35,    -1,    -1,    -1,    20,
      21,    22,    -1,    24,    25,    -1,    -1,    -1,    -1,    30,
      31,    32,    33,    34,    35,    -1,    56,    -1,    -1,    -1,
      -1,    61,    62,    -1,    -1,    65,    -1,    -1,    -1,    69,
      70,    71,    72,    73,    74,    56,    -1,    -1,    -1,    -1,
      61,    62,    -1,    -1,    65,    -1,    -1,    -1,    69,    70,
      71,    72,    73,    74,    20,    21,    22,    -1,    24,    25,
      -1,    -1,    -1,    -1,    30,    31,    32,    33,    34,    35,
      -1,    -1,    -1,    20,    21,    22,    -1,    24,    25,    -1,
      -1,    -1,    -1,    30,    31,    32,    33,    34,    35,    -1,
      56,    -1,    -1,    -1,    -1,    61,    62,    -1,    -1,    65,
      -1,    -1,    -1,    69,    70,    71,    72,    73,    74,    56,
      -1,    -1,    -1,    -1,    61,    62,    31,    32,    65,    -1,
      -1,    -1,    69,    -1,    71,    72,    73,    74,    20,    21,
      22,    -1,    24,    25,    -1,    -1,    -1,    -1,    30,    31,
      32,    33,    34,    35,    -1,    -1,    61,    62,    -1,    -1,
      65,     3,     4,     5,     6,    -1,    71,    72,    73,    74,
      -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    61,
      62,    -1,    -1,    65,    26,    27,    -1,    69,    -1,    71,
      72,    73,    74,    -1,    36,    37,    -1,    39,    40,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      31,    32,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    56,    -1,    -1,    -1,    -1,
      61,    62,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,
      71,    72,    73,    74
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,    26,    27,    36,    37,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    76,    77,    96,    97,    98,
      99,   100,   102,   103,   104,   106,   126,     0,    96,    56,
      69,   113,    66,    60,   101,   104,    56,   104,    71,    67,
     105,    20,    21,    22,    24,    25,    30,    31,    32,    33,
      34,    35,    56,    61,    62,    65,    69,    70,    71,    72,
      73,    74,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,   102,
     103,   104,   107,   108,   111,   112,   114,   115,   116,   117,
     119,   120,   121,   125,   101,    71,    71,    15,    65,   105,
      85,    93,    65,    65,    65,    56,    94,    56,   110,   111,
     113,    85,    85,    65,    94,    58,    94,    70,   115,    31,
      32,    57,    67,    66,    60,    66,     3,    94,    65,    15,
      16,    17,    18,    19,    95,    85,    63,    64,    61,    62,
       7,     8,    11,    12,     9,    10,    13,    14,    59,    56,
     104,    71,    70,   102,   115,    70,   108,    65,    94,    68,
      94,   103,   104,   118,   107,   116,   122,    94,    56,    20,
      94,    58,    66,    70,    71,    94,    94,    94,    85,    85,
      87,    87,    88,    88,    88,    88,    89,    89,    90,    91,
      94,    71,    70,   104,    71,    66,   118,   123,   124,    66,
      65,    66,    68,    58,    71,    15,   109,   111,   113,    56,
      66,   110,    94,    69,    94,    15,    94,    94,   109,    23,
      66,   115,    94,   110,    56,    70
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
		  Type, Value, Location); \
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
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
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
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
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
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
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
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
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
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

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

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

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
       `yyls': related to locations.

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

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[2];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
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
  yylsp = yyls;

#if YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

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
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
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
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

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
  *++yylsp = yylloc;
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

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 164 "parser.y"
    {
    (yylsp[(1) - (1)]);
    /* pp2: The @1 is needed to convince yacc to set up yylloc. You can remove
     * it once you have other uses of @n */
    Program *program = new Program((yyvsp[(1) - (1)].declList));
    // If no errors, advance to next phase
    if (ReportError::NumErrors() == 0)
      program->Print(0);
  }
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 176 "parser.y"
    { ((yyval.declList)=(yyvsp[(1) - (2)].declList))->Append((yyvsp[(2) - (2)].decl)); }
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 177 "parser.y"
    { ((yyval.declList) = new List<Decl*>)->Append((yyvsp[(1) - (1)].decl)); }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 199 "parser.y"
    { 
    Identifier *id = new Identifier((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].identifier));
    (yyval.exp) = new VarExpr((yylsp[(1) - (1)]), id); 
  }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 203 "parser.y"
    { (yyval.exp) = new IntConstant((yylsp[(1) - (1)]),(yyvsp[(1) - (1)].integerConstant)); }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 204 "parser.y"
    { (yyval.exp) = new FloatConstant((yylsp[(1) - (1)]),(yyvsp[(1) - (1)].floatConstant)); }
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 205 "parser.y"
    { (yyval.exp) = new BoolConstant((yylsp[(1) - (1)]),(yyvsp[(1) - (1)].boolConstant)); }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 206 "parser.y"
    { (yyval.exp) = (yyvsp[(2) - (3)].exp); }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 210 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 212 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].call); }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 213 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 214 "parser.y"
    {
	  (yyval.exp) = new FieldAccess((yyvsp[(1) - (3)].exp), new Identifier((yylsp[(3) - (3)]),(yyvsp[(3) - (3)].identifier)));
	}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 217 "parser.y"
    { 
	  Operator *op = new Operator((yylsp[(2) - (2)]), "++");
	  (yyval.exp) = new PostfixExpr((yyvsp[(1) - (2)].exp), op);
	}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 221 "parser.y"
    {
	  Operator *op = new Operator((yylsp[(2) - (2)]), "--");
		(yyval.exp) = new PostfixExpr((yyvsp[(1) - (2)].exp), op);
	}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 228 "parser.y"
    {}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 229 "parser.y"
    {}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 234 "parser.y"
    { (yyval.call) = (yyvsp[(1) - (1)].call); }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 243 "parser.y"
    {}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 251 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 252 "parser.y"
    { 
	  Operator *op = new Operator((yylsp[(1) - (2)]), "++");
	  (yyval.exp) = new ArithmeticExpr(op, (yyvsp[(2) - (2)].exp));
	}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 256 "parser.y"
    {
	  Operator *op = new Operator((yylsp[(1) - (2)]), "--");
	  (yyval.exp) = new ArithmeticExpr(op, (yyvsp[(2) - (2)].exp));
	}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 260 "parser.y"
    {
	  (yyval.exp) = new ArithmeticExpr((yyvsp[(1) - (2)].op), (yyvsp[(2) - (2)].exp));
	}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 266 "parser.y"
    { (yyval.op) = new Operator((yylsp[(1) - (1)]), "+"); }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 267 "parser.y"
    { (yyval.op) = new Operator((yylsp[(1) - (1)]), "-"); }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 271 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 272 "parser.y"
    {
	  Operator *op = new Operator((yylsp[(2) - (3)]), "*");
		(yyval.exp) = new ArithmeticExpr((yyvsp[(1) - (3)].exp), op, (yyvsp[(3) - (3)].exp));
	}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 276 "parser.y"
    {
	  Operator *op = new Operator((yylsp[(2) - (3)]), "/");
		(yyval.exp) = new ArithmeticExpr((yyvsp[(1) - (3)].exp), op, (yyvsp[(3) - (3)].exp));
	}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 283 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 284 "parser.y"
    {
	  Operator *op = new Operator((yylsp[(2) - (3)]), "+");
		(yyval.exp) = new ArithmeticExpr((yyvsp[(1) - (3)].exp), op, (yyvsp[(3) - (3)].exp));
	}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 288 "parser.y"
    {
	  Operator *op = new Operator((yylsp[(2) - (3)]), "-");
		(yyval.exp) = new ArithmeticExpr((yyvsp[(1) - (3)].exp), op, (yyvsp[(3) - (3)].exp));
	}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 295 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 296 "parser.y"
    {
	  Operator *op = new Operator((yylsp[(2) - (3)]), "<");
		(yyval.exp) = new RelationalExpr((yyvsp[(1) - (3)].exp), op, (yyvsp[(3) - (3)].exp));
	}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 300 "parser.y"
    {
	  Operator *op = new Operator((yylsp[(2) - (3)]), ">");
		(yyval.exp) = new RelationalExpr((yyvsp[(1) - (3)].exp), op, (yyvsp[(3) - (3)].exp));
	}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 304 "parser.y"
    {
	  Operator *op = new Operator((yylsp[(2) - (3)]), "<=");
		(yyval.exp) = new RelationalExpr((yyvsp[(1) - (3)].exp), op, (yyvsp[(3) - (3)].exp));
	}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 308 "parser.y"
    {
	  Operator *op = new Operator((yylsp[(2) - (3)]), ">=");
		(yyval.exp) = new RelationalExpr((yyvsp[(1) - (3)].exp), op, (yyvsp[(3) - (3)].exp));
	}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 315 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 316 "parser.y"
    {
	  Operator *op = new Operator((yylsp[(2) - (3)]), "==");
		(yyval.exp) = new EqualityExpr((yyvsp[(1) - (3)].exp), op, (yyvsp[(3) - (3)].exp));
	}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 320 "parser.y"
    {
	  Operator *op = new Operator((yylsp[(2) - (3)]), "!=");
		(yyval.exp) = new EqualityExpr((yyvsp[(1) - (3)].exp), op, (yyvsp[(3) - (3)].exp));
	}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 327 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 328 "parser.y"
    {
	  Operator *op = new Operator((yylsp[(2) - (3)]), "&&");
		(yyval.exp) = new LogicalExpr((yyvsp[(1) - (3)].exp), op, (yyvsp[(3) - (3)].exp));
	}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 335 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 336 "parser.y"
    {
	  Operator *op = new Operator((yylsp[(2) - (3)]), "||");
	  (yyval.exp) = new LogicalExpr((yyvsp[(1) - (3)].exp), op, (yyvsp[(3) - (3)].exp));
	}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 343 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 344 "parser.y"
    {
	  (yyval.exp) = new SelectionExpr((yyvsp[(1) - (5)].exp), (yyvsp[(3) - (5)].exp), (yyvsp[(5) - (5)].exp));
	}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 350 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 351 "parser.y"
    {
    (yyval.exp) = new AssignExpr((yyvsp[(1) - (3)].exp), (yyvsp[(2) - (3)].op), (yyvsp[(3) - (3)].exp));
  }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 357 "parser.y"
    { (yyval.op) = new Operator((yylsp[(1) - (1)]), "="); }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 358 "parser.y"
    { (yyval.op) = new Operator((yylsp[(1) - (1)]), "*="); }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 359 "parser.y"
    { (yyval.op) = new Operator((yylsp[(1) - (1)]), "/="); }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 360 "parser.y"
    { (yyval.op) = new Operator((yylsp[(1) - (1)]), "+="); }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 361 "parser.y"
    { (yyval.op) = new Operator((yylsp[(1) - (1)]), "-="); }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 365 "parser.y"
    { (yyval.decl) = (yyvsp[(1) - (2)].fnDecl);	}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 366 "parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].fnDecl); }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 367 "parser.y"
    { (yyval.decl) = (yyvsp[(1) - (2)].varDecl); }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 371 "parser.y"
    { (yyval.fnDecl) = (yyvsp[(1) - (2)].fnDecl); }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 375 "parser.y"
    { (yyval.fnDecl) = (yyvsp[(1) - (1)].fnDecl); }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 385 "parser.y"
    {
	  Identifier *id = new Identifier((yylsp[(2) - (3)]), (yyvsp[(2) - (3)].identifier));
		(yyval.fnDecl) = new FnDecl(id, (yyvsp[(1) - (3)].type), new List<VarDecl*>);
	}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 389 "parser.y"
    {
	  Identifier *id = new Identifier((yylsp[(3) - (4)]), (yyvsp[(3) - (4)].identifier));
	  (yyval.fnDecl) = new FnDecl(id, (yyvsp[(2) - (4)].type), (yyvsp[(1) - (4)].typeQual), new List<VarDecl*>);
	}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 396 "parser.y"
    {
	  Identifier *id = new Identifier((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].identifier));
		(yyval.decl) = new VarDecl(id, (yyvsp[(1) - (2)].type));
	}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 403 "parser.y"
    {
    Identifier *id = new Identifier((yylsp[(2) - (2)]),(yyvsp[(2) - (2)].identifier));
    (yyval.varDecl) = new VarDecl(id,(yyvsp[(1) - (2)].type));
  }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 407 "parser.y"
    {
    Identifier *id = new Identifier((yylsp[(3) - (3)]), (yyvsp[(3) - (3)].identifier));
    (yyval.varDecl) = new VarDecl(id, (yyvsp[(2) - (3)].type), (yyvsp[(1) - (3)].typeQual));
  }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 411 "parser.y"
    {
    Identifier *id = new Identifier((yylsp[(2) - (3)]), (yyvsp[(2) - (3)].identifier));
    ArrayType *type = new ArrayType((yylsp[(1) - (3)]), (yyvsp[(1) - (3)].type));
    (yyval.varDecl) = new VarDecl(id, type);
  }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 421 "parser.y"
    {
    /* original was assignment_expression instead of primary_expression */ 
    Identifier *id = new Identifier ((yylsp[(2) - (4)]), (yyvsp[(2) - (4)].identifier));
    (yyval.varDecl) = new VarDecl (id, (yyvsp[(1) - (4)].type), (yyvsp[(4) - (4)].exp));
  }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 432 "parser.y"
    { (yyval.typeQual) = TypeQualifier::constTypeQualifier; }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 433 "parser.y"
    { (yyval.typeQual) = TypeQualifier::inTypeQualifier; }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 434 "parser.y"
    { (yyval.typeQual) = TypeQualifier::outTypeQualifier; }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 435 "parser.y"
    { (yyval.typeQual) = TypeQualifier::uniformTypeQualifier; }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 439 "parser.y"
    { (yyval.type) = (yyvsp[(1) - (1)].type); }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 440 "parser.y"
    {
	  (yyval.type) = new ArrayType((yylsp[(1) - (2)]), (yyvsp[(1) - (2)].type));
	}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 446 "parser.y"
    { (yyval.exp) = (yyvsp[(2) - (3)].exp); }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 450 "parser.y"
    { (yyval.type) = Type::voidType; }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 451 "parser.y"
    { (yyval.type) = Type::floatType; }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 452 "parser.y"
    { (yyval.type) = Type::intType; }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 453 "parser.y"
    { (yyval.type) = Type::uintType; }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 454 "parser.y"
    { (yyval.type) = Type::boolType; }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 455 "parser.y"
    { (yyval.type) = Type::vec2Type; }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 456 "parser.y"
    { (yyval.type) = Type::vec3Type; }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 457 "parser.y"
    { (yyval.type) = Type::vec4Type; }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 458 "parser.y"
    { (yyval.type) = Type::bvec2Type; }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 459 "parser.y"
    { (yyval.type) = Type::bvec3Type; }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 460 "parser.y"
    { (yyval.type) = Type::bvec4Type; }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 461 "parser.y"
    { (yyval.type) = Type::ivec2Type; }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 462 "parser.y"
    { (yyval.type) = Type::ivec3Type; }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 463 "parser.y"
    { (yyval.type) = Type::ivec4Type; }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 464 "parser.y"
    { (yyval.type) = Type::uvec2Type; }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 465 "parser.y"
    { (yyval.type) = Type::uvec3Type; }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 466 "parser.y"
    { (yyval.type) = Type::uvec4Type; }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 467 "parser.y"
    { (yyval.type) = Type::mat2Type; }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 468 "parser.y"
    { (yyval.type) = Type::mat3Type; }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 469 "parser.y"
    { (yyval.type) = Type::mat4Type; }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 473 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].exp); }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 477 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 478 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 482 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 483 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 487 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); }
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 488 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 492 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 493 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 494 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 495 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 496 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].exp); }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 497 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 498 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 502 "parser.y"
    {
	  (yyval.stmt) = new StmtBlock(new List<VarDecl*>, new List<Stmt*>);
	}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 517 "parser.y"
    { 
    (yyval.stmt) = new StmtBlock(new List<VarDecl*>, new List<Stmt*>); 
  }
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 520 "parser.y"
    {
	  (yyval.stmt) = new StmtBlock(new List<VarDecl*>, (yyvsp[(2) - (3)].stmtList));
	}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 523 "parser.y"
    {
	  printf("comp_stmt_no_scope");
	  (yyval.stmt) = new StmtBlock((yyvsp[(2) - (3)].vDeclList), new List<Stmt*>);
	}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 527 "parser.y"
    {
	  printf("comp_stmt_no_scope1");
	  (yyval.stmt) = new StmtBlock((yyvsp[(2) - (4)].vDeclList), (yyvsp[(3) - (4)].stmtList));
	}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 534 "parser.y"
    { ((yyval.vDeclList) = new List<VarDecl*>)->Append((yyvsp[(1) - (1)].varDecl)); }
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 535 "parser.y"
    { ((yyval.vDeclList) = (yyvsp[(1) - (2)].vDeclList))->Append((yyvsp[(2) - (2)].varDecl)); }
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 538 "parser.y"
    { ((yyval.stmtList) = new List<Stmt*>)->Append((yyvsp[(1) - (1)].stmt)); }
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 539 "parser.y"
    { ((yyval.stmtList)=(yyvsp[(1) - (2)].stmtList))->Append((yyvsp[(2) - (2)].stmt)); }
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 548 "parser.y"
    {
	  //$$ = new ConditionalStmt($3, $5);
	}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 551 "parser.y"
    {
	  (yyval.stmt) = new IfStmt((yyvsp[(3) - (7)].exp), (yyvsp[(5) - (7)].stmt), (yyvsp[(7) - (7)].stmt));
	}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 557 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 558 "parser.y"
    {}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 572 "parser.y"
    {
	  (yyval.stmt) = new WhileStmt((yyvsp[(3) - (5)].exp), (yyvsp[(5) - (5)].stmt));
	}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 575 "parser.y"
    {
	  (yyval.stmt) = new DoWhileStmt((yyvsp[(2) - (7)].stmt), (yyvsp[(5) - (7)].exp));
	}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 583 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); }
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 584 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); }
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 588 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 598 "parser.y"
    { (yyval.stmt) = new BreakStmt((yylsp[(1) - (2)])); }
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 599 "parser.y"
    { (yyval.stmt) = new ReturnStmt((yylsp[(1) - (2)]), new EmptyExpr); }
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 600 "parser.y"
    { (yyval.stmt) = new ReturnStmt((yylsp[(1) - (3)]), (yyvsp[(2) - (3)].exp)); }
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 614 "parser.y"
    {
	  printf("func_def");
	  ((yyval.fnDecl)=(yyvsp[(1) - (2)].fnDecl))->SetFunctionBody((yyvsp[(2) - (2)].stmt));
	}
    break;



/* Line 1455 of yacc.c  */
#line 2904 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

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

  yyerror_range[0] = yylloc;

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
		      yytoken, &yylval, &yylloc);
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

  yyerror_range[0] = yylsp[1-yylen];
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

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

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
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
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
#line 620 "parser.y"


/* The closing %% above marks the end of the Rules section and the beginning
 * of the User Subroutines section. All text from here to the end of the
 * file is copied verbatim to the end of the generated y.tab.c file.
 * This section is where you put definitions of helper functions.
 */

/* Function: InitParser
 * --------------------
 * This function will be called before any calls to yyparse().  It is designed
 * to give you an opportunity to do anything that must be done to initialize
 * the parser (set global variables, configure starting state, etc.). One
 * thing it already does for you is assign the value of the global variable
 * yydebug that controls whether yacc prints debugging information about
 * parser actions (shift/reduce) and contents of state stack during parser.
 * If set to false, no information is printed. Setting it to true will give
 * you a running trail that might be helpful when debugging your parser.
 * Please be sure the variable is set to false when submitting your final
 * version.
 */
void InitParser()
{
   PrintDebug("parser", "Initializing parser");
   yydebug = false;
}

