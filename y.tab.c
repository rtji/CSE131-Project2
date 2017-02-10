
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
#define YYLAST   472

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  75
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  52
/* YYNRULES -- Number of rules.  */
#define YYNRULES  141
/* YYNRULES -- Number of states.  */
#define YYNSTATES  234

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
      52,    56,    59,    61,    63,    67,    69,    72,    75,    78,
      80,    82,    84,    88,    92,    94,    98,   102,   104,   108,
     112,   116,   120,   122,   126,   130,   132,   136,   138,   142,
     144,   150,   152,   156,   158,   160,   162,   164,   166,   169,
     171,   173,   176,   178,   180,   185,   191,   195,   200,   203,
     208,   212,   217,   222,   228,   234,   241,   243,   245,   247,
     249,   251,   254,   258,   260,   262,   264,   266,   268,   270,
     272,   274,   276,   278,   280,   282,   284,   286,   288,   290,
     292,   294,   296,   298,   300,   302,   304,   306,   308,   310,
     312,   314,   316,   319,   323,   327,   332,   335,   336,   338,
     341,   343,   346,   352,   360,   362,   371,   379,   382,   384,
     389,   393,   399,   407,   415,   417,   419,   421,   424,   427,
     430,   434
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      76,     0,    -1,    77,    -1,    77,    97,    -1,    97,    -1,
      71,    -1,    72,    -1,    73,    -1,    74,    -1,    65,    95,
      66,    -1,    78,    -1,    79,    67,    95,    68,    -1,    80,
      -1,    79,    57,    71,    -1,    79,    31,    -1,    79,    32,
      -1,    82,    66,    -1,    81,    66,    -1,    83,     3,    -1,
      83,    -1,    84,    65,    85,    -1,    84,    65,    -1,    71,
      -1,    95,    -1,    85,    60,    95,    -1,    79,    -1,    31,
      86,    -1,    32,    86,    -1,    87,    86,    -1,    62,    -1,
      61,    -1,    86,    -1,    88,    63,    86,    -1,    88,    64,
      86,    -1,    88,    -1,    89,    62,    88,    -1,    89,    61,
      88,    -1,    89,    -1,    90,    11,    89,    -1,    90,    12,
      89,    -1,    90,     7,    89,    -1,    90,     8,    89,    -1,
      90,    -1,    91,     9,    90,    -1,    91,    10,    90,    -1,
      91,    -1,    92,    13,    91,    -1,    92,    -1,    93,    14,
      92,    -1,    93,    -1,    93,    59,    95,    58,    95,    -1,
      94,    -1,    86,    96,    95,    -1,    15,    -1,    16,    -1,
      17,    -1,    18,    -1,    19,    -1,    98,    56,    -1,   126,
      -1,   103,    -1,    99,    66,    -1,   101,    -1,   100,    -1,
     105,    71,    65,   102,    -1,   104,   105,    71,    65,   102,
      -1,   105,    71,    65,    -1,   104,   105,    71,    65,    -1,
     105,    71,    -1,   102,    60,   105,    71,    -1,   105,    71,
      56,    -1,   104,   105,    71,    56,    -1,   105,    71,   106,
      56,    -1,   104,   105,    71,   106,    56,    -1,   105,    71,
      15,    95,    56,    -1,   104,   105,    71,    15,    95,    56,
      -1,    26,    -1,    36,    -1,    37,    -1,    27,    -1,   107,
      -1,   107,   106,    -1,    67,    94,    68,    -1,     3,    -1,
       6,    -1,     5,    -1,    51,    -1,     4,    -1,    42,    -1,
      43,    -1,    44,    -1,    48,    -1,    49,    -1,    50,    -1,
      45,    -1,    46,    -1,    47,    -1,    52,    -1,    53,    -1,
      54,    -1,    39,    -1,    40,    -1,    41,    -1,    95,    -1,
     111,    -1,   110,    -1,   108,    -1,   114,    -1,   115,    -1,
     117,    -1,   121,    -1,   125,    -1,    69,    70,    -1,    69,
     113,    70,    -1,    69,   112,    70,    -1,    69,   112,   113,
      70,    -1,   112,   103,    -1,    -1,   109,    -1,   113,   109,
      -1,    56,    -1,    95,    56,    -1,    22,    65,    95,    66,
     109,    -1,    22,    65,    95,    66,   109,    23,   109,    -1,
      95,    -1,    33,    65,    95,    66,    69,   118,   120,    70,
      -1,    33,    65,    95,    66,    69,   118,    70,    -1,   118,
     119,    -1,   119,    -1,    34,    95,    58,   113,    -1,    35,
      58,   113,    -1,    20,    65,   116,    66,   109,    -1,    30,
     109,    20,    65,    95,    66,    56,    -1,    21,    65,   122,
     124,    95,    66,   109,    -1,   114,    -1,   108,    -1,   116,
      -1,   123,    56,    -1,    25,    56,    -1,    24,    56,    -1,
      24,    95,    56,    -1,    98,   111,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   166,   166,   178,   179,   183,   187,   188,   189,   190,
     194,   195,   198,   199,   202,   206,   213,   214,   218,   219,
     223,   229,   235,   239,   240,   244,   245,   249,   253,   259,
     260,   264,   265,   269,   276,   277,   281,   288,   289,   293,
     297,   301,   308,   309,   313,   320,   321,   328,   329,   336,
     337,   343,   344,   350,   351,   352,   353,   354,   358,   359,
     360,   364,   368,   369,   373,   377,   384,   388,   395,   402,
     410,   414,   418,   423,   428,   432,   439,   440,   441,   442,
     446,   449,   455,   459,   460,   461,   462,   463,   464,   465,
     466,   467,   468,   469,   470,   471,   472,   473,   474,   475,
     476,   477,   478,   482,   486,   487,   491,   492,   493,   494,
     495,   496,   500,   503,   506,   509,   515,   518,   522,   523,
     527,   528,   532,   535,   541,   545,   548,   554,   555,   559,
     563,   567,   570,   573,   579,   580,   584,   588,   592,   593,
     594,   608
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
  "function_identifier", "expression_list", "unary_expression",
  "unary_operator", "multiplicative_expression", "additive_expression",
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
  "for_cond_statement", "jump_statement", "function_definition", 0
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
      82,    83,    84,    85,    85,    86,    86,    86,    86,    87,
      87,    88,    88,    88,    89,    89,    89,    90,    90,    90,
      90,    90,    91,    91,    91,    92,    92,    93,    93,    94,
      94,    95,    95,    96,    96,    96,    96,    96,    97,    97,
      97,    98,    99,    99,   100,   100,   101,   101,   102,   102,
     103,   103,   103,   103,   103,   103,   104,   104,   104,   104,
     105,   105,   106,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   107,   107,   107,   107,   107,   107,   107,
     107,   107,   107,   108,   109,   109,   110,   110,   110,   110,
     110,   110,   111,   111,   111,   111,   112,   112,   113,   113,
     114,   114,   115,   115,   116,   117,   117,   118,   118,   119,
     120,   121,   121,   121,   122,   122,   123,   124,   125,   125,
     125,   126
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     1,     3,
       1,     4,     1,     3,     2,     2,     2,     2,     2,     1,
       3,     2,     1,     1,     3,     1,     2,     2,     2,     1,
       1,     1,     3,     3,     1,     3,     3,     1,     3,     3,
       3,     3,     1,     3,     3,     1,     3,     1,     3,     1,
       5,     1,     3,     1,     1,     1,     1,     1,     2,     1,
       1,     2,     1,     1,     4,     5,     3,     4,     2,     4,
       3,     4,     4,     5,     5,     6,     1,     1,     1,     1,
       1,     2,     3,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     2,     3,     3,     4,     2,     0,     1,     2,
       1,     2,     5,     7,     1,     8,     7,     2,     1,     4,
       3,     5,     7,     7,     1,     1,     1,     2,     2,     2,
       3,     2
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
     117,   141,    61,     0,     0,     0,    81,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   120,    30,    29,     0,
     112,     5,     6,     7,     8,    10,    25,    12,     0,     0,
      19,     0,    31,     0,    34,    37,    42,    45,    47,    49,
      51,   103,   106,   118,   105,   104,     0,     0,   107,   108,
     109,   110,   111,     0,     0,    70,    66,     0,    31,     0,
       0,     0,     0,   139,     0,   138,     0,    26,    27,     0,
       0,    14,    15,     0,     0,    17,    16,    18,    21,    53,
      54,    55,    56,    57,     0,    28,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   121,
     114,   116,     0,     0,     0,   113,   119,     0,    71,    67,
       0,     0,    64,     0,    72,    82,   124,     0,   135,   134,
       0,     0,   140,     0,     0,     9,    13,     0,    20,    23,
      52,    32,    33,    36,    35,    40,    41,    38,    39,    43,
      44,    46,    48,     0,     0,     0,   115,     0,    65,    73,
      74,     0,    68,     0,   136,     0,     0,     0,     0,     0,
      11,     0,     0,     0,    75,     0,   131,   137,     0,   122,
       0,     0,    24,    50,    69,     0,     0,     0,     0,     0,
     128,   133,   123,   132,     0,     0,   126,   127,     0,     0,
       0,   125,   129,   130
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    25,    26,    65,    66,    67,    68,    69,    70,    71,
     168,    72,    73,    74,    75,    76,    77,    78,    79,    80,
      81,   124,    27,    28,    29,    30,    31,   152,    32,    33,
      34,    97,    35,    82,    83,    84,    85,    86,    87,    88,
      89,   157,    90,   219,   220,   228,    91,   160,   195,   196,
      92,    36
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -99
static const yytype_int16 yypact[] =
{
     321,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -99,   -99,   -99,   -99,    17,   321,   -99,   -45,   -61,
     -99,   -99,   -99,   373,   -51,   -42,   -99,   -99,   -99,   -99,
      63,   -99,   -99,   -35,   -13,   258,   -99,    -6,    -2,     3,
     372,   -14,   281,   258,   258,     7,   -99,   -99,   -99,   258,
     -99,   -99,   -99,   -99,   -99,   -99,   -23,   -99,     8,    14,
      78,    25,    22,   258,   -48,   -39,    21,    40,    69,     5,
     -99,    30,   -99,   -99,   -99,   -99,   152,   207,   -99,   -99,
     -99,   -99,   -99,    -9,   258,   -99,   373,    35,   -99,    29,
     258,   398,   258,   -99,    56,   -99,    94,   -99,   -99,   258,
      49,   -99,   -99,    45,   258,   -99,   -99,   -99,   258,   -99,
     -99,   -99,   -99,   -99,   258,   -99,   258,   258,   258,   258,
     258,   258,   258,   258,   258,   258,   258,   258,   258,   -99,
     -99,   -99,   373,    46,   226,   -99,   -99,   258,   -99,   373,
      62,    65,    66,    51,   -99,   -99,   -99,    57,   -99,   -99,
     258,    61,   -99,    64,    72,   -99,   -99,    71,    70,   -99,
     -99,   -99,   -99,   -48,   -48,   -39,   -39,   -39,   -39,    21,
      21,    40,    69,    73,    75,    -1,   -99,    84,    66,   -99,
     -99,   373,   -99,   281,   -99,    86,   258,   281,   258,    74,
     -99,   258,   258,     6,   -99,    77,   -99,   -99,    88,   121,
      93,   126,   -99,   -99,   -99,   281,   281,   105,   258,   -22,
     -99,   -99,   -99,   -99,   107,   108,   -99,   -99,    97,   281,
     281,   -99,   281,   281
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,   -99,
     -99,   -27,   -99,   -98,   -54,   -64,    32,    33,   -99,   130,
     -49,   -99,   160,   -99,   -99,   -99,   -99,    38,   104,   123,
     -29,   -32,   -99,   106,   -52,   -99,   182,   -99,   -79,   110,
     -99,    52,   -99,   -99,    -4,   -99,   -99,   -99,   -99,   -99,
     -99,   -99
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint8 yytable[] =
{
     106,   104,    94,    46,    43,    42,   147,   144,   111,   112,
     110,    39,   218,   225,    94,   126,   127,    37,    98,   137,
      44,   147,   128,   129,    40,    45,   107,   108,   130,   131,
     173,   174,   132,   133,   113,   146,    93,   119,   120,   121,
     122,   123,   105,    95,   114,   151,   125,   148,   226,   134,
     135,   156,    96,   161,    45,    95,   149,   143,    45,   100,
     164,   150,   148,   101,   138,   167,    45,   153,   102,   169,
     179,   180,   109,    45,   115,   170,   175,   176,   177,   178,
     116,   117,   136,    47,    48,    49,   139,    50,    51,   183,
     118,   154,   146,    52,    53,    54,    55,   155,   187,   171,
     172,    98,    98,    98,    98,    98,    98,    98,    98,    98,
      98,   156,   162,   184,   163,   165,   166,   185,   189,    56,
     153,   190,   192,   193,    57,    58,   191,   197,    59,   198,
     201,   202,    40,    60,    61,    62,    63,    64,   199,   200,
     204,   206,   207,   211,   216,   209,   203,   208,   214,   210,
     232,   233,   212,   213,   215,     1,     2,     3,     4,   217,
     218,   223,   205,   221,   222,   229,   230,   231,   181,   224,
     182,   150,    47,    48,    49,    99,    50,    51,     5,     6,
     146,   146,    52,    53,    54,    55,    38,   188,     7,     8,
     141,     9,    10,    11,    12,    13,    14,    15,    16,    17,
      18,    19,    20,    21,    22,    23,    24,   158,    56,   142,
      41,   159,   194,    57,    58,   227,     0,    59,     0,     0,
       0,    40,   140,    61,    62,    63,    64,    47,    48,    49,
       0,    50,    51,     0,     0,     0,     0,    52,    53,    54,
      55,     0,     0,     0,     0,     0,    47,    48,    49,     0,
      50,    51,     0,     0,     0,     0,    52,    53,    54,    55,
       0,     0,     0,    56,     0,     0,     0,     0,    57,    58,
       0,     0,    59,     0,     0,     0,    40,   145,    61,    62,
      63,    64,    56,     0,     0,     0,     0,    57,    58,    53,
      54,    59,     0,     0,     0,    40,   186,    61,    62,    63,
      64,    47,    48,    49,     0,    50,    51,     0,     0,     0,
       0,    52,    53,    54,    55,     0,     0,     0,     0,    57,
      58,     0,     0,    59,     1,     2,     3,     4,     0,    61,
      62,    63,    64,     0,     0,     0,     0,    56,     0,     0,
       0,     0,    57,    58,     0,     0,    59,     5,     6,     0,
      40,     0,    61,    62,    63,    64,     0,     7,     8,     0,
       9,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    20,    21,    22,    23,    24,     1,     2,     3,     4,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    53,    54,     0,     0,     0,     0,     0,
       0,     0,     9,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,   103,    53,
      54,     0,     0,    57,    58,     0,     0,    59,     0,     0,
       0,     0,     0,    61,    62,    63,    64,     0,     0,     0,
       0,     0,     0,     0,    56,     0,     0,     0,     0,    57,
      58,     0,     0,    59,     0,     0,     0,     0,     0,    61,
      62,    63,    64
};

static const yytype_int16 yycheck[] =
{
      52,    50,    15,    35,    33,    66,    15,    86,    31,    32,
      59,    56,    34,    35,    15,    63,    64,     0,    45,    14,
      71,    15,    61,    62,    69,    67,    53,    54,     7,     8,
     128,   129,    11,    12,    57,    87,    71,    15,    16,    17,
      18,    19,    56,    56,    67,    94,    73,    56,    70,     9,
      10,   100,    65,   102,    67,    56,    65,    86,    67,    65,
     109,    93,    56,    65,    59,   114,    67,    96,    65,   118,
     134,   135,    65,    67,    66,   124,   130,   131,   132,   133,
      66,     3,    13,    20,    21,    22,    56,    24,    25,   138,
      65,    56,   144,    30,    31,    32,    33,    68,   147,   126,
     127,   128,   129,   130,   131,   132,   133,   134,   135,   136,
     137,   160,    56,   142,    20,    66,    71,    71,    56,    56,
     149,    56,    71,    66,    61,    62,    60,    66,    65,    65,
      60,    58,    69,    70,    71,    72,    73,    74,    66,    68,
      56,   193,    56,    69,    23,   197,    71,   196,    71,   198,
     229,   230,   201,   202,    66,     3,     4,     5,     6,    66,
      34,    56,   191,   215,   216,    58,    58,    70,   136,   218,
     137,   203,    20,    21,    22,    45,    24,    25,    26,    27,
     232,   233,    30,    31,    32,    33,    26,   149,    36,    37,
      86,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    52,    53,    54,   101,    56,    86,
      28,   101,   160,    61,    62,   219,    -1,    65,    -1,    -1,
      -1,    69,    70,    71,    72,    73,    74,    20,    21,    22,
      -1,    24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,
      33,    -1,    -1,    -1,    -1,    -1,    20,    21,    22,    -1,
      24,    25,    -1,    -1,    -1,    -1,    30,    31,    32,    33,
      -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    61,    62,
      -1,    -1,    65,    -1,    -1,    -1,    69,    70,    71,    72,
      73,    74,    56,    -1,    -1,    -1,    -1,    61,    62,    31,
      32,    65,    -1,    -1,    -1,    69,    70,    71,    72,    73,
      74,    20,    21,    22,    -1,    24,    25,    -1,    -1,    -1,
      -1,    30,    31,    32,    33,    -1,    -1,    -1,    -1,    61,
      62,    -1,    -1,    65,     3,     4,     5,     6,    -1,    71,
      72,    73,    74,    -1,    -1,    -1,    -1,    56,    -1,    -1,
      -1,    -1,    61,    62,    -1,    -1,    65,    26,    27,    -1,
      69,    -1,    71,    72,    73,    74,    -1,    36,    37,    -1,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,     3,     4,     5,     6,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    31,    32,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    56,    31,
      32,    -1,    -1,    61,    62,    -1,    -1,    65,    -1,    -1,
      -1,    -1,    -1,    71,    72,    73,    74,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    56,    -1,    -1,    -1,    -1,    61,
      62,    -1,    -1,    65,    -1,    -1,    -1,    -1,    -1,    71,
      72,    73,    74
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,     4,     5,     6,    26,    27,    36,    37,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      50,    51,    52,    53,    54,    76,    77,    97,    98,    99,
     100,   101,   103,   104,   105,   107,   126,     0,    97,    56,
      69,   111,    66,   105,    71,    67,   106,    20,    21,    22,
      24,    25,    30,    31,    32,    33,    56,    61,    62,    65,
      70,    71,    72,    73,    74,    78,    79,    80,    81,    82,
      83,    84,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,   108,   109,   110,   111,   112,   113,   114,   115,
     117,   121,   125,    71,    15,    56,    65,   106,    86,    94,
      65,    65,    65,    56,    95,    56,   109,    86,    86,    65,
      95,    31,    32,    57,    67,    66,    66,     3,    65,    15,
      16,    17,    18,    19,    96,    86,    63,    64,    61,    62,
       7,     8,    11,    12,     9,    10,    13,    14,    59,    56,
      70,   103,   104,   105,   113,    70,   109,    15,    56,    65,
     106,    95,   102,   105,    56,    68,    95,   116,   108,   114,
     122,    95,    56,    20,    95,    66,    71,    95,    85,    95,
      95,    86,    86,    88,    88,    89,    89,    89,    89,    90,
      90,    91,    92,    95,   105,    71,    70,    95,   102,    56,
      56,    60,    71,    66,   116,   123,   124,    66,    65,    66,
      68,    60,    58,    71,    56,   105,   109,    56,    95,   109,
      95,    69,    95,    95,    71,    66,    23,    66,    34,   118,
     119,   109,   109,    56,    95,    35,    70,   119,   120,    58,
      58,    70,   113,   113
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
#line 166 "parser.y"
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
#line 178 "parser.y"
    { ((yyval.declList)=(yyvsp[(1) - (2)].declList))->Append((yyvsp[(2) - (2)].decl)); }
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 179 "parser.y"
    { ((yyval.declList) = new List<Decl*>)->Append((yyvsp[(1) - (1)].decl)); }
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 183 "parser.y"
    { 
    Identifier *id = new Identifier((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].identifier));
    (yyval.exp) = new VarExpr((yylsp[(1) - (1)]), id); 
  }
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 187 "parser.y"
    { (yyval.exp) = new IntConstant((yylsp[(1) - (1)]),(yyvsp[(1) - (1)].integerConstant)); }
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 188 "parser.y"
    { (yyval.exp) = new FloatConstant((yylsp[(1) - (1)]),(yyvsp[(1) - (1)].floatConstant)); }
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 189 "parser.y"
    { (yyval.exp) = new BoolConstant((yylsp[(1) - (1)]),(yyvsp[(1) - (1)].boolConstant)); }
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 190 "parser.y"
    { (yyval.exp) = (yyvsp[(2) - (3)].exp); }
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 194 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 195 "parser.y"
    {
    (yyval.exp) = new ArrayAccess((yylsp[(1) - (4)]), (yyvsp[(1) - (4)].exp), (yyvsp[(3) - (4)].exp));
  }
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 198 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].call); }
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 199 "parser.y"
    {
    (yyval.exp) = new FieldAccess((yyvsp[(1) - (3)].exp), new Identifier((yylsp[(3) - (3)]),(yyvsp[(3) - (3)].identifier)));
  }
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 202 "parser.y"
    { 
    Operator *op = new Operator((yylsp[(2) - (2)]), "++");
    (yyval.exp) = new PostfixExpr((yyvsp[(1) - (2)].exp), op);
  }
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 206 "parser.y"
    {
    Operator *op = new Operator((yylsp[(2) - (2)]), "--");
    (yyval.exp) = new PostfixExpr((yyvsp[(1) - (2)].exp), op);
  }
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 213 "parser.y"
    { (yyval.call) = (yyvsp[(1) - (2)].call); }
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 214 "parser.y"
    { (yyval.call) = (yyvsp[(1) - (2)].call); }
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 218 "parser.y"
    { (yyval.call) = (yyvsp[(1) - (2)].call); }
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 219 "parser.y"
    { (yyval.call) = (yyvsp[(1) - (1)].call); }
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 223 "parser.y"
    {
    (yyval.call) = new Call((yylsp[(1) - (3)]), NULL, (yyvsp[(1) - (3)].id), (yyvsp[(3) - (3)].expList));
  }
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 229 "parser.y"
    { 
    (yyval.call) = new Call((yylsp[(1) - (2)]), NULL, (yyvsp[(1) - (2)].id), new List<Expr*>);
  }
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 235 "parser.y"
    { (yyval.id) = new Identifier((yylsp[(1) - (1)]), (yyvsp[(1) - (1)].identifier)); }
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 239 "parser.y"
    { ((yyval.expList) = new List<Expr*>)->Append((yyvsp[(1) - (1)].exp)); }
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 240 "parser.y"
    { ((yyval.expList)=(yyvsp[(1) - (3)].expList))->Append((yyvsp[(3) - (3)].exp)); }
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 244 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 245 "parser.y"
    { 
    Operator *op = new Operator((yylsp[(1) - (2)]), "++");
    (yyval.exp) = new ArithmeticExpr(op, (yyvsp[(2) - (2)].exp));
  }
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 249 "parser.y"
    {
    Operator *op = new Operator((yylsp[(1) - (2)]), "--");
    (yyval.exp) = new ArithmeticExpr(op, (yyvsp[(2) - (2)].exp));
  }
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 253 "parser.y"
    {
    (yyval.exp) = new ArithmeticExpr((yyvsp[(1) - (2)].op), (yyvsp[(2) - (2)].exp));
  }
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 259 "parser.y"
    { (yyval.op) = new Operator((yylsp[(1) - (1)]), "+"); }
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 260 "parser.y"
    { (yyval.op) = new Operator((yylsp[(1) - (1)]), "-"); }
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 264 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 265 "parser.y"
    {
    Operator *op = new Operator((yylsp[(2) - (3)]), "*");
    (yyval.exp) = new ArithmeticExpr((yyvsp[(1) - (3)].exp), op, (yyvsp[(3) - (3)].exp));
  }
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 269 "parser.y"
    {
    Operator *op = new Operator((yylsp[(2) - (3)]), "/");
    (yyval.exp) = new ArithmeticExpr((yyvsp[(1) - (3)].exp), op, (yyvsp[(3) - (3)].exp));
  }
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 276 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 277 "parser.y"
    {
    Operator *op = new Operator((yylsp[(2) - (3)]), "+");
    (yyval.exp) = new ArithmeticExpr((yyvsp[(1) - (3)].exp), op, (yyvsp[(3) - (3)].exp));
  }
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 281 "parser.y"
    {
    Operator *op = new Operator((yylsp[(2) - (3)]), "-");
    (yyval.exp) = new ArithmeticExpr((yyvsp[(1) - (3)].exp), op, (yyvsp[(3) - (3)].exp));
  }
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 288 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 289 "parser.y"
    {
    Operator *op = new Operator((yylsp[(2) - (3)]), "<");
    (yyval.exp) = new RelationalExpr((yyvsp[(1) - (3)].exp), op, (yyvsp[(3) - (3)].exp));
  }
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 293 "parser.y"
    {
    Operator *op = new Operator((yylsp[(2) - (3)]), ">");
    (yyval.exp) = new RelationalExpr((yyvsp[(1) - (3)].exp), op, (yyvsp[(3) - (3)].exp));
  }
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 297 "parser.y"
    {
    Operator *op = new Operator((yylsp[(2) - (3)]), "<=");
    (yyval.exp) = new RelationalExpr((yyvsp[(1) - (3)].exp), op, (yyvsp[(3) - (3)].exp));
  }
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 301 "parser.y"
    {
    Operator *op = new Operator((yylsp[(2) - (3)]), ">=");
    (yyval.exp) = new RelationalExpr((yyvsp[(1) - (3)].exp), op, (yyvsp[(3) - (3)].exp));
  }
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 308 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 309 "parser.y"
    {
    Operator *op = new Operator((yylsp[(2) - (3)]), "==");
    (yyval.exp) = new EqualityExpr((yyvsp[(1) - (3)].exp), op, (yyvsp[(3) - (3)].exp));
  }
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 313 "parser.y"
    {
    Operator *op = new Operator((yylsp[(2) - (3)]), "!=");
    (yyval.exp) = new EqualityExpr((yyvsp[(1) - (3)].exp), op, (yyvsp[(3) - (3)].exp));
  }
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 320 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 321 "parser.y"
    {
    Operator *op = new Operator((yylsp[(2) - (3)]), "&&");
    (yyval.exp) = new LogicalExpr((yyvsp[(1) - (3)].exp), op, (yyvsp[(3) - (3)].exp));
  }
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 328 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 329 "parser.y"
    {
    Operator *op = new Operator((yylsp[(2) - (3)]), "||");
    (yyval.exp) = new LogicalExpr((yyvsp[(1) - (3)].exp), op, (yyvsp[(3) - (3)].exp));
  }
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 336 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 337 "parser.y"
    {
    (yyval.exp) = new SelectionExpr((yyvsp[(1) - (5)].exp), (yyvsp[(3) - (5)].exp), (yyvsp[(5) - (5)].exp));
  }
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 343 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 344 "parser.y"
    {
    (yyval.exp) = new AssignExpr((yyvsp[(1) - (3)].exp), (yyvsp[(2) - (3)].op), (yyvsp[(3) - (3)].exp));
  }
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 350 "parser.y"
    { (yyval.op) = new Operator((yylsp[(1) - (1)]), "="); }
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 351 "parser.y"
    { (yyval.op) = new Operator((yylsp[(1) - (1)]), "*="); }
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 352 "parser.y"
    { (yyval.op) = new Operator((yylsp[(1) - (1)]), "/="); }
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 353 "parser.y"
    { (yyval.op) = new Operator((yylsp[(1) - (1)]), "+="); }
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 354 "parser.y"
    { (yyval.op) = new Operator((yylsp[(1) - (1)]), "-="); }
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 358 "parser.y"
    { (yyval.decl) = (yyvsp[(1) - (2)].fnDecl); }
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 359 "parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].fnDecl); }
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 360 "parser.y"
    { (yyval.decl) = (yyvsp[(1) - (1)].varDecl); }
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 364 "parser.y"
    { (yyval.fnDecl) = (yyvsp[(1) - (2)].fnDecl); }
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 368 "parser.y"
    { (yyval.fnDecl) = (yyvsp[(1) - (1)].fnDecl); }
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 369 "parser.y"
    { (yyval.fnDecl) = (yyvsp[(1) - (1)].fnDecl); }
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 373 "parser.y"
    {
    Identifier *id = new Identifier((yylsp[(2) - (4)]), (yyvsp[(2) - (4)].identifier));
    (yyval.fnDecl) = new FnDecl(id, (yyvsp[(1) - (4)].type), (yyvsp[(4) - (4)].vDeclList));
  }
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 377 "parser.y"
    {
    Identifier *id = new Identifier((yylsp[(3) - (5)]), (yyvsp[(3) - (5)].identifier));
    (yyval.fnDecl) = new FnDecl(id, (yyvsp[(2) - (5)].type), (yyvsp[(1) - (5)].typeQual), (yyvsp[(5) - (5)].vDeclList));
  }
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 384 "parser.y"
    {
    Identifier *id = new Identifier((yylsp[(2) - (3)]), (yyvsp[(2) - (3)].identifier));
    (yyval.fnDecl) = new FnDecl(id, (yyvsp[(1) - (3)].type), new List<VarDecl*>);
  }
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 388 "parser.y"
    {
    Identifier *id = new Identifier((yylsp[(3) - (4)]), (yyvsp[(3) - (4)].identifier));
    (yyval.fnDecl) = new FnDecl(id, (yyvsp[(2) - (4)].type), (yyvsp[(1) - (4)].typeQual), new List<VarDecl*>);
  }
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 395 "parser.y"
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
#line 402 "parser.y"
    {
    Identifier *id = new Identifier((yylsp[(4) - (4)]), (yyvsp[(4) - (4)].identifier));
    VarDecl *var = new VarDecl(id, (yyvsp[(3) - (4)].type));
    ((yyval.vDeclList)=(yyvsp[(1) - (4)].vDeclList))->Append(var);
  }
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 410 "parser.y"
    {
    Identifier *id = new Identifier((yylsp[(2) - (3)]),(yyvsp[(2) - (3)].identifier));
    (yyval.varDecl) = new VarDecl(id,(yyvsp[(1) - (3)].type));
  }
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 414 "parser.y"
    {
    Identifier *id = new Identifier((yylsp[(3) - (4)]), (yyvsp[(3) - (4)].identifier));
    (yyval.varDecl) = new VarDecl(id, (yyvsp[(2) - (4)].type), (yyvsp[(1) - (4)].typeQual));
  }
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 418 "parser.y"
    {
    Identifier *id = new Identifier((yylsp[(2) - (4)]), (yyvsp[(2) - (4)].identifier));
    ArrayType *type = new ArrayType((yylsp[(1) - (4)]), (yyvsp[(1) - (4)].type));
    (yyval.varDecl) = new VarDecl(id, type);
  }
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 423 "parser.y"
    {
    Identifier *id = new Identifier ((yylsp[(3) - (5)]), (yyvsp[(3) - (5)].identifier));
    ArrayType *type = new ArrayType((yylsp[(2) - (5)]), (yyvsp[(2) - (5)].type));
    (yyval.varDecl) = new VarDecl(id, type, (yyvsp[(1) - (5)].typeQual));
  }
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 428 "parser.y"
    {
    Identifier *id = new Identifier ((yylsp[(2) - (5)]), (yyvsp[(2) - (5)].identifier));
    (yyval.varDecl) = new VarDecl(id, (yyvsp[(1) - (5)].type), (yyvsp[(4) - (5)].exp));
  }
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 432 "parser.y"
    {
    Identifier *id = new Identifier ((yylsp[(3) - (6)]), (yyvsp[(3) - (6)].identifier));
    (yyval.varDecl) = new VarDecl(id, (yyvsp[(2) - (6)].type), (yyvsp[(1) - (6)].typeQual), (yyvsp[(5) - (6)].exp));
  }
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 439 "parser.y"
    { (yyval.typeQual) = TypeQualifier::constTypeQualifier; }
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 440 "parser.y"
    { (yyval.typeQual) = TypeQualifier::inTypeQualifier; }
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 441 "parser.y"
    { (yyval.typeQual) = TypeQualifier::outTypeQualifier; }
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 442 "parser.y"
    { (yyval.typeQual) = TypeQualifier::uniformTypeQualifier; }
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 446 "parser.y"
    { 
    (yyval.type) = new Type(*(yyvsp[(1) - (1)].type)); 
  }
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 449 "parser.y"
    {
    (yyval.type) = new ArrayType((yylsp[(1) - (2)]), (yyvsp[(1) - (2)].type));
  }
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 455 "parser.y"
    { (yyval.exp) = (yyvsp[(2) - (3)].exp); }
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 459 "parser.y"
    { (yyval.type) = Type::voidType; }
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 460 "parser.y"
    { (yyval.type) = Type::floatType; }
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 461 "parser.y"
    { (yyval.type) = Type::intType; }
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 462 "parser.y"
    { (yyval.type) = Type::uintType; }
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 463 "parser.y"
    { (yyval.type) = Type::boolType; }
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 464 "parser.y"
    { (yyval.type) = Type::vec2Type; }
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 465 "parser.y"
    { (yyval.type) = Type::vec3Type; }
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 466 "parser.y"
    { (yyval.type) = Type::vec4Type; }
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 467 "parser.y"
    { (yyval.type) = Type::bvec2Type; }
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 468 "parser.y"
    { (yyval.type) = Type::bvec3Type; }
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 469 "parser.y"
    { (yyval.type) = Type::bvec4Type; }
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 470 "parser.y"
    { (yyval.type) = Type::ivec2Type; }
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 471 "parser.y"
    { (yyval.type) = Type::ivec3Type; }
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 472 "parser.y"
    { (yyval.type) = Type::ivec4Type; }
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 473 "parser.y"
    { (yyval.type) = Type::uvec2Type; }
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 474 "parser.y"
    { (yyval.type) = Type::uvec3Type; }
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 475 "parser.y"
    { (yyval.type) = Type::uvec4Type; }
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 476 "parser.y"
    { (yyval.type) = Type::mat2Type; }
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 477 "parser.y"
    { (yyval.type) = Type::mat3Type; }
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 478 "parser.y"
    { (yyval.type) = Type::mat4Type; }
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 482 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 486 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); }
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 487 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); }
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 491 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].exp); }
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 492 "parser.y"
    { (yyval.stmt) = (yyvsp[(1) - (1)].exp); }
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
    { (yyval.stmt) = (yyvsp[(1) - (1)].stmt); }
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 500 "parser.y"
    {
    (yyval.stmt) = new StmtBlock(new List<VarDecl*>, new List<Stmt*>);
  }
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 503 "parser.y"
    {
    (yyval.stmt) = new StmtBlock(new List<VarDecl*>, (yyvsp[(2) - (3)].stmtList));
  }
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 506 "parser.y"
    {
    (yyval.stmt) = new StmtBlock((yyvsp[(2) - (3)].vDeclList), new List<Stmt*>);
  }
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 509 "parser.y"
    {
    (yyval.stmt) = new StmtBlock((yyvsp[(2) - (4)].vDeclList), (yyvsp[(3) - (4)].stmtList));
  }
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 515 "parser.y"
    { 
    ((yyval.vDeclList) = (yyvsp[(1) - (2)].vDeclList))->Append((yyvsp[(2) - (2)].varDecl)); 
  }
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 518 "parser.y"
    { (yyval.vDeclList) = new List<VarDecl*>; }
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 522 "parser.y"
    { ((yyval.stmtList) = new List<Stmt*>)->Append((yyvsp[(1) - (1)].stmt)); }
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 523 "parser.y"
    { ((yyval.stmtList)=(yyvsp[(1) - (2)].stmtList))->Append((yyvsp[(2) - (2)].stmt)); }
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 527 "parser.y"
    { (yyval.exp) = new EmptyExpr(); }
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 528 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (2)].exp); }
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 532 "parser.y"
    {
    (yyval.stmt) = new IfStmt((yyvsp[(3) - (5)].exp), (yyvsp[(5) - (5)].stmt), new EmptyExpr());
  }
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 535 "parser.y"
    {
    (yyval.stmt) = new IfStmt((yyvsp[(3) - (7)].exp), (yyvsp[(5) - (7)].stmt), (yyvsp[(7) - (7)].stmt));
  }
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 541 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 545 "parser.y"
    {
    (yyval.stmt) = new SwitchStmt((yyvsp[(3) - (8)].exp), (yyvsp[(6) - (8)].caseList), (yyvsp[(7) - (8)].def));
  }
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 548 "parser.y"
    {
    (yyval.stmt) = new SwitchStmt((yyvsp[(3) - (7)].exp), (yyvsp[(6) - (7)].caseList), NULL);
  }
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 554 "parser.y"
    { ((yyval.caseList)=(yyvsp[(1) - (2)].caseList))->Append((yyvsp[(2) - (2)].caseLabel)); }
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 555 "parser.y"
    { ((yyval.caseList) = new List<Case*>)->Append((yyvsp[(1) - (1)].caseLabel)); }
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 559 "parser.y"
    { (yyval.caseLabel) = new Case((yyvsp[(2) - (4)].exp), (yyvsp[(4) - (4)].stmtList)); }
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 563 "parser.y"
    { (yyval.def) = new Default((yyvsp[(3) - (3)].stmtList)); }
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 567 "parser.y"
    {
    (yyval.stmt) = new WhileStmt((yyvsp[(3) - (5)].exp), (yyvsp[(5) - (5)].stmt));
  }
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 570 "parser.y"
    {
    (yyval.stmt) = new DoWhileStmt((yyvsp[(2) - (7)].stmt), (yyvsp[(5) - (7)].exp));
  }
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 573 "parser.y"
    {
    (yyval.stmt) = new ForStmt((yyvsp[(3) - (7)].exp), (yyvsp[(4) - (7)].exp), (yyvsp[(5) - (7)].exp), (yyvsp[(7) - (7)].stmt));
  }
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 579 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 580 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 584 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (1)].exp); }
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 588 "parser.y"
    { (yyval.exp) = (yyvsp[(1) - (2)].exp); }
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 592 "parser.y"
    { (yyval.stmt) = new BreakStmt((yylsp[(1) - (2)])); }
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 593 "parser.y"
    { (yyval.stmt) = new ReturnStmt((yylsp[(1) - (2)]), new EmptyExpr); }
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 594 "parser.y"
    { (yyval.stmt) = new ReturnStmt((yylsp[(1) - (3)]), (yyvsp[(2) - (3)].exp)); }
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 608 "parser.y"
    {
    ((yyval.fnDecl)=(yyvsp[(1) - (2)].fnDecl))->SetFunctionBody((yyvsp[(2) - (2)].stmt));
  }
    break;



/* Line 1455 of yacc.c  */
#line 2981 "y.tab.c"
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
#line 613 "parser.y"


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
