
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
    List<Expr*> *expList;
    List<Case*> *caseList;

    Identifier *id;
    Expr *exp;
    Call *call;
    Stmt *stmt;
    Type *type;
    TypeQualifier *typeQual;
    Operator *op;
    Case *caseLabel;
    Default *def;



/* Line 214 of yacc.c  */
#line 302 "y.tab.c"
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
#line 327 "y.tab.c"

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
#define YYLAST   500

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  75
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  143
/* YYNRULES -- Number of states.  */
#define YYNSTATES  246

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
      22,    24,    29,    31,    35,    38,    41,    44,    47,    50,
      52,    56,    59,    61,    65,    67,    70,    73,    76,    78,
      80,    82,    86,    90,    92,    96,   100,   102,   106,   110,
     114,   118,   120,   124,   128,   130,   134,   136,   140,   142,
     148,   150,   154,   156,   158,   160,   162,   164,   166,   169,
     171,   173,   176,   178,   180,   185,   191,   195,   200,   203,
     208,   212,   217,   222,   228,   234,   241,   243,   245,   247,
     249,   251,   254,   258,   260,   262,   264,   266,   268,   270,
     272,   274,   276,   278,   280,   282,   284,   286,   288,   290,
     292,   294,   296,   298,   300,   302,   304,   306,   308,   310,
     312,   314,   316,   319,   324,   327,   328,   330,   333,   334,
     336,   339,   345,   353,   355,   364,   372,   375,   377,   382,
     386,   392,   400,   408,   410,   412,   414,   417,   420,   423,
     427,   430,   435,   440
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      76,     0,    -1,    77,    -1,    77,    96,    -1,    96,    -1,
      71,    -1,    72,    -1,    73,    -1,    74,    -1,    65,    94,
      66,    -1,    78,    -1,    79,    67,    94,    68,    -1,    80,
      -1,    79,    57,    71,    -1,    79,    31,    -1,    79,    32,
      -1,    82,    66,    -1,    81,    66,    -1,    83,     3,    -1,
      83,    -1,    71,    65,    84,    -1,    71,    65,    -1,    94,
      -1,    84,    60,    94,    -1,    79,    -1,    31,    85,    -1,
      32,    85,    -1,    86,    85,    -1,    62,    -1,    61,    -1,
      85,    -1,    87,    63,    85,    -1,    87,    64,    85,    -1,
      87,    -1,    88,    62,    87,    -1,    88,    61,    87,    -1,
      88,    -1,    89,    11,    88,    -1,    89,    12,    88,    -1,
      89,     7,    88,    -1,    89,     8,    88,    -1,    89,    -1,
      90,     9,    89,    -1,    90,    10,    89,    -1,    90,    -1,
      91,    13,    90,    -1,    91,    -1,    92,    14,    91,    -1,
      92,    -1,    92,    59,    94,    58,    94,    -1,    93,    -1,
      85,    95,    94,    -1,   126,    -1,    15,    -1,    16,    -1,
      17,    -1,    18,    -1,    19,    -1,    97,    56,    -1,   125,
      -1,   102,    -1,    98,    66,    -1,   100,    -1,    99,    -1,
     104,    71,    65,   101,    -1,   103,   104,    71,    65,   101,
      -1,   104,    71,    65,    -1,   103,   104,    71,    65,    -1,
     104,    71,    -1,   101,    60,   104,    71,    -1,   104,    71,
      56,    -1,   103,   104,    71,    56,    -1,   104,    71,   105,
      56,    -1,   103,   104,    71,   105,    56,    -1,   104,    71,
      15,    94,    56,    -1,   103,   104,    71,    15,    94,    56,
      -1,    26,    -1,    36,    -1,    37,    -1,    27,    -1,   106,
      -1,   106,   105,    -1,    67,    93,    68,    -1,     3,    -1,
       6,    -1,     5,    -1,    51,    -1,     4,    -1,    42,    -1,
      43,    -1,    44,    -1,    48,    -1,    49,    -1,    50,    -1,
      45,    -1,    46,    -1,    47,    -1,    52,    -1,    53,    -1,
      54,    -1,    39,    -1,    40,    -1,    41,    -1,    94,    -1,
     110,    -1,   109,    -1,   107,    -1,   113,    -1,   114,    -1,
     116,    -1,   120,    -1,   124,    -1,    69,    70,    -1,    69,
     111,   112,    70,    -1,   111,   102,    -1,    -1,   108,    -1,
     112,   108,    -1,    -1,    56,    -1,    94,    56,    -1,    22,
      65,    94,    66,   108,    -1,    22,    65,    94,    66,   108,
      23,   108,    -1,    94,    -1,    33,    65,    94,    66,    69,
     117,   119,    70,    -1,    33,    65,    94,    66,    69,   117,
      70,    -1,   117,   118,    -1,   118,    -1,    34,    94,    58,
     112,    -1,    35,    58,   112,    -1,    20,    65,   115,    66,
     108,    -1,    30,   108,    20,    65,    94,    66,    56,    -1,
      21,    65,   121,   123,    94,    66,   108,    -1,   113,    -1,
     107,    -1,   115,    -1,   122,    56,    -1,    25,    56,    -1,
      24,    56,    -1,    24,    94,    56,    -1,    97,   110,    -1,
      42,    65,    84,    66,    -1,    43,    65,    84,    66,    -1,
      44,    65,    84,    66,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   163,   163,   175,   176,   180,   184,   185,   186,   187,
     191,   192,   195,   196,   199,   203,   210,   211,   215,   216,
     220,   227,   234,   235,   239,   240,   244,   248,   254,   255,
     259,   260,   264,   271,   272,   276,   283,   284,   288,   292,
     296,   303,   304,   308,   315,   316,   323,   324,   331,   332,
     338,   339,   342,   346,   347,   348,   349,   350,   354,   355,
     356,   360,   364,   365,   369,   373,   380,   384,   391,   398,
     406,   410,   414,   419,   424,   428,   435,   436,   437,   438,
     442,   445,   451,   455,   456,   457,   458,   459,   460,   461,
     462,   463,   464,   465,   466,   467,   468,   469,   470,   471,
     472,   473,   474,   478,   482,   483,   487,   488,   489,   490,
     491,   492,   496,   505,   511,   514,   518,   519,   520,   524,
     525,   529,   532,   538,   542,   545,   551,   552,   556,   560,
     564,   567,   570,   576,   577,   581,   585,   589,   590,   591,
     595,   602,   607,   611
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
  "expression_list", "unary_expression", "unary_operator",
  "multiplicative_expression", "additive_expression",
  "relational_expression", "equality_expression", "logical_and_expression",
  "logical_or_expression", "conditional_expression",
  "assignment_expression", "assignment_operator", "declaration",
  "function_prototype", "function_declarator",
  "function_header_with_parameters", "function_header", "parameter_list",
  "single_declaration", "type_qualifier", "type_specifier",
  "array_specifier", "type_specifier_nonarray", "declaration_statement",
  "statement", "simple_statement", "compound_statement", "var_decl_list",
  "statement_list", "expression_statement", "selection_statement",
  "condition", "switch_statement", "case_list", "case_label", "default",
  "iteration_statement", "for_init_statement", "conditionopt",
  "for_cond_statement", "jump_statement", "function_definition",
  "vector_constructor", 0
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
      79,    79,    79,    79,    79,    79,    80,    80,    81,    81,
      82,    83,    84,    84,    85,    85,    85,    85,    86,    86,
      87,    87,    87,    88,    88,    88,    89,    89,    89,    89,
      89,    90,    90,    90,    91,    91,    92,    92,    93,    93,
      94,    94,    94,    95,    95,    95,    95,    95,    96,    96,
      96,    97,    98,    98,    99,    99,   100,   100,   101,   101,
     102,   102,   102,   102,   102,   102,   103,   103,   103,   103,
     104,   104,   105,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   106,   106,   106,   106,   106,   106,   106,
     106,   106,   106,   107,   108,   108,   109,   109,   109,   109,
     109,   109,   110,   110,   111,   111,   112,   112,   112,   113,
     113,   114,   114,   115,   116,   116,   117,   117,   118,   119,
     120,   120,   120,   121,   121,   122,   123,   124,   124,   124,
     125,   126,   126,   126
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     3,
       1,     4,     1,     3,     2,     2,     2,     2,     2,     1,
       3,     2,     1,     3,     1,     2,     2,     2,     1,     1,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     5,
       1,     3,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     2,     1,     1,     4,     5,     3,     4,     2,     4,
       3,     4,     4,     5,     5,     6,     1,     1,     1,     1,
       1,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     4,     2,     0,     1,     2,     0,     1,
       2,     5,     7,     1,     8,     7,     2,     1,     4,     3,
       5,     7,     7,     1,     1,     1,     2,     2,     2,     3,
       2,     4,     4,     4
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    83,    87,    85,    84,    76,    79,    77,    78,   100,
     101,   102,    88,    89,    90,    94,    95,    96,    91,    92,
      93,    86,    97,    98,    99,     0,     2,     4,     0,     0,
      63,    62,    60,     0,     0,    80,    59,     1,     3,    58,
     115,   140,    61,     0,     0,     0,    81,   112,   118,     0,
       0,    70,    66,     0,     0,     0,    29,    28,     0,     5,
       6,     7,     8,    10,    24,    12,     0,     0,    19,    30,
       0,    33,    36,    41,    44,    46,    48,     0,     0,     0,
       0,     0,     0,     0,     0,    88,    89,    90,   119,    30,
      50,   103,   114,     0,     0,   106,   116,   105,   104,     0,
     107,   108,   109,   110,   111,    52,     0,    71,    67,     0,
       0,     0,     0,     0,    64,     0,    72,    25,    26,     0,
      21,    14,    15,     0,     0,    17,    16,    18,    27,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    82,     0,     0,     0,   138,     0,   137,     0,
       0,     0,     0,     0,    53,    54,    55,    56,    57,     0,
     120,     0,     0,   113,   117,     0,    65,    73,    74,     0,
      68,     9,    20,    22,    13,     0,    31,    32,    35,    34,
      39,    40,    37,    38,    42,    43,    45,    47,     0,   123,
       0,   134,   133,     0,     0,   139,     0,     0,     0,     0,
       0,    51,     0,    75,     0,     0,    11,     0,     0,   135,
       0,     0,     0,     0,     0,   141,   142,   143,    69,    23,
      49,   130,   136,     0,   121,     0,     0,     0,     0,     0,
       0,     0,   127,   132,   122,   131,     0,     0,   125,   126,
       0,   118,   118,   124,   128,   129
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    25,    26,    63,    64,    65,    66,    67,    68,   172,
      89,    70,    71,    72,    73,    74,    75,    76,    90,    91,
     159,    27,    28,    29,    30,    31,   114,    32,    33,    34,
      53,    35,    95,    96,    97,    98,    48,    99,   100,   101,
     190,   102,   231,   232,   240,   103,   193,   210,   211,   104,
      36,   105
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -120
static const yytype_int16 yypact[] =
{
     325,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,  -120,  -120,     4,   325,  -120,   -46,   -59,
    -120,  -120,  -120,   350,   -57,   -35,  -120,  -120,  -120,  -120,
     -45,  -120,  -120,   -41,   -10,     7,  -120,  -120,   166,    -6,
     426,  -120,   350,    -7,     7,     7,  -120,  -120,   426,   -28,
    -120,  -120,  -120,  -120,    -3,  -120,   -32,   -13,    57,  -120,
       7,   -21,     5,    33,    66,    58,     6,    22,     8,    27,
      29,   374,    50,   276,    59,    60,    61,    62,  -120,    67,
    -120,    73,  -120,   350,    63,  -120,  -120,  -120,  -120,   221,
    -120,  -120,  -120,  -120,  -120,  -120,   426,  -120,   350,    74,
      60,    61,    62,    75,    76,    64,  -120,  -120,  -120,    71,
     426,  -120,  -120,    68,   426,  -120,  -120,  -120,  -120,     7,
       7,     7,     7,     7,     7,     7,     7,     7,     7,     7,
       7,   426,  -120,   426,   400,   426,  -120,    77,  -120,   120,
     426,   426,   426,   426,  -120,  -120,  -120,  -120,  -120,   426,
    -120,    70,    -9,  -120,  -120,    86,    76,  -120,  -120,   350,
    -120,  -120,    84,  -120,  -120,    78,  -120,  -120,   -21,   -21,
       5,     5,     5,     5,    33,    33,    66,    58,    87,  -120,
      83,  -120,  -120,   426,    85,  -120,    88,    90,   -44,   -42,
     -33,  -120,    -4,  -120,    79,   426,  -120,   426,   276,  -120,
      96,   426,   276,   426,    89,  -120,  -120,  -120,  -120,  -120,
    -120,  -120,  -120,    93,   131,    94,   128,   276,   276,   110,
     426,   -22,  -120,  -120,  -120,  -120,   109,   115,  -120,  -120,
     104,   276,   276,  -120,   276,   276
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,  -120,   -64,
     -19,  -120,   -27,   -37,   -30,    36,    37,  -120,   133,   -50,
    -120,   150,  -120,  -120,  -120,  -120,    81,   134,   135,   -31,
     -34,  -120,    35,   -80,  -120,   153,  -120,  -119,    40,  -120,
      -8,  -120,  -120,   -36,  -120,  -120,  -120,  -120,  -120,  -120,
    -120,  -120
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
     113,    46,    43,   149,    37,    50,    50,    42,   119,   106,
      39,   106,   230,   237,    44,   109,   205,    94,   205,   164,
     140,   115,   215,    40,   216,    47,    69,   205,   121,   122,
      49,   147,    45,   217,   125,   117,   118,   120,    54,    55,
     133,   134,   129,   130,   135,   136,    51,    51,   238,   116,
     107,   128,   107,   126,   123,    52,   165,    45,    45,   108,
     127,    45,   161,    45,   124,   141,   131,   132,    56,    57,
     173,   139,    58,   143,   175,   137,   138,   115,    59,    60,
      61,    62,   154,   155,   156,   157,   158,   198,   199,   200,
     142,   188,   144,   189,   145,   194,   180,   181,   182,   183,
     197,   173,   173,   173,   178,   179,   148,   184,   185,   201,
     176,   177,    69,    69,    69,    69,    69,    69,    69,    69,
      69,    69,   244,   245,   150,   151,   152,   153,   221,   160,
     167,   168,   224,   195,   162,   170,   169,   171,   204,   174,
     196,   202,   203,   189,   205,   207,   206,   233,   234,   208,
     218,   212,   222,   213,   228,   219,   214,   220,   226,   227,
     229,   223,   230,   225,   164,   164,   235,   241,   109,     1,
       2,     3,     4,   242,   243,   186,    38,   187,    77,   191,
     236,    41,    92,    93,   192,   209,    78,    79,    80,   166,
      81,    82,     5,     6,     0,   239,    83,    54,    55,    84,
       0,     0,     7,     8,     0,     9,    10,    11,    85,    86,
      87,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,     0,    88,     0,     0,     0,     0,    56,    57,     0,
       0,    58,     0,     0,     0,    40,     0,    59,    60,    61,
      62,    78,    79,    80,     0,    81,    82,     0,     0,     0,
       0,    83,    54,    55,    84,     0,     0,     0,     0,     0,
       0,     0,     0,   110,   111,   112,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    88,     0,     0,
       0,     0,    56,    57,     0,     0,    58,     0,     0,     0,
      40,   163,    59,    60,    61,    62,    78,    79,    80,     0,
      81,    82,     0,     0,     0,     0,    83,    54,    55,    84,
       0,     0,     0,     0,     0,     0,     0,     0,   110,   111,
     112,     0,     0,     0,     0,     0,     0,     0,     1,     2,
       3,     4,    88,     0,     0,     0,     0,    56,    57,     0,
       0,    58,     0,     0,     0,    40,     0,    59,    60,    61,
      62,     5,     6,     1,     2,     3,     4,     0,     0,     0,
       0,     7,     8,     0,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     9,
      10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
      20,    21,    22,    23,    24,    54,    55,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   110,   111,   112,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     146,    54,    55,     0,     0,    56,    57,     0,     0,    58,
       0,     0,   110,   111,   112,    59,    60,    61,    62,     0,
       0,     0,     0,     0,     0,     0,    88,    54,    55,     0,
       0,    56,    57,     0,     0,    58,     0,     0,   110,   111,
     112,    59,    60,    61,    62,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    56,    57,     0,
       0,    58,     0,     0,     0,     0,     0,    59,    60,    61,
      62
};

static const yytype_int16 yycheck[] =
{
      50,    35,    33,    83,     0,    15,    15,    66,    58,    15,
      56,    15,    34,    35,    71,    49,    60,    48,    60,    99,
      14,    52,    66,    69,    66,    70,    45,    60,    31,    32,
      71,    81,    67,    66,    66,    54,    55,    65,    31,    32,
       7,     8,    63,    64,    11,    12,    56,    56,    70,    56,
      56,    70,    56,    66,    57,    65,   106,    67,    67,    65,
       3,    67,    93,    67,    67,    59,    61,    62,    61,    62,
     120,    13,    65,    65,   124,     9,    10,   108,    71,    72,
      73,    74,    15,    16,    17,    18,    19,   151,   152,   153,
      68,   141,    65,   143,    65,   145,   133,   134,   135,   136,
     150,   151,   152,   153,   131,   132,    56,   137,   138,   159,
     129,   130,   131,   132,   133,   134,   135,   136,   137,   138,
     139,   140,   241,   242,    65,    65,    65,    65,   208,    56,
      56,    56,   212,    56,    71,    71,    60,    66,   169,    71,
      20,    71,    56,   193,    60,    58,    68,   227,   228,    66,
      71,    66,    56,    65,    23,   205,    66,   207,    69,    66,
      66,   211,    34,   213,   244,   245,    56,    58,   202,     3,
       4,     5,     6,    58,    70,   139,    26,   140,    45,   144,
     230,    28,    48,    48,   144,   193,    20,    21,    22,   108,
      24,    25,    26,    27,    -1,   231,    30,    31,    32,    33,
      -1,    -1,    36,    37,    -1,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    -1,    56,    -1,    -1,    -1,    -1,    61,    62,    -1,
      -1,    65,    -1,    -1,    -1,    69,    -1,    71,    72,    73,
      74,    20,    21,    22,    -1,    24,    25,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    42,    43,    44,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    61,    62,    -1,    -1,    65,    -1,    -1,    -1,
      69,    70,    71,    72,    73,    74,    20,    21,    22,    -1,
      24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    42,    43,
      44,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,     4,
       5,     6,    56,    -1,    -1,    -1,    -1,    61,    62,    -1,
      -1,    65,    -1,    -1,    -1,    69,    -1,    71,    72,    73,
      74,    26,    27,     3,     4,     5,     6,    -1,    -1,    -1,
      -1,    36,    37,    -1,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    31,    32,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    42,    43,    44,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      56,    31,    32,    -1,    -1,    61,    62,    -1,    -1,    65,
      -1,    -1,    42,    43,    44,    71,    72,    73,    74,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    56,    31,    32,    -1,
      -1,    61,    62,    -1,    -1,    65,    -1,    -1,    42,    43,
      44,    71,    72,    73,    74,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    61,    62,    -1,
      -1,    65,    -1,    -1,    -1,    -1,    -1,    71,    72,    73,
      74
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,    26,    27,    36,    37,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    76,    77,    96,    97,    98,
      99,   100,   102,   103,   104,   106,   125,     0,    96,    56,
      69,   110,    66,   104,    71,    67,   105,    70,   111,    71,
      15,    56,    65,   105,    31,    32,    61,    62,    65,    71,
      72,    73,    74,    78,    79,    80,    81,    82,    83,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    20,    21,
      22,    24,    25,    30,    33,    42,    43,    44,    56,    85,
      93,    94,   102,   103,   104,   107,   108,   109,   110,   112,
     113,   114,   116,   120,   124,   126,    15,    56,    65,   105,
      42,    43,    44,    94,   101,   104,    56,    85,    85,    94,
      65,    31,    32,    57,    67,    66,    66,     3,    85,    63,
      64,    61,    62,     7,     8,    11,    12,     9,    10,    13,
      14,    59,    68,    65,    65,    65,    56,    94,    56,   108,
      65,    65,    65,    65,    15,    16,    17,    18,    19,    95,
      56,   104,    71,    70,   108,    94,   101,    56,    56,    60,
      71,    66,    84,    94,    71,    94,    85,    85,    87,    87,
      88,    88,    88,    88,    89,    89,    90,    91,    94,    94,
     115,   107,   113,   121,    94,    56,    20,    94,    84,    84,
      84,    94,    71,    56,   104,    60,    68,    58,    66,   115,
     122,   123,    66,    65,    66,    66,    66,    66,    71,    94,
      94,   108,    56,    94,   108,    94,    69,    66,    23,    66,
      34,   117,   118,   108,   108,    56,    94,    35,    70,   118,
     119,    58,    58,    70,   112,   112
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
#line 163 "parser.y"
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
#line 175 "parser.y"
    { ((yyval.declList)=(yyvsp[(1) - (2)].declList))->Append((yyvsp[(2) - (2)].decl)); }
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 176 "parser.y"
    { ((yyval.declList) = new List<Decl*>)->Append((yyvsp[(1) - (1)].decl)); }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 180 "parser.y"
    { 
    Identifier *id = new Identifier((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].identifier));
    (yyval.exp) = new VarExpr((yylsp[(1) - (1)]), id); 
  }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 184 "parser.y"
    { (yyval.exp) = new IntConstant((yylsp[(1) - (1)]),(yyvsp[(1) - (1)].integerConstant)); }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 185 "parser.y"
    { (yyval.exp) = new FloatConstant((yylsp[(1) - (1)]),(yyvsp[(1) - (1)].floatConstant)); }
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 186 "parser.y"
    { (yyval.exp) = new BoolConstant((yylsp[(1) - (1)]),(yyvsp[(1) - (1)].boolConstant)); }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 187 "parser.y"
    { (yyval.exp) = (yyvsp[(2) - (3)].exp); }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 191 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 192 "parser.y"
    {
    (yyval.exp) = new ArrayAccess(Join((yylsp[(1) - (4)]), (yylsp[(4) - (4)])), (yyvsp[(1) - (4)].exp), (yyvsp[(3) - (4)].exp));
  }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 195 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].call); }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 196 "parser.y"
    {
    (yyval.exp) = new FieldAccess((yyvsp[(1) - (3)].exp), new Identifier((yylsp[(3) - (3)]),(yyvsp[(3) - (3)].identifier)));
  }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 199 "parser.y"
    { 
    Operator *op = new Operator((yylsp[(2) - (2)]), "++");
    (yyval.exp) = new PostfixExpr((yyvsp[(1) - (2)].exp), op);
  }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 203 "parser.y"
    {
    Operator *op = new Operator((yylsp[(2) - (2)]), "--");
    (yyval.exp) = new PostfixExpr((yyvsp[(1) - (2)].exp), op);
  }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 210 "parser.y"
    { (yyval.call) = (yyvsp[(1) - (2)].call); }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 211 "parser.y"
    { (yyval.call) = (yyvsp[(1) - (2)].call); }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 215 "parser.y"
    { (yyval.call) = (yyvsp[(1) - (2)].call); }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 216 "parser.y"
    { (yyval.call) = (yyvsp[(1) - (1)].call); }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 220 "parser.y"
    {
	  Identifier *id = new Identifier((yylsp[(1) - (3)]), (yyvsp[(1) - (3)].identifier));
	  (yyval.call) = new Call((yylsp[(1) - (3)]), NULL, id, (yyvsp[(3) - (3)].expList));
	}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 227 "parser.y"
    { 
	  Identifier *id = new Identifier((yylsp[(1) - (2)]), (yyvsp[(1) - (2)].identifier));
	  (yyval.call) = new Call((yylsp[(1) - (2)]), NULL, id, new List<Expr*>);
	}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 234 "parser.y"
    { ((yyval.expList) = new List<Expr*>)->Append((yyvsp[(1) - (1)].exp)); }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 235 "parser.y"
    { ((yyval.expList)=(yyvsp[(1) - (3)].expList))->Append((yyvsp[(3) - (3)].exp)); }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 239 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 240 "parser.y"
    { 
    Operator *op = new Operator((yylsp[(1) - (2)]), "++");
    (yyval.exp) = new ArithmeticExpr(op, (yyvsp[(2) - (2)].exp));
  }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 244 "parser.y"
    {
    Operator *op = new Operator((yylsp[(1) - (2)]), "--");
    (yyval.exp) = new ArithmeticExpr(op, (yyvsp[(2) - (2)].exp));
  }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 248 "parser.y"
    {
    (yyval.exp) = new ArithmeticExpr((yyvsp[(1) - (2)].op), (yyvsp[(2) - (2)].exp));
  }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 254 "parser.y"
    { (yyval.op) = new Operator((yylsp[(1) - (1)]), "+"); }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 255 "parser.y"
    { (yyval.op) = new Operator((yylsp[(1) - (1)]), "-"); }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 259 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 260 "parser.y"
    {
    Operator *op = new Operator((yylsp[(2) - (3)]), "*");
    (yyval.exp) = new ArithmeticExpr((yyvsp[(1) - (3)].exp), op, (yyvsp[(3) - (3)].exp));
  }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 264 "parser.y"
    {
    Operator *op = new Operator((yylsp[(2) - (3)]), "/");
    (yyval.exp) = new ArithmeticExpr((yyvsp[(1) - (3)].exp), op, (yyvsp[(3) - (3)].exp));
  }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 271 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 272 "parser.y"
    {
    Operator *op = new Operator((yylsp[(2) - (3)]), "+");
    (yyval.exp) = new ArithmeticExpr((yyvsp[(1) - (3)].exp), op, (yyvsp[(3) - (3)].exp));
  }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 276 "parser.y"
    {
    Operator *op = new Operator((yylsp[(2) - (3)]), "-");
    (yyval.exp) = new ArithmeticExpr((yyvsp[(1) - (3)].exp), op, (yyvsp[(3) - (3)].exp));
  }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 283 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 284 "parser.y"
    {
    Operator *op = new Operator((yylsp[(2) - (3)]), "<");
    (yyval.exp) = new RelationalExpr((yyvsp[(1) - (3)].exp), op, (yyvsp[(3) - (3)].exp));
  }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 288 "parser.y"
    {
    Operator *op = new Operator((yylsp[(2) - (3)]), ">");
    (yyval.exp) = new RelationalExpr((yyvsp[(1) - (3)].exp), op, (yyvsp[(3) - (3)].exp));
  }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 292 "parser.y"
    {
    Operator *op = new Operator((yylsp[(2) - (3)]), "<=");
    (yyval.exp) = new RelationalExpr((yyvsp[(1) - (3)].exp), op, (yyvsp[(3) - (3)].exp));
  }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 296 "parser.y"
    {
    Operator *op = new Operator((yylsp[(2) - (3)]), ">=");
    (yyval.exp) = new RelationalExpr((yyvsp[(1) - (3)].exp), op, (yyvsp[(3) - (3)].exp));
  }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 303 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 304 "parser.y"
    {
    Operator *op = new Operator((yylsp[(2) - (3)]), "==");
    (yyval.exp) = new EqualityExpr((yyvsp[(1) - (3)].exp), op, (yyvsp[(3) - (3)].exp));
  }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 308 "parser.y"
    {
    Operator *op = new Operator((yylsp[(2) - (3)]), "!=");
    (yyval.exp) = new EqualityExpr((yyvsp[(1) - (3)].exp), op, (yyvsp[(3) - (3)].exp));
  }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 315 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 316 "parser.y"
    {
    Operator *op = new Operator((yylsp[(2) - (3)]), "&&");
    (yyval.exp) = new LogicalExpr((yyvsp[(1) - (3)].exp), op, (yyvsp[(3) - (3)].exp));
  }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 323 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 324 "parser.y"
    {
    Operator *op = new Operator((yylsp[(2) - (3)]), "||");
    (yyval.exp) = new LogicalExpr((yyvsp[(1) - (3)].exp), op, (yyvsp[(3) - (3)].exp));
  }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 331 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 332 "parser.y"
    {
    (yyval.exp) = new SelectionExpr((yyvsp[(1) - (5)].exp), (yyvsp[(3) - (5)].exp), (yyvsp[(5) - (5)].exp));
  }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 338 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 339 "parser.y"
    {
    (yyval.exp) = new AssignExpr((yyvsp[(1) - (3)].exp), (yyvsp[(2) - (3)].op), (yyvsp[(3) - (3)].exp));
  }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 342 "parser.y"
    {(yyval.exp) = (yyvsp[(1) - (1)].exp);}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 346 "parser.y"
    { (yyval.op) = new Operator((yylsp[(1) - (1)]), "="); }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 347 "parser.y"
    { (yyval.op) = new Operator((yylsp[(1) - (1)]), "*="); }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 348 "parser.y"
    { (yyval.op) = new Operator((yylsp[(1) - (1)]), "/="); }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 349 "parser.y"
    { (yyval.op) = new Operator((yylsp[(1) - (1)]), "+="); }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 350 "parser.y"
    { (yyval.op) = new Operator((yylsp[(1) - (1)]), "-="); }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 354 "parser.y"
    { (yyval.decl) = (yyvsp[(1) - (2)].fnDecl); }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 355 "parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].fnDecl); }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 356 "parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].varDecl); }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 360 "parser.y"
    { (yyval.fnDecl) = (yyvsp[(1) - (2)].fnDecl); }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 364 "parser.y"
    { (yyval.fnDecl) = (yyvsp[(1) - (1)].fnDecl); }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 365 "parser.y"
    { (yyval.fnDecl) = (yyvsp[(1) - (1)].fnDecl); }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 369 "parser.y"
    {
    Identifier *id = new Identifier((yylsp[(2) - (4)]), (yyvsp[(2) - (4)].identifier));
    (yyval.fnDecl) = new FnDecl(id, (yyvsp[(1) - (4)].type), (yyvsp[(4) - (4)].vDeclList));
  }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 373 "parser.y"
    {
    Identifier *id = new Identifier((yylsp[(3) - (5)]), (yyvsp[(3) - (5)].identifier));
    (yyval.fnDecl) = new FnDecl(id, (yyvsp[(2) - (5)].type), (yyvsp[(1) - (5)].typeQual), (yyvsp[(5) - (5)].vDeclList));
  }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 380 "parser.y"
    {
    Identifier *id = new Identifier((yylsp[(2) - (3)]), (yyvsp[(2) - (3)].identifier));
    (yyval.fnDecl) = new FnDecl(id, (yyvsp[(1) - (3)].type), new List<VarDecl*>);
  }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 384 "parser.y"
    {
    Identifier *id = new Identifier((yylsp[(3) - (4)]), (yyvsp[(3) - (4)].identifier));
    (yyval.fnDecl) = new FnDecl(id, (yyvsp[(2) - (4)].type), (yyvsp[(1) - (4)].typeQual), new List<VarDecl*>);
  }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 391 "parser.y"
    {
    Identifier *id = new Identifier((yylsp[(2) - (2)]), (yyvsp[(2) - (2)].identifier));
    VarDecl *var = new VarDecl(id, (yyvsp[(1) - (2)].type));
    List<VarDecl*> *list = new List<VarDecl*>();
    list->Append(var);
    (yyval.vDeclList) = list;
  }
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 398 "parser.y"
    {
    Identifier *id = new Identifier((yylsp[(4) - (4)]), (yyvsp[(4) - (4)].identifier));
    VarDecl *var = new VarDecl(id, (yyvsp[(3) - (4)].type));
    ((yyval.vDeclList)=(yyvsp[(1) - (4)].vDeclList))->Append(var);
  }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 406 "parser.y"
    {
    Identifier *id = new Identifier((yylsp[(2) - (3)]),(yyvsp[(2) - (3)].identifier));
    (yyval.varDecl) = new VarDecl(id,(yyvsp[(1) - (3)].type));
  }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 410 "parser.y"
    {
    Identifier *id = new Identifier((yylsp[(3) - (4)]), (yyvsp[(3) - (4)].identifier));
    (yyval.varDecl) = new VarDecl(id, (yyvsp[(2) - (4)].type), (yyvsp[(1) - (4)].typeQual));
  }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 414 "parser.y"
    {
    Identifier *id = new Identifier((yylsp[(2) - (4)]), (yyvsp[(2) - (4)].identifier));
    ArrayType *type = new ArrayType((yylsp[(1) - (4)]), (yyvsp[(1) - (4)].type));
    (yyval.varDecl) = new VarDecl(id, type);
  }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 419 "parser.y"
    {
    Identifier *id = new Identifier ((yylsp[(3) - (5)]), (yyvsp[(3) - (5)].identifier));
    ArrayType *type = new ArrayType((yylsp[(2) - (5)]), (yyvsp[(2) - (5)].type));
    (yyval.varDecl) = new VarDecl(id, type, (yyvsp[(1) - (5)].typeQual));
  }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 424 "parser.y"
    {
    Identifier *id = new Identifier ((yylsp[(2) - (5)]), (yyvsp[(2) - (5)].identifier));
    (yyval.varDecl) = new VarDecl(id, (yyvsp[(1) - (5)].type), (yyvsp[(4) - (5)].exp));
  }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 428 "parser.y"
    {
    Identifier *id = new Identifier ((yylsp[(3) - (6)]), (yyvsp[(3) - (6)].identifier));
    (yyval.varDecl) = new VarDecl(id, (yyvsp[(2) - (6)].type), (yyvsp[(1) - (6)].typeQual), (yyvsp[(5) - (6)].exp));
  }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 435 "parser.y"
    { (yyval.typeQual) = TypeQualifier::constTypeQualifier; }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 436 "parser.y"
    { (yyval.typeQual) = TypeQualifier::inTypeQualifier; }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 437 "parser.y"
    { (yyval.typeQual) = TypeQualifier::outTypeQualifier; }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 438 "parser.y"
    { (yyval.typeQual) = TypeQualifier::uniformTypeQualifier; }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 442 "parser.y"
    { 
    (yyval.type) = (yyvsp[(1) - (1)].type); 
  }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 445 "parser.y"
    {
    (yyval.type) = new ArrayType((yylsp[(1) - (2)]), (yyvsp[(1) - (2)].type));
  }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 451 "parser.y"
    { (yyval.exp) = (yyvsp[(2) - (3)].exp); }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 455 "parser.y"
    { (yyval.type) = Type::voidType; }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 456 "parser.y"
    { (yyval.type) = Type::floatType; }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 457 "parser.y"
    { (yyval.type) = Type::intType; }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 458 "parser.y"
    { (yyval.type) = Type::uintType; }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 459 "parser.y"
    { (yyval.type) = Type::boolType; }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 460 "parser.y"
    { (yyval.type) = Type::vec2Type; }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 461 "parser.y"
    { (yyval.type) = Type::vec3Type; }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 462 "parser.y"
    { (yyval.type) = Type::vec4Type; }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 463 "parser.y"
    { (yyval.type) = Type::bvec2Type; }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 464 "parser.y"
    { (yyval.type) = Type::bvec3Type; }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 465 "parser.y"
    { (yyval.type) = Type::bvec4Type; }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 466 "parser.y"
    { (yyval.type) = Type::ivec2Type; }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 467 "parser.y"
    { (yyval.type) = Type::ivec3Type; }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 468 "parser.y"
    { (yyval.type) = Type::ivec4Type; }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 469 "parser.y"
    { (yyval.type) = Type::uvec2Type; }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 470 "parser.y"
    { (yyval.type) = Type::uvec3Type; }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 471 "parser.y"
    { (yyval.type) = Type::uvec4Type; }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 472 "parser.y"
    { (yyval.type) = Type::mat2Type; }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 473 "parser.y"
    { (yyval.type) = Type::mat3Type; }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 474 "parser.y"
    { (yyval.type) = Type::mat4Type; }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 478 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 482 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 483 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); }
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 487 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].exp); }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 488 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].exp); }
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 489 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); }
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 490 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); }
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 491 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); }
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 492 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 496 "parser.y"
    {
    (yyval.stmt) = new StmtBlock(new List<VarDecl*>, new List<Stmt*>);
  }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 505 "parser.y"
    {
    (yyval.stmt) = new StmtBlock((yyvsp[(2) - (4)].vDeclList), (yyvsp[(3) - (4)].stmtList));
  }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 511 "parser.y"
    { 
    ((yyval.vDeclList) = (yyvsp[(1) - (2)].vDeclList))->Append((yyvsp[(2) - (2)].varDecl)); 
  }
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 514 "parser.y"
    { (yyval.vDeclList) = new List<VarDecl*>; }
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 518 "parser.y"
    { ((yyval.stmtList) = new List<Stmt*>)->Append((yyvsp[(1) - (1)].stmt)); }
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 519 "parser.y"
    { ((yyval.stmtList)=(yyvsp[(1) - (2)].stmtList))->Append((yyvsp[(2) - (2)].stmt)); }
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 520 "parser.y"
    { (yyval.stmtList) = new List<Stmt*>; }
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 524 "parser.y"
    { (yyval.exp) = new EmptyExpr(); }
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 525 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (2)].exp); }
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 529 "parser.y"
    {
    (yyval.stmt) = new IfStmt((yyvsp[(3) - (5)].exp), (yyvsp[(5) - (5)].stmt), new EmptyExpr());
  }
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 532 "parser.y"
    {
    (yyval.stmt) = new IfStmt((yyvsp[(3) - (7)].exp), (yyvsp[(5) - (7)].stmt), (yyvsp[(7) - (7)].stmt));
  }
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 538 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 542 "parser.y"
    {
    (yyval.stmt) = new SwitchStmt((yyvsp[(3) - (8)].exp), (yyvsp[(6) - (8)].caseList), (yyvsp[(7) - (8)].def));
  }
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 545 "parser.y"
    {
    (yyval.stmt) = new SwitchStmt((yyvsp[(3) - (7)].exp), (yyvsp[(6) - (7)].caseList), NULL);
  }
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 551 "parser.y"
    { ((yyval.caseList)=(yyvsp[(1) - (2)].caseList))->Append((yyvsp[(2) - (2)].caseLabel)); }
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 552 "parser.y"
    { ((yyval.caseList) = new List<Case*>)->Append((yyvsp[(1) - (1)].caseLabel)); }
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 556 "parser.y"
    { (yyval.caseLabel) = new Case((yyvsp[(2) - (4)].exp), (yyvsp[(4) - (4)].stmtList)); }
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 560 "parser.y"
    { (yyval.def) = new Default((yyvsp[(3) - (3)].stmtList)); }
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 564 "parser.y"
    {
    (yyval.stmt) = new WhileStmt((yyvsp[(3) - (5)].exp), (yyvsp[(5) - (5)].stmt));
  }
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 567 "parser.y"
    {
    (yyval.stmt) = new DoWhileStmt((yyvsp[(2) - (7)].stmt), (yyvsp[(5) - (7)].exp));
  }
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 570 "parser.y"
    {
    (yyval.stmt) = new ForStmt((yyvsp[(3) - (7)].exp), (yyvsp[(4) - (7)].exp), (yyvsp[(5) - (7)].exp), (yyvsp[(7) - (7)].stmt));
  }
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 576 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 577 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 581 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 585 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (2)].exp); }
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 589 "parser.y"
    { (yyval.stmt) = new BreakStmt((yylsp[(1) - (2)])); }
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 590 "parser.y"
    { (yyval.stmt) = new ReturnStmt((yylsp[(1) - (2)]), new EmptyExpr); }
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 591 "parser.y"
    { (yyval.stmt) = new ReturnStmt((yylsp[(1) - (3)]), (yyvsp[(2) - (3)].exp)); }
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 595 "parser.y"
    {
    ((yyval.fnDecl)=(yyvsp[(1) - (2)].fnDecl))->SetFunctionBody((yyvsp[(2) - (2)].stmt));
  }
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 602 "parser.y"
    {
    Identifier *id = new Identifier((yylsp[(1) - (4)]), "vec2");
    (yyval.exp) = new Call(Join((yylsp[(1) - (4)]), (yylsp[(4) - (4)])), NULL, id, (yyvsp[(3) - (4)].expList));

  }
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 607 "parser.y"
    {
    Identifier *id = new Identifier((yylsp[(1) - (4)]), "vec3");
    (yyval.exp) = new Call(Join((yylsp[(1) - (4)]), (yylsp[(4) - (4)])), NULL, id, (yyvsp[(3) - (4)].expList));
  }
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 611 "parser.y"
    {
    Identifier *id = new Identifier((yylsp[(1) - (4)]), "vec4");
    (yyval.exp) = new Call(Join((yylsp[(1) - (4)]), (yylsp[(4) - (4)])), NULL, id, (yyvsp[(3) - (4)].expList));
  }
    break;



/* Line 1455 of yacc.c  */
#line 3014 "y.tab.c"
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
#line 618 "parser.y"


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
