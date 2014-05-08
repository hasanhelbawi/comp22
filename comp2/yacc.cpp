/* A Bison parser, made by GNU Bison 2.1.  */

/* Skeleton parser for Yacc-like parsing with Bison,
   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005 Free Software Foundation, Inc.

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

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* Written by Richard Stallman by simplifying the original so called
   ``semantic'' parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.1"

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
     TRY = 258,
     CATCH = 259,
     NSEXception = 260,
     NUllPointerException = 261,
     OUtOfBoundryException = 262,
     CAstException = 263,
     FINALLY = 264,
     AT_INTERFACE = 265,
     IDENTIFIER = 266,
     SEMI_COLUMN = 267,
     NSSTRING = 268,
     FLOAT = 269,
     CHAR = 270,
     INT = 271,
     SEMI_COMA = 272,
     ID = 273,
     AT_PUBLIC = 274,
     AT_PROTECTED = 275,
     AT_PRIVATE = 276,
     OPEN_S = 277,
     CLOSE_S = 278,
     COMMA = 279,
     LESS_THAN = 280,
     MORE_THAN = 281,
     AT_END = 282,
     CONST = 283,
     VOID = 284,
     PLUS = 285,
     MINUS = 286,
     OPEN_P = 287,
     CLOSE_P = 288,
     AT_IMPLEMENTATION = 289,
     AND_AND = 290,
     OR_OR = 291,
     STRING_VAL = 292,
     FLOAT_VAL = 293,
     LESS_OR_EQUAL = 294,
     CHAR_VAL = 295,
     INT_VAL = 296,
     MORE_OR_EQUAL = 297,
     MULTI = 298,
     EQUAL_EQUAL = 299,
     NOT_EQUAL = 300,
     FOR = 301,
     EQUAL = 302,
     DIV = 303,
     WHILE = 304,
     IF = 305,
     OPEN_ARR = 306,
     CLOSE_ARR = 307,
     TRUE = 308,
     FALSE = 309,
     RETURN = 310,
     AT_PROTOCOL = 311,
     DO = 312,
     DOT = 313,
     SYMBOL = 314,
     SWITCH = 315,
     BREAK = 316,
     DEFAULT = 317,
     CASE = 318,
     STRUCT = 319,
     TYPEDEF = 320,
     ENUM = 321,
     if_h = 322,
     ELSE = 323,
     expr_1 = 324,
     p_type_expr_prec = 325,
     long_id_prec = 326
   };
#endif
/* Tokens.  */
#define TRY 258
#define CATCH 259
#define NSEXception 260
#define NUllPointerException 261
#define OUtOfBoundryException 262
#define CAstException 263
#define FINALLY 264
#define AT_INTERFACE 265
#define IDENTIFIER 266
#define SEMI_COLUMN 267
#define NSSTRING 268
#define FLOAT 269
#define CHAR 270
#define INT 271
#define SEMI_COMA 272
#define ID 273
#define AT_PUBLIC 274
#define AT_PROTECTED 275
#define AT_PRIVATE 276
#define OPEN_S 277
#define CLOSE_S 278
#define COMMA 279
#define LESS_THAN 280
#define MORE_THAN 281
#define AT_END 282
#define CONST 283
#define VOID 284
#define PLUS 285
#define MINUS 286
#define OPEN_P 287
#define CLOSE_P 288
#define AT_IMPLEMENTATION 289
#define AND_AND 290
#define OR_OR 291
#define STRING_VAL 292
#define FLOAT_VAL 293
#define LESS_OR_EQUAL 294
#define CHAR_VAL 295
#define INT_VAL 296
#define MORE_OR_EQUAL 297
#define MULTI 298
#define EQUAL_EQUAL 299
#define NOT_EQUAL 300
#define FOR 301
#define EQUAL 302
#define DIV 303
#define WHILE 304
#define IF 305
#define OPEN_ARR 306
#define CLOSE_ARR 307
#define TRUE 308
#define FALSE 309
#define RETURN 310
#define AT_PROTOCOL 311
#define DO 312
#define DOT 313
#define SYMBOL 314
#define SWITCH 315
#define BREAK 316
#define DEFAULT 317
#define CASE 318
#define STRUCT 319
#define TYPEDEF 320
#define ENUM 321
#define if_h 322
#define ELSE 323
#define expr_1 324
#define p_type_expr_prec 325
#define long_id_prec 326




/* Copy the first part of user declarations.  */
#line 2 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"

	#include <fstream>
	#include <iostream>  // not really needed since fstream includes it
	#include <stdlib.h>  
	#include <FlexLexer.h>
	#include "comp\hash_tabel.h"
	#include "comp\Symbol_Table.h"
	#include "comp\Interface.h"
	#include "comp\Method.h"
	#include "comp\Variable.h"
	#include "comp\Code_Generation.h"
	#include "comp\Scope.h"
	#include "comp\Defs.h"
	#include "comp\ErrorRecovery.h"
	#include "comp\AST.h"
	#include "comp\TypeCheck.h"
	#include <vector>
	#include <queue>
	using namespace std;
	//global offset 
 	
	ErrorRecovery *Er=new ErrorRecovery();
	void yyerror(char *,char *);
	vector<string> param_list;
	vector<char*> param_list1;
	Symbol_Table *s=new Symbol_Table();
	char *Inhert;
	int i;
	int temp22=0;
	int datamember_offset;
 	int function_offset;

	queue<char*> var;
	void insert_param()
	{
		int c=0;
		while(c<param_list1.size())
		{
			s->insertVariableInCurrentScope(param_list1[c],intType,3);
			c=c+1;
		}
	}
	void add_param(int type)
	{
		if(type==1)
			param_list.push_back("int");
		else if(type==2)
			param_list.push_back("char");
		else if(type==3)
			param_list.push_back("float");
		else if(type==4)
			param_list.push_back("nsstring");
		else if(type==5)
			param_list.push_back("void");
		else
			param_list.push_back("complex");
	}
	char* Interface_name;
	int in=0;
	int visability=0;
	using namespace std;
	int yylex(void);
	int yyparse();
	void yyerror(char *);
	FlexLexer* lexer = new yyFlexLexer();
	class Parser{
		public:
		int	parse()
		{
			return yyparse();
		}
	};
	AST * ast = new AST();
	TypeCheck * TC = new TypeCheck();
	Type_Error_Warning * TEW=new Type_Error_Warning();



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

#if ! defined (YYSTYPE) && ! defined (YYSTYPE_IS_DECLARED)
#line 157 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
typedef union YYSTYPE {
	struct R{
		int i;
		float f;
		char c;
		int type;
		char* str;
		int myLineNo;
		int myColno;
	}r;
	class TreeNode * tn;
} YYSTYPE;
/* Line 196 of yacc.c.  */
#line 318 "yacc.cpp"
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 219 of yacc.c.  */
#line 330 "yacc.cpp"

#if ! defined (YYSIZE_T) && defined (__SIZE_TYPE__)
# define YYSIZE_T __SIZE_TYPE__
#endif
#if ! defined (YYSIZE_T) && defined (size_t)
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T) && (defined (__STDC__) || defined (__cplusplus))
# include <stddef.h> /* INFRINGES ON USER NAME SPACE */
# define YYSIZE_T size_t
#endif
#if ! defined (YYSIZE_T)
# define YYSIZE_T unsigned int
#endif

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

#if ! defined (yyoverflow) || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if defined (__STDC__) || defined (__cplusplus)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     define YYINCLUDED_STDLIB_H
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning. */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2005 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM ((YYSIZE_T) -1)
#  endif
#  ifdef __cplusplus
extern "C" {
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if (! defined (malloc) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if (! defined (free) && ! defined (YYINCLUDED_STDLIB_H) \
	&& (defined (__STDC__) || defined (__cplusplus)))
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifdef __cplusplus
}
#  endif
# endif
#endif /* ! defined (yyoverflow) || YYERROR_VERBOSE */


#if (! defined (yyoverflow) \
     && (! defined (__cplusplus) \
	 || (defined (YYSTYPE_IS_TRIVIAL) && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  short int yyss;
  YYSTYPE yyvs;
  };

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (short int) + sizeof (YYSTYPE))			\
      + YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined (__GNUC__) && 1 < __GNUC__
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
      while (0)
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
    while (0)

#endif

#if defined (__STDC__) || defined (__cplusplus)
   typedef signed char yysigned_char;
#else
   typedef short int yysigned_char;
#endif

/* YYFINAL -- State number of the termination state. */
#define YYFINAL  16
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1126

/* YYNTOKENS -- Number of terminals. */
#define YYNTOKENS  72
/* YYNNTS -- Number of nonterminals. */
#define YYNNTS  81
/* YYNRULES -- Number of rules. */
#define YYNRULES  261
/* YYNRULES -- Number of states. */
#define YYNSTATES  548

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   326

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const unsigned char yytranslate[] =
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
      65,    66,    67,    68,    69,    70,    71
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const unsigned short int yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    12,    14,    16,    19,
      24,    29,    33,    37,    40,    45,    49,    53,    57,    60,
      63,    66,    68,    72,    74,    78,    82,    86,    90,    93,
      96,    98,   100,   103,   106,   108,   110,   112,   114,   118,
     122,   128,   134,   139,   144,   151,   158,   160,   162,   164,
     166,   173,   181,   188,   196,   200,   205,   211,   218,   224,
     229,   237,   244,   254,   261,   272,   282,   286,   288,   296,
     302,   310,   315,   324,   331,   336,   340,   342,   348,   352,
     354,   356,   358,   360,   362,   364,   366,   369,   372,   374,
     376,   378,   383,   388,   392,   396,   401,   405,   410,   414,
     418,   422,   426,   427,   432,   434,   438,   443,   448,   452,
     454,   457,   461,   469,   472,   474,   476,   478,   481,   486,
     491,   495,   498,   502,   505,   508,   511,   513,   515,   517,
     520,   521,   524,   528,   531,   535,   536,   543,   546,   549,
     551,   553,   555,   558,   560,   561,   564,   566,   568,   572,
     576,   578,   580,   582,   585,   594,   603,   611,   620,   628,
     636,   643,   651,   659,   667,   674,   681,   688,   694,   699,
     703,   708,   712,   715,   719,   721,   725,   729,   733,   737,
     741,   744,   748,   752,   756,   758,   760,   764,   768,   772,
     776,   780,   783,   787,   791,   795,   798,   802,   806,   808,
     812,   816,   818,   820,   822,   824,   826,   828,   830,   832,
     834,   838,   842,   846,   850,   854,   857,   861,   864,   867,
     872,   877,   881,   886,   891,   894,   899,   901,   909,   917,
     925,   933,   941,   951,   961,   967,   973,   975,   977,   979,
     981,   986,   991,   995,  1000,  1005,  1007,  1009,  1011,  1015,
    1018,  1020,  1023,  1026,  1030,  1033,  1037,  1040,  1043,  1047,
    1050,  1053
};

/* YYRHS -- A `-1'-separated list of the rules' RHS. */
static const short int yyrhs[] =
{
      73,     0,    -1,    74,    -1,    74,    75,    -1,    75,    -1,
      76,    -1,   110,    -1,   150,    -1,    77,    78,    -1,    10,
      11,    12,    11,    -1,    10,    11,     1,    11,    -1,    10,
      11,    12,    -1,    10,    11,    11,    -1,    10,    11,    -1,
      79,    81,    98,    27,    -1,    79,    81,    27,    -1,    79,
      98,    27,    -1,    81,    98,    27,    -1,    79,    27,    -1,
      81,    27,    -1,    98,    27,    -1,    27,    -1,    25,    80,
      26,    -1,    11,    -1,    80,     1,    11,    -1,    80,    24,
      11,    -1,    22,    82,    23,    -1,    22,    82,     1,    -1,
      22,    82,    -1,    82,    83,    -1,    83,    -1,    84,    -1,
      85,    84,    -1,    84,    86,    -1,    86,    -1,    21,    -1,
      20,    -1,    19,    -1,    95,    11,    17,    -1,    95,    11,
       1,    -1,    95,    11,    47,   134,    17,    -1,    95,    11,
      47,   134,     1,    -1,    28,    95,    11,    17,    -1,    28,
      95,    11,     1,    -1,    28,    95,    11,    47,   134,    17,
      -1,    28,    95,    11,    47,   134,     1,    -1,    87,    -1,
      88,    -1,    90,    -1,    92,    -1,    66,    22,    80,    23,
      11,    17,    -1,    65,    66,    22,    80,    23,    11,    17,
      -1,    64,    11,    22,    89,    23,    17,    -1,    64,    11,
      22,    89,    23,    80,    17,    -1,    95,    11,    17,    -1,
      89,    95,    11,    17,    -1,    95,    11,    12,   134,    17,
      -1,    89,    95,    11,    12,   134,    17,    -1,    89,    28,
      95,    11,    17,    -1,    28,    95,    11,    17,    -1,    89,
      28,    95,    11,    12,   134,    17,    -1,    28,    95,    11,
      12,   134,    17,    -1,    95,    11,    51,    41,    52,    47,
      22,    23,    17,    -1,    95,    11,    51,    41,    52,    17,
      -1,    95,    11,    51,    41,    52,    47,    22,    91,    23,
      17,    -1,    95,    11,    51,    52,    47,    22,    91,    23,
      17,    -1,    91,    24,   129,    -1,   129,    -1,    91,    24,
      51,    41,    52,    47,   129,    -1,    51,    41,    52,    47,
     129,    -1,    95,    11,    93,    47,    22,    23,    17,    -1,
      95,    11,    93,    17,    -1,    95,    11,    93,    47,    22,
      94,    23,    17,    -1,    51,    41,    52,    51,    41,    52,
      -1,    93,    51,    41,    52,    -1,    22,    91,    23,    -1,
     129,    -1,    94,    24,    22,    91,    23,    -1,    94,    24,
     129,    -1,    96,    -1,    97,    -1,    16,    -1,    15,    -1,
      14,    -1,    13,    -1,    29,    -1,    11,    43,    -1,    98,
      99,    -1,    99,    -1,   100,    -1,   101,    -1,    30,   102,
     103,    17,    -1,    30,   102,   103,     1,    -1,    30,   103,
      17,    -1,    30,   103,     1,    -1,    31,   102,   103,    17,
      -1,    31,   103,    17,    -1,    31,   102,   103,     1,    -1,
      31,   103,     1,    -1,    32,    95,    33,    -1,     1,    95,
      33,    -1,    32,    95,     1,    -1,    -1,    11,    12,   104,
     105,    -1,    11,    -1,   105,    12,   106,    -1,   105,    11,
      12,   106,    -1,   105,    11,     1,   106,    -1,   105,    11,
     106,    -1,   106,    -1,   102,    11,    -1,     3,   135,   108,
      -1,     4,    32,     5,   109,    33,   135,   108,    -1,     9,
     135,    -1,     6,    -1,     7,    -1,     8,    -1,   111,   112,
      -1,    34,    11,    12,    11,    -1,    34,    11,     1,    11,
      -1,    34,    11,    11,    -1,    34,    11,    -1,    81,   113,
      27,    -1,    81,    27,    -1,   113,    27,    -1,   113,   114,
      -1,   114,    -1,   115,    -1,   117,    -1,   116,   135,    -1,
      -1,    30,   103,    -1,    30,   102,   103,    -1,   118,   135,
      -1,    31,   102,   103,    -1,    -1,    31,   103,   119,    31,
     102,   103,    -1,    31,   103,    -1,   120,   121,    -1,   121,
      -1,   124,    -1,   139,    -1,   129,    17,    -1,    86,    -1,
      -1,   122,   135,    -1,   123,    -1,   107,    -1,    55,   129,
      17,    -1,    55,   129,     1,    -1,   125,    -1,   136,    -1,
     138,    -1,   126,   121,    -1,    46,    32,   127,    17,   128,
      17,   129,    33,    -1,    46,    32,   127,    17,   128,    17,
     129,     1,    -1,    46,   127,    17,   128,    17,   129,    33,
      -1,    46,     1,   127,    17,   128,    17,   129,    33,    -1,
      46,    32,    17,   128,    17,   129,    33,    -1,    46,    32,
      17,   128,    17,   129,     1,    -1,    46,    17,   128,    17,
     129,    33,    -1,    46,     1,    17,   128,    17,   129,    33,
      -1,    46,    32,   127,    17,    17,   129,    33,    -1,    46,
      32,   127,    17,   128,    17,    33,    -1,    46,    32,   127,
      17,    17,    33,    -1,    46,    32,    17,   128,    17,    33,
      -1,    46,    32,    17,    17,   129,    33,    -1,    46,    32,
      17,    17,    33,    -1,    16,    11,    47,   129,    -1,    16,
      11,   129,    -1,    16,    11,     1,   129,    -1,    11,    47,
     129,    -1,    11,   129,    -1,    11,     1,   129,    -1,    11,
      -1,   129,    25,   129,    -1,   129,    26,   129,    -1,   129,
      39,   129,    -1,   129,    42,   129,    -1,   129,    44,   129,
      -1,    45,   129,    -1,    32,   128,    33,    -1,   128,    35,
     128,    -1,   128,    36,   128,    -1,   132,    -1,   134,    -1,
     131,    25,   131,    -1,   131,    26,   131,    -1,   131,    39,
     131,    -1,   131,    42,   131,    -1,   131,    44,   131,    -1,
      45,   131,    -1,    32,   130,    33,    -1,   130,    35,   130,
      -1,   130,    36,   130,    -1,     1,   131,    -1,    32,   130,
       1,    -1,     1,   130,    33,    -1,   134,    -1,   133,    47,
     134,    -1,   133,    58,    11,    -1,   145,    -1,    11,    -1,
      37,    -1,    41,    -1,    38,    -1,    40,    -1,    53,    -1,
      54,    -1,   133,    -1,   134,    30,   134,    -1,   134,    31,
     134,    -1,   134,    43,   134,    -1,   134,    48,   134,    -1,
      32,   134,    33,    -1,   102,   134,    -1,    22,   120,    23,
      -1,    22,    23,    -1,   137,   121,    -1,    49,    32,   128,
      33,    -1,    49,    32,   128,     1,    -1,    49,   128,    33,
      -1,    49,     1,   128,    33,    -1,    57,   121,   137,    17,
      -1,   144,   121,    -1,   144,   121,    68,   121,    -1,   140,
      -1,    60,    32,   142,    33,    22,   141,    23,    -1,    60,
       1,   142,    33,    22,   141,    23,    -1,    60,    32,   142,
       1,    22,   141,    23,    -1,    60,    32,   142,    33,    22,
     141,     1,    -1,    60,    32,   142,    33,     1,   141,    23,
      -1,    63,    32,   143,    33,    12,   121,    61,    17,   141,
      -1,    63,    32,   143,    33,    12,   121,     1,    17,   141,
      -1,    62,    12,   121,    61,    17,    -1,    62,    12,   121,
       1,    17,    -1,   128,    -1,   129,    -1,   130,    -1,   131,
      -1,    50,    32,   128,    33,    -1,    50,    32,   128,     1,
      -1,    50,   128,    33,    -1,    50,     1,   128,    33,    -1,
      51,   146,   147,    52,    -1,   145,    -1,    11,    -1,    11,
      -1,    11,    12,   148,    -1,   148,   149,    -1,   149,    -1,
      12,   134,    -1,     1,   134,    -1,    11,    12,   134,    -1,
      11,   134,    -1,    11,     1,   134,    -1,   151,   152,    -1,
      56,    11,    -1,    79,    98,    27,    -1,    98,    27,    -1,
      79,    27,    -1,    27,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const unsigned short int yyrline[] =
{
       0,   176,   176,   181,   182,   185,   186,   187,   193,   203,
     221,   230,   239,   245,   259,   264,   268,   273,   277,   281,
     285,   289,   296,   305,   306,   307,   313,   315,   317,   324,
     326,   328,   335,   343,   347,   356,   358,   361,   369,   403,
     407,   439,   444,   462,   466,   477,   481,   482,   483,   484,
     489,   490,   494,   495,   500,   501,   502,   506,   507,   508,
     509,   510,   518,   519,   520,   521,   528,   529,   530,   531,
     539,   540,   541,   547,   548,   555,   557,   559,   561,   566,
     568,   574,   576,   578,   580,   582,   589,   600,   602,   608,
     610,   616,   625,   634,   641,   652,   660,   665,   667,   672,
     674,   676,   684,   684,   701,   720,   722,   724,   726,   728,
     733,   749,   753,   754,   757,   758,   759,   767,   776,   789,
     799,   807,   825,   827,   828,   837,   838,   842,   843,   850,
     871,   873,   877,   894,   901,   903,   903,   911,   918,   919,
     925,   926,   927,   928,   929,   929,   930,   931,   938,   939,
     942,   943,   944,   947,   953,   959,   961,   963,   966,   972,
     974,   976,   981,   986,   989,   992,   995,   999,  1007,  1008,
    1009,  1010,  1011,  1012,  1013,  1018,  1019,  1020,  1021,  1022,
    1023,  1024,  1025,  1026,  1029,  1030,  1033,  1034,  1035,  1036,
    1037,  1038,  1039,  1040,  1041,  1042,  1043,  1044,  1049,  1053,
    1059,  1064,  1065,  1080,  1087,  1093,  1100,  1103,  1104,  1108,
    1145,  1154,  1161,  1168,  1175,  1177,  1183,  1184,  1189,  1192,
    1193,  1194,  1195,  1198,  1200,  1201,  1204,  1207,  1208,  1209,
    1210,  1211,  1220,  1224,  1225,  1226,  1231,  1232,  1236,  1237,
    1240,  1241,  1242,  1243,  1246,  1249,  1250,  1253,  1254,  1257,
    1258,  1261,  1262,  1263,  1264,  1265,  1267,  1273,  1284,  1287,
    1290,  1293
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals. */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "TRY", "CATCH", "NSEXception",
  "NUllPointerException", "OUtOfBoundryException", "CAstException",
  "FINALLY", "AT_INTERFACE", "IDENTIFIER", "SEMI_COLUMN", "NSSTRING",
  "FLOAT", "CHAR", "INT", "SEMI_COMA", "ID", "AT_PUBLIC", "AT_PROTECTED",
  "AT_PRIVATE", "OPEN_S", "CLOSE_S", "COMMA", "LESS_THAN", "MORE_THAN",
  "AT_END", "CONST", "VOID", "PLUS", "MINUS", "OPEN_P", "CLOSE_P",
  "AT_IMPLEMENTATION", "AND_AND", "OR_OR", "STRING_VAL", "FLOAT_VAL",
  "LESS_OR_EQUAL", "CHAR_VAL", "INT_VAL", "MORE_OR_EQUAL", "MULTI",
  "EQUAL_EQUAL", "NOT_EQUAL", "FOR", "EQUAL", "DIV", "WHILE", "IF",
  "OPEN_ARR", "CLOSE_ARR", "TRUE", "FALSE", "RETURN", "AT_PROTOCOL", "DO",
  "DOT", "SYMBOL", "SWITCH", "BREAK", "DEFAULT", "CASE", "STRUCT",
  "TYPEDEF", "ENUM", "if_h", "ELSE", "expr_1", "p_type_expr_prec",
  "long_id_prec", "$accept", "program", "components", "component",
  "class_interface", "class_interface_header", "class_interface_body",
  "protocol_reference_list", "ids_list", "instance_variables",
  "instance_variable_declarations", "instance_variable_declaration",
  "variable_declaration_list", "visibility_specification",
  "variable_declaration", "Enum", "structrule", "variable_declarations",
  "ArrayOne", "array_body", "ArrayN", "Multi", "array_body2", "type",
  "simple_type", "complex_type", "interface_declaration_list",
  "interface_declaration", "class_method_declaration",
  "instance_method_declaration", "p_type", "method_selector", "@1",
  "parameter_list", "parameter", "try_catch", "catch_statment",
  "Exception_type", "class_implementation", "class_implementation_header",
  "class_implementation_body", "implementation_definition_list",
  "implementation_definition", "class_implementation_definition",
  "class_implementation_definition_header",
  "instance_implementation_definition",
  "instance_implementation_definition_header", "@2", "statement_list",
  "statement", "@3", "return_statement", "loop_statement", "for_loop",
  "for_loop_header", "for_initializer", "logic_expr", "expr",
  "logic_expr2", "expr2", "assign_expr", "long_id", "simple_expr",
  "block_body", "while_loop", "while_loop_header", "do_while_loop",
  "conditional_statement", "switch", "switch_body", "switch_statement",
  "case_statement", "if_header", "message_call", "sender", "message",
  "argument_list", "argument", "protocol", "protocol_header",
  "protocol_body", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const unsigned short int yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const unsigned char yyr1[] =
{
       0,    72,    73,    74,    74,    75,    75,    75,    76,    77,
      77,    77,    77,    77,    78,    78,    78,    78,    78,    78,
      78,    78,    79,    80,    80,    80,    81,    81,    81,    82,
      82,    82,    83,    84,    84,    85,    85,    85,    86,    86,
      86,    86,    86,    86,    86,    86,    86,    86,    86,    86,
      87,    87,    88,    88,    89,    89,    89,    89,    89,    89,
      89,    89,    90,    90,    90,    90,    91,    91,    91,    91,
      92,    92,    92,    93,    93,    94,    94,    94,    94,    95,
      95,    96,    96,    96,    96,    96,    97,    98,    98,    99,
      99,   100,   100,   100,   100,   101,   101,   101,   101,   102,
     102,   102,   104,   103,   103,   105,   105,   105,   105,   105,
     106,   107,   108,   108,   109,   109,   109,   110,   111,   111,
     111,   111,   112,   112,   112,   113,   113,   114,   114,   115,
     116,   116,   116,   117,   118,   119,   118,   118,   120,   120,
     121,   121,   121,   121,   122,   121,   121,   121,   123,   123,
     124,   124,   124,   125,   126,   126,   126,   126,   126,   126,
     126,   126,   126,   126,   126,   126,   126,   126,   127,   127,
     127,   127,   127,   127,   127,   128,   128,   128,   128,   128,
     128,   128,   128,   128,   129,   129,   130,   130,   130,   130,
     130,   130,   130,   130,   130,   130,   130,   130,   131,   132,
     133,   133,   133,   134,   134,   134,   134,   134,   134,   134,
     134,   134,   134,   134,   134,   134,   135,   135,   136,   137,
     137,   137,   137,   138,   139,   139,   139,   140,   140,   140,
     140,   140,   141,   141,   141,   141,   142,   142,   143,   143,
     144,   144,   144,   144,   145,   146,   146,   147,   147,   148,
     148,   149,   149,   149,   149,   149,   150,   151,   152,   152,
     152,   152
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const unsigned char yyr2[] =
{
       0,     2,     1,     2,     1,     1,     1,     1,     2,     4,
       4,     3,     3,     2,     4,     3,     3,     3,     2,     2,
       2,     1,     3,     1,     3,     3,     3,     3,     2,     2,
       1,     1,     2,     2,     1,     1,     1,     1,     3,     3,
       5,     5,     4,     4,     6,     6,     1,     1,     1,     1,
       6,     7,     6,     7,     3,     4,     5,     6,     5,     4,
       7,     6,     9,     6,    10,     9,     3,     1,     7,     5,
       7,     4,     8,     6,     4,     3,     1,     5,     3,     1,
       1,     1,     1,     1,     1,     1,     2,     2,     1,     1,
       1,     4,     4,     3,     3,     4,     3,     4,     3,     3,
       3,     3,     0,     4,     1,     3,     4,     4,     3,     1,
       2,     3,     7,     2,     1,     1,     1,     2,     4,     4,
       3,     2,     3,     2,     2,     2,     1,     1,     1,     2,
       0,     2,     3,     2,     3,     0,     6,     2,     2,     1,
       1,     1,     2,     1,     0,     2,     1,     1,     3,     3,
       1,     1,     1,     2,     8,     8,     7,     8,     7,     7,
       6,     7,     7,     7,     6,     6,     6,     5,     4,     3,
       4,     3,     2,     3,     1,     3,     3,     3,     3,     3,
       2,     3,     3,     3,     1,     1,     3,     3,     3,     3,
       3,     2,     3,     3,     3,     2,     3,     3,     1,     3,
       3,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       3,     3,     3,     3,     3,     2,     3,     2,     2,     4,
       4,     3,     4,     4,     2,     4,     1,     7,     7,     7,
       7,     7,     9,     9,     5,     5,     1,     1,     1,     1,
       4,     4,     3,     4,     4,     1,     1,     1,     3,     2,
       1,     2,     2,     3,     2,     3,     2,     2,     3,     2,
       2,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const unsigned short int yydefact[] =
{
       0,     0,     0,     0,     0,     2,     4,     5,     0,     6,
       0,     7,     0,     0,     0,   257,     1,     3,     0,     0,
      21,     0,     0,     8,     0,     0,     0,    88,    89,    90,
       0,     0,   130,   117,   130,   126,   127,     0,   128,     0,
     261,     0,     0,   256,     0,    12,    11,     0,   120,     0,
       0,    84,    83,    82,    81,    37,    36,    35,     0,    85,
       0,     0,     0,     0,    30,    31,     0,    34,    46,    47,
      48,    49,     0,    79,    80,    23,     0,     0,   104,     0,
       0,     0,     0,     0,    18,     0,     0,    19,     0,    20,
      87,     0,   131,     0,   135,   123,   130,   124,   125,     0,
     129,   133,   260,     0,   259,    10,     9,   119,   118,    86,
       0,     0,     0,     0,    27,    26,    29,    33,    32,     0,
       0,     0,    22,     0,   102,     0,     0,    94,    93,     0,
      98,    96,    15,     0,    16,    17,   132,   134,     0,   122,
       0,   202,   217,     0,   203,   205,   206,   204,     0,     0,
       0,     0,   207,   208,     0,     0,     0,   143,     0,   147,
       0,   139,     0,   146,   140,   150,     0,     0,   184,   209,
     185,   151,     0,   152,   141,   226,     0,   201,   258,     0,
       0,     0,     0,    39,    38,     0,     0,     0,    24,    25,
     100,     0,   101,    99,    92,    91,    97,    95,    14,     0,
       0,   209,     0,     0,     0,     0,     0,     0,     0,     0,
     202,     0,     0,     0,     0,     0,     0,     0,   246,   245,
       0,     0,     0,     0,     0,   215,   216,   138,   145,   153,
     142,     0,     0,     0,     0,     0,     0,   218,   224,    43,
      42,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      71,     0,     0,     0,   103,   109,     0,     0,     0,   111,
     214,     0,     0,     0,     0,   172,     0,     0,     0,     0,
       0,     0,     0,     0,   185,   180,   221,     0,     0,     0,
       0,     0,     0,     0,     0,     0,   242,   247,     0,   149,
     148,     0,   236,   237,     0,     0,   199,   200,   210,   211,
     212,   213,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    41,    40,     0,     0,     0,     0,   110,     0,     0,
     136,     0,   113,     0,     0,   173,   171,     0,     0,   169,
       0,     0,     0,     0,     0,     0,   222,   220,   219,   182,
     183,   175,   176,   177,   178,   179,   243,   241,   240,     0,
     244,   223,     0,     0,     0,   225,    45,    44,     0,    52,
       0,     0,     0,     0,    54,     0,    50,    63,     0,     0,
       0,     0,     0,     0,    76,    74,     0,     0,   108,   105,
       0,     0,     0,   170,   168,   181,     0,   167,     0,     0,
       0,     0,     0,     0,     0,     0,     0,   250,     0,     0,
       0,     0,     0,    59,    53,     0,     0,    55,     0,    51,
       0,     0,     0,     0,    67,     0,    70,     0,     0,   107,
     106,   114,   115,   116,     0,     0,     0,   160,   166,   165,
       0,   164,     0,     0,     0,   252,     0,     0,   254,   251,
     249,     0,     0,     0,     0,     0,     0,     0,     0,    58,
       0,    56,     0,     0,    73,     0,     0,     0,    75,    72,
       0,    78,     0,   161,     0,   159,   158,   162,   163,     0,
     156,   255,   253,     0,     0,   228,   229,   231,   230,   227,
      61,     0,    57,    62,     0,     0,    65,     0,    66,     0,
       0,   157,   155,   154,     0,     0,     0,     0,   238,   239,
     198,     0,    60,    64,     0,     0,    77,   112,     0,     0,
       0,   195,     0,     0,   198,   191,     0,     0,     0,     0,
       0,     0,     0,     0,    69,     0,   235,   234,   197,   196,
     192,   193,   194,   186,   187,   188,   189,   190,     0,     0,
       0,    68,     0,     0,     0,     0,   233,   232
};

/* YYDEFGOTO[NTERM-NUM]. */
static const short int yydefgoto[] =
{
      -1,     4,     5,     6,     7,     8,    23,    24,    76,    25,
      63,    64,    65,    66,   157,    68,    69,   243,    70,   413,
      71,   187,   373,    72,    73,    74,    26,    27,    28,    29,
     158,    81,   191,   254,   255,   159,   259,   424,     9,    10,
      33,    34,    35,    36,    37,    38,    39,   138,   160,   161,
     162,   163,   164,   165,   166,   208,   292,   214,   498,   513,
     168,   169,   170,   100,   171,   172,   173,   174,   175,   443,
     294,   501,   176,   177,   220,   288,   396,   397,    11,    12,
      43
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -387
static const short int yypact[] =
{
       7,    28,    55,    92,   123,     7,  -387,  -387,   486,  -387,
     447,  -387,   521,   843,   403,  -387,  -387,  -387,   641,   100,
    -387,   207,   207,  -387,   416,   575,   597,  -387,  -387,  -387,
     207,   207,   602,  -387,   616,  -387,  -387,    99,  -387,    99,
    -387,   655,   660,  -387,   134,  -387,   174,   181,  -387,   184,
     167,  -387,  -387,  -387,  -387,  -387,  -387,  -387,  1040,  -387,
     206,   161,   209,   589,  -387,   183,   183,  -387,  -387,  -387,
    -387,  -387,   240,  -387,  -387,  -387,   257,  1040,   276,  1040,
     281,    47,   281,    51,  -387,   700,   720,  -387,   725,  -387,
    -387,   281,  -387,   281,   258,  -387,   740,  -387,  -387,   469,
    -387,  -387,  -387,   747,  -387,  -387,  -387,  -387,  -387,  -387,
     332,   294,   341,   100,  -387,  -387,  -387,  -387,   183,    53,
     370,   373,  -387,   369,  -387,    50,   155,  -387,  -387,   158,
    -387,  -387,  -387,   757,  -387,  -387,  -387,  -387,   398,  -387,
      99,   167,  -387,   728,  -387,  -387,  -387,  -387,   189,   449,
     808,    29,  -387,  -387,  1047,   585,    30,  -387,  1047,  -387,
     527,  -387,    99,  -387,  -387,  -387,   585,   420,  -387,   172,
     305,  -387,   585,  -387,  -387,  -387,   585,  -387,  -387,    25,
     784,   100,   222,  -387,  -387,  1047,   223,   101,  -387,  -387,
    -387,   115,  -387,  -387,  -387,  -387,  -387,  -387,  -387,   115,
     154,   401,   514,   488,   203,   450,   826,   555,   446,   663,
    -387,   663,  1047,   525,   331,   663,   663,   775,  -387,  -387,
     462,   236,   430,   826,   826,   305,  -387,  -387,  -387,  -387,
    -387,  1047,   501,  1047,  1047,  1047,  1047,  -387,   457,  -387,
    -387,  1047,  1040,   652,   503,   286,   516,    84,   480,   492,
    -387,   541,   538,   572,   302,  -387,   281,   553,    99,  -387,
    -387,   826,   577,   728,  1047,  -387,   846,   663,   190,   708,
     578,   826,   796,   106,   514,  -387,  -387,   826,   826,  1047,
    1047,  1047,  1047,  1047,   855,   233,  -387,   591,   537,  -387,
    -387,   580,   290,   331,   571,    58,   305,  -387,   297,   297,
    -387,  -387,   585,   143,   604,   268,  1040,   607,   343,   610,
     613,  -387,  -387,   102,   615,   753,   592,  -387,    85,   115,
    -387,   636,  -387,   288,   826,  -387,  -387,   728,  1047,  -387,
     880,  1047,   871,   316,   785,   342,  -387,  -387,   884,   360,
     360,  -387,  -387,  -387,  -387,  -387,  -387,  -387,   884,   389,
    -387,  -387,   626,   631,   200,  -387,  -387,  -387,   399,  -387,
     277,   647,   459,  1047,  -387,   642,  -387,  -387,   661,   648,
    1065,  1065,   671,   421,  -387,  -387,   378,   115,  -387,  -387,
     665,  1047,   352,  -387,  -387,  -387,   669,  -387,   677,   894,
     917,   400,  1047,  1047,   940,  1047,    46,  -387,   364,   364,
     364,   364,  1047,  -387,  -387,   476,  1047,  -387,   269,  -387,
     963,   659,     2,   472,  -387,   513,  -387,   676,   986,  -387,
    -387,  -387,  -387,  -387,   680,   685,  1047,  -387,  -387,  -387,
     107,  -387,   689,  1009,   693,   305,   728,  1047,   305,   305,
    -387,   721,   703,   709,   715,   735,   111,   272,  1047,  -387,
     301,  -387,   746,   530,  -387,   731,   755,  1072,  -387,  -387,
    1065,  -387,    99,  -387,   756,  -387,  -387,  -387,  -387,   121,
    -387,   305,   305,   585,  1027,  -387,  -387,  -387,  -387,  -387,
    -387,   337,  -387,  -387,   763,   726,  -387,    24,  -387,   546,
     154,  -387,  -387,  -387,    10,   683,   683,  1047,   539,   423,
     305,   759,  -387,  -387,  1047,   749,  -387,  -387,   786,   788,
     903,   423,   241,   423,   514,  -387,  1027,  1027,  1047,  1047,
    1047,  1047,  1047,   802,  -387,   768,  -387,  -387,  -387,  -387,
    -387,   360,   360,  -387,  -387,  -387,  -387,  -387,   585,  1047,
      15,  -387,   799,   801,   364,   364,  -387,  -387
};

/* YYPGOTO[NTERM-NUM].  */
static const short int yypgoto[] =
{
    -387,  -387,  -387,   815,  -387,  -387,  -387,   809,  -112,   260,
    -387,   761,   762,  -387,   -16,  -387,  -387,  -387,  -387,  -364,
    -387,  -387,  -387,   -54,  -387,  -387,     3,    -4,  -387,  -387,
     -12,    -1,  -387,  -387,  -282,  -387,   344,  -387,  -387,  -387,
    -387,   803,   -22,  -387,  -387,  -387,  -387,  -387,  -387,  -152,
    -387,  -387,  -387,  -387,  -387,   159,   197,   -99,  -386,  -259,
    -387,   -98,   -65,   -34,  -387,   611,  -387,  -387,  -387,  -367,
     617,  -387,  -387,  -145,  -387,  -387,  -387,   454,  -387,  -387,
    -387
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -249
static const short int yytable[] =
{
     167,   182,    67,   222,   110,   101,   219,   415,   227,    80,
      82,   508,    98,   218,   229,    42,   542,     1,    91,    93,
     237,    83,    90,   123,   238,   125,   239,    86,    88,    92,
      94,   223,   444,   445,   446,   218,   378,   379,    90,    13,
     218,     2,   240,   455,   103,   201,   453,   393,   127,   117,
      67,   192,   130,   151,   183,   221,   167,   394,   395,   353,
     201,   167,   224,     3,   128,   505,    14,   167,   131,   245,
     184,   509,   241,   167,    98,   151,   543,   167,   202,   126,
     151,   129,    90,   193,    90,   311,   376,   201,   133,   125,
     136,   354,   137,   225,   419,   420,   489,   377,  -248,    90,
     185,   312,   117,    15,   186,   265,   200,   337,   465,   510,
     512,    75,   478,   275,   233,   234,    77,    79,   250,   367,
     247,    99,   492,    16,   293,   293,   244,   235,   228,    90,
     531,   532,   236,   201,   479,   201,   201,   201,   201,   338,
     466,   277,   278,   201,   356,   105,   274,    79,   251,   368,
     355,   274,   252,   369,   493,   123,   194,   125,   257,   196,
     357,   123,   125,   258,   325,   326,   296,   329,   298,   299,
     300,   301,   195,   233,   234,   197,   303,   546,   547,   253,
     341,   342,   343,   344,   345,   106,   235,   256,   304,   307,
     203,   236,   107,   360,    50,   108,    51,    52,    53,    54,
     204,   400,   274,   167,   263,   205,   206,   331,    77,   123,
     109,    58,    59,   125,   210,   499,   374,   111,    78,   231,
    -174,   207,   401,   120,   322,   277,   278,   112,   383,   384,
     232,   113,   386,   388,   347,   143,   511,   289,   515,    79,
     144,   145,   529,   146,   147,   246,   121,    60,    61,    62,
     264,   119,   361,   290,   151,   320,   152,   153,   120,   533,
     534,   535,   536,   537,   248,   201,   348,   219,   277,   278,
      32,   414,   414,   123,   530,   249,   516,   517,   120,    75,
    -137,   121,   425,   122,    85,   359,   451,   120,   124,   480,
     430,   432,    78,   434,   404,   201,   201,   201,   408,   233,
     234,   121,   233,   234,   201,   381,   253,   253,   201,   309,
     121,   414,   235,   318,   319,   235,   180,   236,   482,   461,
     236,   494,   123,   277,   278,   277,   278,   464,   435,   438,
     439,   233,   234,   389,   469,   233,   234,   447,   201,   201,
     235,   450,   219,   179,   235,   236,   213,   217,   235,   236,
     201,   277,   278,   236,   502,   363,   279,   280,   488,   392,
     364,   414,   262,   181,   253,   253,   270,   233,   234,   426,
     281,   471,   472,   282,   167,   283,   201,   277,   278,    77,
     235,   188,   123,   481,   189,   236,   540,   277,   278,    50,
     393,    51,    52,    53,    54,  -249,  -249,   201,   201,   201,
     394,   395,   190,   268,    47,   524,   272,    59,   273,   500,
      79,   402,   284,   285,    48,    49,   403,   433,   201,   201,
     201,   201,   201,   201,   201,  -121,   441,   442,   490,   199,
     500,   514,   500,  -121,  -121,   277,   278,   230,    18,   167,
     541,   123,   125,    84,   417,   418,    21,    22,   518,   519,
     209,   500,   500,   500,   500,   500,   500,   500,   323,   232,
     210,   266,   520,   271,   330,   521,   333,   522,   335,    18,
      77,   406,   140,   287,   339,   340,   407,    30,    31,   149,
     141,   211,    51,    52,    53,    54,   144,   145,   448,   146,
     147,  -144,   142,   449,   212,   456,   457,    58,    59,   204,
     151,   143,   152,   153,   205,   261,   144,   145,    18,   146,
     147,    19,   297,    20,   308,   148,    21,    22,   149,   150,
     151,   382,   152,   153,   154,   302,   155,   310,    77,   156,
     140,   391,   313,    60,    61,    62,   458,   457,   141,   314,
      51,    52,    53,    54,   233,   234,    19,   260,    40,  -144,
     226,    21,    22,   484,   457,    58,    59,   235,   276,   143,
     277,   278,   236,   315,   144,   145,   204,   146,   147,   506,
     457,   205,   269,   148,   516,   517,   149,   150,   151,   316,
     152,   153,   154,   317,   155,   321,    77,   156,   140,   350,
     114,    60,    61,    62,   324,   334,   141,   351,    51,    52,
      53,    54,    87,   349,   352,    21,    22,  -144,    55,    56,
      57,   -28,   115,    58,    59,   358,   -28,   143,   362,   -28,
     -28,   365,   144,   145,    89,   146,   147,    21,    22,    95,
     366,   148,    30,    31,   149,   150,   151,   370,   152,   153,
     154,   380,   155,    97,   375,   156,    30,    31,   398,    60,
      61,    62,    50,   399,    51,    52,    53,    54,   405,   409,
      55,    56,    57,    50,    77,    51,    52,    53,    54,    58,
      59,   421,   422,   423,   141,   305,    51,    52,    53,    54,
     306,    59,   102,   410,   495,    21,    22,   104,   416,   411,
      21,    22,    59,   459,   141,   267,    51,    52,    53,    54,
     144,   145,   427,   146,   147,    60,    61,    62,   212,    77,
     428,   454,    59,   462,   151,   496,   152,   153,   463,   210,
     144,   145,   467,   146,   147,   332,   470,   132,   497,    77,
      21,    22,   475,   473,   151,   474,   152,   153,   476,   141,
     267,    51,    52,    53,    54,   144,   145,   134,   146,   147,
      21,    22,   135,   212,    77,    21,    22,    59,   477,   151,
     143,   152,   153,   483,   210,   144,   145,   139,   146,   147,
      30,    31,   486,   504,   178,   371,   372,    21,    22,   151,
     503,   152,   153,   485,   198,   143,    77,    21,    22,   491,
     144,   145,   523,   146,   147,    50,   210,    51,    52,    53,
      54,   525,   390,   526,   151,   527,   152,   153,   286,   215,
     277,   278,   242,    59,   538,   539,   544,   267,   545,   210,
      17,    41,   144,   145,   116,   146,   147,    77,   118,   336,
     212,   277,   278,   291,   507,    96,   151,   210,   152,   153,
     216,   295,     0,     0,    44,   144,   145,   327,   146,   147,
     440,     0,     0,   212,    45,    46,     0,   210,   267,   151,
       0,   152,   153,   144,   145,   -13,   146,   147,   -13,     0,
     -13,   212,    77,   -13,   -13,     0,     0,   151,   143,   152,
     153,     0,   210,   144,   145,     0,   146,   147,   346,     0,
     277,   278,     0,   328,     0,    77,     0,   151,     0,   152,
     153,     0,     0,   143,   387,   210,     0,     0,   144,   145,
       0,   146,   147,   385,     0,   277,   278,  -181,    77,  -181,
    -181,     0,   151,     0,   152,   153,   143,   429,   210,     0,
       0,   144,   145,     0,   146,   147,   528,     0,   516,   517,
       0,   436,     0,     0,     0,   151,     0,   152,   153,   143,
     431,   210,   437,     0,   144,   145,     0,   146,   147,     0,
       0,     0,     0,     0,    77,     0,     0,     0,   151,     0,
     152,   153,   143,     0,   210,     0,     0,   144,   145,     0,
     146,   147,     0,     0,     0,     0,   452,    77,     0,     0,
       0,   151,     0,   152,   153,   143,     0,   210,     0,     0,
     144,   145,     0,   146,   147,     0,     0,     0,   460,     0,
      77,     0,     0,     0,   412,     0,   152,   153,   143,     0,
     210,     0,     0,   144,   145,     0,   146,   147,   495,     0,
       0,     0,     0,     0,     0,     0,     0,   151,   210,   152,
     153,   143,   468,     0,     0,     0,   144,   145,    77,   146,
     147,    50,     0,    51,    52,    53,    54,     0,   210,   496,
     151,     0,   152,   153,   144,   145,    77,   146,   147,    59,
       0,     0,   497,    77,     0,     0,   210,     0,   151,   143,
     152,   153,     0,   210,   144,   145,     0,   146,   147,     0,
       0,     0,     0,     0,     0,     0,     0,   143,   151,     0,
     152,   153,   144,   145,   143,   146,   147,     0,     0,   144,
     145,     0,   146,   147,     0,     0,   412,     0,   152,   153,
       0,     0,     0,   487,     0,   152,   153
};

static const short int yycheck[] =
{
      99,   113,    18,   155,    58,    39,   151,   371,   160,    21,
      22,     1,    34,    11,   166,    12,     1,    10,    30,    31,
     172,    22,    26,    77,   176,    79,     1,    24,    25,    30,
      31,     1,   399,   400,   401,    11,   318,   319,    42,    11,
      11,    34,    17,    41,    41,   143,   410,     1,     1,    65,
      66,     1,     1,    51,     1,   154,   155,    11,    12,     1,
     158,   160,    32,    56,    17,    41,    11,   166,    17,   181,
      17,    61,    47,   172,    96,    51,    61,   176,   143,    80,
      51,    82,    86,    33,    88,     1,     1,   185,    85,   143,
      91,    33,    93,   158,   376,   377,   460,    12,    52,   103,
      47,    17,   118,    11,    51,   204,   140,     1,     1,   495,
     496,    11,     1,   212,    30,    31,     1,    32,    17,    17,
     185,    22,     1,     0,   223,   224,   180,    43,   162,   133,
     516,   517,    48,   231,    23,   233,   234,   235,   236,    33,
      33,    35,    36,   241,     1,    11,   211,    32,    47,    47,
     302,   216,    51,    51,    33,   209,     1,   211,     4,     1,
      17,   215,   216,     9,   263,   264,   231,   266,   233,   234,
     235,   236,    17,    30,    31,    17,   241,   544,   545,   191,
     279,   280,   281,   282,   283,    11,    43,   199,   242,   243,
       1,    48,    11,   305,    11,    11,    13,    14,    15,    16,
      11,     1,   267,   302,     1,    16,    17,    17,     1,   263,
      43,    28,    29,   267,    11,   474,   315,    11,    11,    47,
      17,    32,    22,     1,   258,    35,    36,    66,   327,   328,
      58,    22,   331,   332,     1,    32,   495,     1,   497,    32,
      37,    38,     1,    40,    41,    23,    24,    64,    65,    66,
      47,    11,   306,    17,    51,   256,    53,    54,     1,   518,
     519,   520,   521,   522,    41,   363,    33,   412,    35,    36,
      10,   370,   371,   327,    33,    52,    35,    36,     1,    11,
      22,    24,   381,    26,    24,    17,    17,     1,    12,    17,
     389,   390,    11,   392,    17,   393,   394,   395,   363,    30,
      31,    24,    30,    31,   402,    17,   318,   319,   406,    23,
      24,   410,    43,    11,    12,    43,    22,    48,    17,   418,
      48,   473,   376,    35,    36,    35,    36,   426,   393,   394,
     395,    30,    31,    17,   433,    30,    31,   402,   436,   437,
      43,   406,   487,    11,    43,    48,   149,   150,    43,    48,
     448,    35,    36,    48,    17,    12,    25,    26,   457,    17,
      17,   460,   203,    22,   376,   377,   207,    30,    31,    17,
      39,   436,   437,    42,   473,    44,   474,    35,    36,     1,
      43,    11,   436,   448,    11,    48,   538,    35,    36,    11,
       1,    13,    14,    15,    16,    35,    36,   495,   496,   497,
      11,    12,    33,   206,     1,   504,   209,    29,   211,   474,
      32,    12,   215,   216,    11,    12,    17,    17,   516,   517,
     518,   519,   520,   521,   522,    22,    62,    63,   462,    31,
     495,   496,   497,    30,    31,    35,    36,    17,    22,   538,
     539,   495,   496,    27,    23,    24,    30,    31,    25,    26,
       1,   516,   517,   518,   519,   520,   521,   522,   261,    58,
      11,    11,    39,    17,   267,    42,   269,    44,   271,    22,
       1,    12,     3,    11,   277,   278,    17,    30,    31,    49,
      11,    32,    13,    14,    15,    16,    37,    38,    12,    40,
      41,    22,    23,    17,    45,    23,    24,    28,    29,    11,
      51,    32,    53,    54,    16,    17,    37,    38,    22,    40,
      41,    25,    11,    27,    11,    46,    30,    31,    49,    50,
      51,   324,    53,    54,    55,    68,    57,    11,     1,    60,
       3,   334,    52,    64,    65,    66,    23,    24,    11,    47,
      13,    14,    15,    16,    30,    31,    25,    33,    27,    22,
      23,    30,    31,    23,    24,    28,    29,    43,    33,    32,
      35,    36,    48,    22,    37,    38,    11,    40,    41,    23,
      24,    16,    17,    46,    35,    36,    49,    50,    51,    41,
      53,    54,    55,    11,    57,    32,     1,    60,     3,    52,
       1,    64,    65,    66,    17,    17,    11,    17,    13,    14,
      15,    16,    27,    12,    33,    30,    31,    22,    19,    20,
      21,    22,    23,    28,    29,    11,    27,    32,    11,    30,
      31,    11,    37,    38,    27,    40,    41,    30,    31,    27,
      17,    46,    30,    31,    49,    50,    51,    22,    53,    54,
      55,     5,    57,    27,    52,    60,    30,    31,    22,    64,
      65,    66,    11,    22,    13,    14,    15,    16,    11,    17,
      19,    20,    21,    11,     1,    13,    14,    15,    16,    28,
      29,     6,     7,     8,    11,    23,    13,    14,    15,    16,
      28,    29,    27,    22,     1,    30,    31,    27,    17,    41,
      30,    31,    29,    17,    11,    32,    13,    14,    15,    16,
      37,    38,    33,    40,    41,    64,    65,    66,    45,     1,
      33,    52,    29,    33,    51,    32,    53,    54,    33,    11,
      37,    38,    33,    40,    41,    17,    33,    27,    45,     1,
      30,    31,    23,    12,    51,    32,    53,    54,    23,    11,
      32,    13,    14,    15,    16,    37,    38,    27,    40,    41,
      30,    31,    27,    45,     1,    30,    31,    29,    23,    51,
      32,    53,    54,    17,    11,    37,    38,    27,    40,    41,
      30,    31,    17,    47,    27,    22,    23,    30,    31,    51,
      17,    53,    54,    52,    27,    32,     1,    30,    31,    33,
      37,    38,    33,    40,    41,    11,    11,    13,    14,    15,
      16,    52,    17,    17,    51,    17,    53,    54,    33,     1,
      35,    36,    28,    29,    12,    47,    17,    32,    17,    11,
       5,    12,    37,    38,    63,    40,    41,     1,    66,    33,
      45,    35,    36,   222,   490,    32,    51,    11,    53,    54,
      32,   224,    -1,    -1,     1,    37,    38,     1,    40,    41,
     396,    -1,    -1,    45,    11,    12,    -1,    11,    32,    51,
      -1,    53,    54,    37,    38,    22,    40,    41,    25,    -1,
      27,    45,     1,    30,    31,    -1,    -1,    51,    32,    53,
      54,    -1,    11,    37,    38,    -1,    40,    41,    33,    -1,
      35,    36,    -1,    47,    -1,     1,    -1,    51,    -1,    53,
      54,    -1,    -1,    32,    33,    11,    -1,    -1,    37,    38,
      -1,    40,    41,    33,    -1,    35,    36,    33,     1,    35,
      36,    -1,    51,    -1,    53,    54,    32,    33,    11,    -1,
      -1,    37,    38,    -1,    40,    41,    33,    -1,    35,    36,
      -1,     1,    -1,    -1,    -1,    51,    -1,    53,    54,    32,
      33,    11,    12,    -1,    37,    38,    -1,    40,    41,    -1,
      -1,    -1,    -1,    -1,     1,    -1,    -1,    -1,    51,    -1,
      53,    54,    32,    -1,    11,    -1,    -1,    37,    38,    -1,
      40,    41,    -1,    -1,    -1,    -1,    23,     1,    -1,    -1,
      -1,    51,    -1,    53,    54,    32,    -1,    11,    -1,    -1,
      37,    38,    -1,    40,    41,    -1,    -1,    -1,    22,    -1,
       1,    -1,    -1,    -1,    51,    -1,    53,    54,    32,    -1,
      11,    -1,    -1,    37,    38,    -1,    40,    41,     1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    51,    11,    53,
      54,    32,    33,    -1,    -1,    -1,    37,    38,     1,    40,
      41,    11,    -1,    13,    14,    15,    16,    -1,    11,    32,
      51,    -1,    53,    54,    37,    38,     1,    40,    41,    29,
      -1,    -1,    45,     1,    -1,    -1,    11,    -1,    51,    32,
      53,    54,    -1,    11,    37,    38,    -1,    40,    41,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    32,    51,    -1,
      53,    54,    37,    38,    32,    40,    41,    -1,    -1,    37,
      38,    -1,    40,    41,    -1,    -1,    51,    -1,    53,    54,
      -1,    -1,    -1,    51,    -1,    53,    54
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const unsigned char yystos[] =
{
       0,    10,    34,    56,    73,    74,    75,    76,    77,   110,
     111,   150,   151,    11,    11,    11,     0,    75,    22,    25,
      27,    30,    31,    78,    79,    81,    98,    99,   100,   101,
      30,    31,    81,   112,   113,   114,   115,   116,   117,   118,
      27,    79,    98,   152,     1,    11,    12,     1,    11,    12,
      11,    13,    14,    15,    16,    19,    20,    21,    28,    29,
      64,    65,    66,    82,    83,    84,    85,    86,    87,    88,
      90,    92,    95,    96,    97,    11,    80,     1,    11,    32,
     102,   103,   102,   103,    27,    81,    98,    27,    98,    27,
      99,   102,   103,   102,   103,    27,   113,    27,   114,    22,
     135,   135,    27,    98,    27,    11,    11,    11,    11,    43,
      95,    11,    66,    22,     1,    23,    83,    86,    84,    11,
       1,    24,    26,    95,    12,    95,   103,     1,    17,   103,
       1,    17,    27,    98,    27,    27,   103,   103,   119,    27,
       3,    11,    23,    32,    37,    38,    40,    41,    46,    49,
      50,    51,    53,    54,    55,    57,    60,    86,   102,   107,
     120,   121,   122,   123,   124,   125,   126,   129,   132,   133,
     134,   136,   137,   138,   139,   140,   144,   145,    27,    11,
      22,    22,    80,     1,    17,    47,    51,    93,    11,    11,
      33,   104,     1,    33,     1,    17,     1,    17,    27,    31,
     135,   133,   134,     1,    11,    16,    17,    32,   127,     1,
      11,    32,    45,   128,   129,     1,    32,   128,    11,   145,
     146,   129,   121,     1,    32,   134,    23,   121,   135,   121,
      17,    47,    58,    30,    31,    43,    48,   121,   121,     1,
      17,    47,    28,    89,    95,    80,    23,   134,    41,    52,
      17,    47,    51,   102,   105,   106,   102,     4,     9,   108,
      33,    17,   127,     1,    47,   129,    11,    32,   128,    17,
     127,    17,   128,   128,   134,   129,    33,    35,    36,    25,
      26,    39,    42,    44,   128,   128,    33,    11,   147,     1,
      17,   137,   128,   129,   142,   142,   134,    11,   134,   134,
     134,   134,    68,   134,    95,    23,    28,    95,    11,    23,
      11,     1,    17,    52,    47,    22,    41,    11,    11,    12,
     103,    32,   135,   128,    17,   129,   129,     1,    47,   129,
     128,    17,    17,   128,    17,   128,    33,     1,    33,   128,
     128,   129,   129,   129,   129,   129,    33,     1,    33,    12,
      52,    17,    33,     1,    33,   121,     1,    17,    11,    17,
      80,    95,    11,    12,    17,    11,    17,    17,    47,    51,
      22,    22,    23,    94,   129,    52,     1,    12,   106,   106,
       5,    17,   128,   129,   129,    33,   129,    33,   129,    17,
      17,   128,    17,     1,    11,    12,   148,   149,    22,    22,
       1,    22,    12,    17,    17,    11,    12,    17,   134,    17,
      22,    41,    51,    91,   129,    91,    17,    23,    24,   106,
     106,     6,     7,     8,   109,   129,    17,    33,    33,    33,
     129,    33,   129,    17,   129,   134,     1,    12,   134,   134,
     149,    62,    63,   141,   141,   141,   141,   134,    12,    17,
     134,    17,    23,    91,    52,    41,    23,    24,    23,    17,
      22,   129,    33,    33,   129,     1,    33,    33,    33,   129,
      33,   134,   134,    12,    32,    23,    23,    23,     1,    23,
      17,   134,    17,    17,    23,    52,    17,    51,   129,    91,
     135,    33,     1,    33,   121,     1,    32,    45,   130,   131,
     134,   143,    17,    17,    47,    41,    23,   108,     1,    61,
     130,   131,   130,   131,   134,   131,    35,    36,    25,    26,
      39,    42,    44,    33,   129,    52,    17,    17,    33,     1,
      33,   130,   130,   131,   131,   131,   131,   131,    12,    47,
     121,   129,     1,    61,    17,    17,   141,   141
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
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (0)


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (N)								\
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
    while (0)
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
} while (0)

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)		\
do {								\
  if (yydebug)							\
    {								\
      YYFPRINTF (stderr, "%s ", Title);				\
      yysymprint (stderr,					\
                  Type, Value);	\
      YYFPRINTF (stderr, "\n");					\
    }								\
} while (0)

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_stack_print (short int *bottom, short int *top)
#else
static void
yy_stack_print (bottom, top)
    short int *bottom;
    short int *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (/* Nothing. */; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yy_reduce_print (int yyrule)
#else
static void
yy_reduce_print (yyrule)
    int yyrule;
#endif
{
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu), ",
             yyrule - 1, yylno);
  /* Print the symbols being reduced, and their result.  */
  for (yyi = yyprhs[yyrule]; 0 <= yyrhs[yyi]; yyi++)
    YYFPRINTF (stderr, "%s ", yytname[yyrhs[yyi]]);
  YYFPRINTF (stderr, "-> %s\n", yytname[yyr1[yyrule]]);
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (Rule);		\
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
#  if defined (__GLIBC__) && defined (_STRING_H)
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
#   if defined (__STDC__) || defined (__cplusplus)
yystrlen (const char *yystr)
#   else
yystrlen (yystr)
     const char *yystr;
#   endif
{
  const char *yys = yystr;

  while (*yys++ != '\0')
    continue;

  return yys - yystr - 1;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined (__GLIBC__) && defined (_STRING_H) && defined (_GNU_SOURCE)
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
#   if defined (__STDC__) || defined (__cplusplus)
yystpcpy (char *yydest, const char *yysrc)
#   else
yystpcpy (yydest, yysrc)
     char *yydest;
     const char *yysrc;
#   endif
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
      size_t yyn = 0;
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

#endif /* YYERROR_VERBOSE */



#if YYDEBUG
/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
static void
yysymprint (FILE *yyoutput, int yytype, YYSTYPE *yyvaluep)
#else
static void
yysymprint (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);


# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  switch (yytype)
    {
      default:
        break;
    }
  YYFPRINTF (yyoutput, ")");
}

#endif /* ! YYDEBUG */
/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

#if defined (__STDC__) || defined (__cplusplus)
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
  /* Pacify ``unused variable'' warnings.  */
  (void) yyvaluep;

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
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM);
# else
int yyparse ();
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
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
# if defined (__STDC__) || defined (__cplusplus)
int yyparse (void *YYPARSE_PARAM)
# else
int yyparse (YYPARSE_PARAM)
  void *YYPARSE_PARAM;
# endif
#else /* ! YYPARSE_PARAM */
#if defined (__STDC__) || defined (__cplusplus)
int
yyparse (void)
#else
int
yyparse ()
    ;
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

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  short int yyssa[YYINITDEPTH];
  short int *yyss = yyssa;
  short int *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK   (yyvsp--, yyssp--)

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* When reducing, the number of symbols on the RHS of the reduced
     rule.  */
  int yylen;

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
     have just been pushed. so pushing a state here evens the stacks.
     */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack. Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	short int *yyss1 = yyss;


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
	short int *yyss1 = yyss;
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

/* Do appropriate processing given the current state.  */
/* Read a look-ahead token if we need one and don't already have one.  */
/* yyresume: */

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

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;


  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  yystate = yyn;
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
#line 176 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {Code_Generation b;   ast->print((yyvsp[0].tn),0);cout<<"program: components\n";;}
    break;

  case 3:
#line 181 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"components: components component\n"; (yyval.tn) = ast->addToLastRight((yyvsp[-1].tn), ast->createNode((yyvsp[0].tn),0, componentsListNode));;}
    break;

  case 4:
#line 182 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"components: component\n";			 (yyval.tn) = ast->createNode((yyvsp[0].tn), 0, componentNode);;}
    break;

  case 5:
#line 185 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"component:	class_interface\n";			(yyval.tn) = (yyvsp[0].tn);;}
    break;

  case 6:
#line 186 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"component:	class_implementation\n";	(yyval.tn) = (yyvsp[0].tn);;}
    break;

  case 7:
#line 187 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"component:	protocol\n";				(yyval.tn) = (yyvsp[0].tn);;}
    break;

  case 8:
#line 193 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {
		s->insert_scope((yyvsp[-1].r.str),s->currScope);s->currScope=s->currScope->parent;
		cout<<"class_interface: class_interface_header class_interface_body\n";
		(yyval.tn) =ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn), class_interface);;}
    break;

  case 9:
#line 203 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {
		i=1;

		
		datamember_offset=0;


		datamember_offset=0;

		(yyval.r.str)=(yyvsp[-2].r.str);
		if(s->check_Interface((yyvsp[-2].r.str))!=0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Interface"); 
		else if(s->insertInterfaceInCurrentScope((yyvsp[-2].r.str),(yyvsp[0].r.str))==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Not found inhertance Interface"); 
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope; 
		cout<<"class_interface_header:  AT_INTERFACE IDENTIFIER SEMI_COLUMN IDENTIFIER\n";
		(yyval.tn) =ast->createNode(0,0, class_interface_header_inheretance_Node);;}
    break;

  case 10:
#line 221 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {
		i=1;
		(yyval.r.str)=(yyvsp[-2].r.str);
		if(s->check_Interface((yyvsp[-2].r.str))!=0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Interface");
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;																																		
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"Error",":");
		(yyval.tn) =ast->createNode(0,0, class_interface_header_inheretance_Node);;}
    break;

  case 11:
#line 230 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {
		i=1;
		(yyval.r.str)=(yyvsp[-1].r.str);
		if(s->check_Interface((yyvsp[-1].r.str))!=0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Interface");
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","IDENTIFIER");
		(yyval.tn) =ast->createNode(0,0, class_interface_header_inheretance_Node);;}
    break;

  case 12:
#line 239 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {
		i=1;(yyval.r.str)=(yyvsp[-1].r.str);
		if(s->check_Interface((yyvsp[-1].r.str))!=0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Interface"); 																				Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope; Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing",":");
		(yyval.tn) =ast->createNode(0,0, class_interface_header_inheretance_Node);;}
    break;

  case 13:
#line 245 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {
		datamember_offset=0;
		i=1;
		datamember_offset=0;

		(yyval.r.str)=(yyvsp[0].r.str);
		if(s->check_Interface((yyvsp[0].r.str))!=0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Interface");
		s->insertInterfaceInCurrentScope((yyvsp[0].r.str),"NSObject"); 	
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;
		cout<<"class_interface_header:  AT_INTERFACE IDENTIFIER\n";
		(yyval.tn) =ast->createNode(0,0, class_interface_header_Node);;}
    break;

  case 14:
#line 260 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"class_interface_body:	protocol_reference_list instance_variables	interface_declaration_list	AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode((yyvsp[-3].tn),(yyvsp[-2].tn),class_interface_body_Node), (yyvsp[-1].tn), class_interface_body_Node);
														;}
    break;

  case 15:
#line 265 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"class_interface_body:	protocol_reference_list instance_variables AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn),class_interface_body_Node), 0, class_interface_body_Node);
														;}
    break;

  case 16:
#line 269 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"class_interface_body:	protocol_reference_list 					interface_declaration_list	AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode((yyvsp[-2].tn),0,class_interface_body_Node), (yyvsp[-1].tn), class_interface_body_Node);
														;}
    break;

  case 17:
#line 274 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"class_interface_body:	instance_variables	interface_declaration_list	AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode(0,(yyvsp[-2].tn),class_interface_body_Node), (yyvsp[-1].tn), class_interface_body_Node);;}
    break;

  case 18:
#line 278 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"class_interface_body:	protocol_reference_list 	AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode((yyvsp[-1].tn),0,class_interface_body_Node), 0, class_interface_body_Node);
														;}
    break;

  case 19:
#line 282 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"class_interface_body:instance_variables		 AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode(0,(yyvsp[-1].tn),class_interface_body_Node), 0, class_interface_body_Node);
														;}
    break;

  case 20:
#line 286 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"class_interface_body:interface_declaration_list	AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode(0,0,class_interface_body_Node), (yyvsp[-1].tn), class_interface_body_Node);
														;}
    break;

  case 21:
#line 290 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"class_interface_body:AT_END\n";
														(yyval.tn) = ast->createNode( ast->createNode(0,0,class_interface_body_Node), 0, class_interface_body_Node);
														;}
    break;

  case 22:
#line 296 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"protocol_reference_list: LESS_THAN ids_list MORE_THAN\n";
										(yyval.tn) = (yyvsp[-1].tn);
										;}
    break;

  case 23:
#line 305 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"ids_list:IDENTIFIER\n";									    (yyval.tn) = ast->createNode(0, 0, ids_list_Node);;}
    break;

  case 24:
#line 306 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",","); (yyval.tn) = ast->addToLastRight((yyvsp[-2].tn),ast->createNode(0, 0, ids_list_Node));;}
    break;

  case 25:
#line 307 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"ids_list:ids_list COMMA IDENTIFIER\n";						(yyval.tn) = ast->addToLastRight((yyvsp[-2].tn),ast->createNode(0, 0, ids_list_Node));;}
    break;

  case 26:
#line 313 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"instance_variables:OPEN_S	instance_variable_declaration	CLOSE_S\n";
														(yyval.tn) =(yyvsp[-1].tn) ;}
    break;

  case 27:
#line 315 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","}");
														(yyval.tn) =(yyvsp[-1].tn) ;}
    break;

  case 28:
#line 317 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","}");
														(yyval.tn) =(yyvsp[0].tn) ;}
    break;

  case 29:
#line 324 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"instance_variable_declarations:instance_variable_declarations instance_variable_declaration\n";
																		(yyval.tn) = ast->addToLastRight((yyvsp[-1].tn),ast->createNode((yyvsp[0].tn), 0, instance_variable_declarations_Node));;}
    break;

  case 30:
#line 326 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"instance_variable_declarations:instance_variable_declaration\n";
																		(yyval.tn) = ast->createNode((yyvsp[0].tn), 0, instance_variable_declarations_Node);;}
    break;

  case 31:
#line 328 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"instance_variable_declarations:variable_declaration_list\n";
																		(yyval.tn) = ast->createNode((yyvsp[0].tn), 0, instance_variable_declarations_Node);;}
    break;

  case 32:
#line 335 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"instance_variable_declaration:variable_declaration_list\n";
																	(yyval.tn) = ast->createNode((yyvsp[-1].tn), (yyvsp[0].tn), instance_variable_declaration_Node);
																	;}
    break;

  case 33:
#line 344 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"variable_declaration_list: variable_declaration_list variable_declaration\n";
										(yyval.tn) = ast->addToLastRight((yyvsp[-1].tn),ast->createNode((yyvsp[0].tn), 0, variable_declaration_list_Node));
										;}
    break;

  case 34:
#line 348 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"variable_declaration_list: variable_declaration\n";
										(yyval.tn) = ast->createNode((yyvsp[0].tn), 0, variable_declaration_list_Node);
										;}
    break;

  case 35:
#line 356 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"visibility_specification:AT_PRIVATE\n";
					(yyval.tn) = ast->createNode(0,0, visibility_specification_private_Node);;}
    break;

  case 36:
#line 358 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"visibility_specification:AT_PROTECTED\n";
						(yyval.tn) = ast->createNode(0,0, visibility_specification_protected_Node);;}
    break;

  case 37:
#line 361 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"visibility_specification:AT_PUBLIC\n";
						(yyval.tn) = ast->createNode(0,0, visibility_specification_public_Node);;}
    break;

  case 38:
#line 370 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {



			int offset;


 				if(i==1)
 					offset=datamember_offset++;
 				else
 					offset=function_offset++;
				cout<<"variable_declaration:type IDENTIFIER	SEMI_COMA\n"; 
				Type t=static_cast<Type>((yyvsp[-2].r.type));
				(yyval.tn) = ast->createNode(0,0, variable_declaration_ID);	
				if((yyvsp[-2].r.type)==6){
					if(s->insertVariableInCurrentScope((yyvsp[-1].r.str),(yyvsp[-2].r.str),visability,offset,(yyval.tn)) == 0)	
						Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable redefine");
				}
				else{
					if(s->insertVariableInCurrentScope((yyvsp[-1].r.str),t,visability,offset,(yyval.tn)) == 0) 
						Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable redefine");
				}
				Variable *v=(Variable*)(yyval.tn)->item;
				cout<<v->getoffset();
				(yyval.tn)->expectedType=(yyvsp[-2].tn)->expectedType;;}
    break;

  case 39:
#line 403 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";"); (yyval.tn) = ast->createNode(0,0, variable_declaration_ID);
											(yyval.tn)->expectedType=(yyvsp[-2].tn)->expectedType;;}
    break;

  case 40:
#line 407 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {
		int offset;
		if(i==1)
			offset=datamember_offset++;
 		else
 			offset=function_offset++;
		(yyval.tn) = ast->createNode((yyvsp[-1].tn),0, variable_declaration_ID);
		Type t=static_cast<Type>((yyvsp[-4].r.type));
		if((yyvsp[-4].r.type)==6){
			if(s->insertVariableInCurrentScope((yyvsp[-3].r.str),(yyvsp[-4].r.str),visability,offset,(yyval.tn)) == 0)	
				Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable redefine");
		}
		else{
			if(s->insertVariableInCurrentScope((yyvsp[-3].r.str),t,visability,offset,(yyval.tn)) == 0) 
				Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable redefine");

				(yyval.tn)->expectedType=(yyvsp[-4].tn)->expectedType;
		}

		cout<<"variable_declaration:type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";	
		  /*check expr type less or equal */

		  TEW=TC->TCmultiexpr((yyvsp[-4].tn)->expectedType,(yyvsp[-1].tn)->expectedType);
			if(TEW->Is_Error==true)
					Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"Variable Decleration ",TEW->Error_Warning_Type);


																		;}
    break;

  case 41:
#line 439 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {yyclearin; Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";"); (yyval.tn) = ast->createNode(0,0, variable_declaration_ID);
													(yyval.tn)->expectedType=(yyvsp[-4].tn)->expectedType;;}
    break;

  case 42:
#line 444 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {

		int offset;
 		if(i==1)
 			offset=datamember_offset++;
 		else
 			offset=function_offset++;
		(yyval.tn) = ast->createNode(0,0, variable_declaration_ID);
		Type t=static_cast<Type>((yyvsp[-2].r.type));
		if(s->insertVariableInCurrentScope((yyvsp[-2].r.str),t,visability,offset,(yyval.tn)) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable redefine");

		cout<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";
		(yyval.tn)->expectedType=(yyvsp[-2].tn)->expectedType;	;}
    break;

  case 43:
#line 462 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");	(yyval.tn) = ast->createNode(0,0, variable_declaration_ID);
												(yyval.tn)->expectedType=(yyvsp[-2].tn)->expectedType;;}
    break;

  case 44:
#line 466 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {
		Type t=static_cast<Type>((yyvsp[-4].r.type));if(s->insertVariableInCurrentScope((yyvsp[-4].r.str),t,visability) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable redefine");
		cout<<"variable_declaration:CONST type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";	(yyval.tn) = ast->createNode(0,0, variable_declaration_ID);
		(yyval.tn)->expectedType=(yyvsp[-4].tn)->expectedType;
		TEW=TC->TCmultiexpr((yyvsp[-4].tn)->expectedType,(yyvsp[-1].tn)->expectedType);
			if(TEW->Is_Error==true)
					Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"Variable Decleration ",TEW->Error_Warning_Type);
					;}
    break;

  case 45:
#line 477 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");	(yyval.tn) = ast->createNode(0,0, variable_declaration_ID);
														(yyval.tn)->expectedType=(yyvsp[-4].tn)->expectedType;;}
    break;

  case 46:
#line 481 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout << "Enum \n "; 				(yyval.tn) = ast->createNode(0,0, variable_declaration_enum);;}
    break;

  case 47:
#line 482 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout << "Struct \n "; 				(yyval.tn) = ast->createNode(0,0, variable_declaration_struct);;}
    break;

  case 48:
#line 483 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout << "Array \n" ; 				(yyval.tn) = ast->createNode(0,0, variable_declaration_arrayone);	(yyval.tn)->expectedType=(yyvsp[0].tn)->expectedType;;}
    break;

  case 49:
#line 484 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout <<"Array N \n ";				(yyval.tn) = ast->createNode(0,0, variable_declaration_arrayN);		(yyval.tn)->expectedType=(yyvsp[0].tn)->expectedType;;}
    break;

  case 50:
#line 489 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-5].tn), ast->createNode((yyvsp[-3].tn),0, EnumNode));;}
    break;

  case 51:
#line 490 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-5].tn), ast->createNode((yyvsp[-3].tn),0, EnumNode));;}
    break;

  case 52:
#line 494 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-2].tn),0, structNode);;}
    break;

  case 53:
#line 495 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-3].tn),(yyvsp[-1].tn), structNode);;}
    break;

  case 54:
#line 500 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {;;}
    break;

  case 55:
#line 501 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {;;}
    break;

  case 56:
#line 502 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"variable_declaration:type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";
																		
																	;}
    break;

  case 57:
#line 506 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"variable_declaration:type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";;}
    break;

  case 58:
#line 507 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";;}
    break;

  case 59:
#line 508 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"variable_declaration:CONST type IDENTIFIER	SEMI_COMA\n";;}
    break;

  case 60:
#line 509 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"variable_declaration:CONST type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";;}
    break;

  case 61:
#line 510 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"variable_declaration:CONST type IDENTIFIER	EQUAL simple_expr SEMI_COMA\n";;}
    break;

  case 62:
#line 518 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn) = ast->createNode(0,0, arrayoneNode);	(yyval.tn)->expectedType=(yyvsp[-8].tn)->expectedType;;}
    break;

  case 63:
#line 519 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn) = ast->createNode(0,0, arrayoneNode);	(yyval.tn)->expectedType=(yyvsp[-5].tn)->expectedType;;}
    break;

  case 64:
#line 520 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-2].tn),0, arrayoneNode);	(yyval.tn)->expectedType=(yyvsp[-9].tn)->expectedType;;}
    break;

  case 65:
#line 521 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-2].tn),0, arrayoneNode);	(yyval.tn)->expectedType=(yyvsp[-8].tn)->expectedType;;}
    break;

  case 66:
#line 528 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-2].tn), ast->createNode((yyvsp[0].tn),0, arraybodyNode));;}
    break;

  case 67:
#line 529 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn) =ast->createNode((yyvsp[0].tn),0, arraybodyNode);;}
    break;

  case 68:
#line 530 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-6].tn), ast->createNode((yyvsp[0].tn),0, arraybodyNode));;}
    break;

  case 69:
#line 531 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0, arraybodyNode);;}
    break;

  case 70:
#line 539 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-4].tn),0, ArrayNNode);	(yyval.tn)->expectedType=(yyvsp[-6].tn)->expectedType;;}
    break;

  case 71:
#line 540 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-1].tn),0, ArrayNNode);	(yyval.tn)->expectedType=(yyvsp[-3].tn)->expectedType;;}
    break;

  case 72:
#line 541 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-5].tn),(yyvsp[-2].tn), ArrayNNode);	(yyval.tn)->expectedType=(yyvsp[-7].tn)->expectedType;;}
    break;

  case 73:
#line 547 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn) = ast->createNode(0,0, ArrayNMultiNode);;}
    break;

  case 74:
#line 548 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-3].tn), ast->createNode(0,0, ArrayNMultiNode));;}
    break;

  case 75:
#line 555 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn) =  ast->createNode((yyvsp[-1].tn),0, array_body2Node);
															;}
    break;

  case 76:
#line 557 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn) =  ast->createNode((yyvsp[0].tn),0, array_body2Node);
															;}
    break;

  case 77:
#line 559 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-4].tn), ast->createNode((yyvsp[-1].tn),0, array_body2Node));
															;}
    break;

  case 78:
#line 561 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-2].tn), ast->createNode(0,0, array_body2Node));
															;}
    break;

  case 79:
#line 566 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.r.type)=(yyvsp[0].r.type);cout<<"type: simple_type\n";
													(yyval.tn)=ast->createNode((yyvsp[0].tn),0, typeNode);	(yyval.tn)->expectedType=(yyvsp[0].tn)->expectedType;}
    break;

  case 80:
#line 568 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.r.type)=(yyvsp[0].r.type);cout<<"type: complex_type\n";
													(yyval.tn)=ast->createNode((yyvsp[0].tn),0, typeNode);	(yyval.tn)->expectedType=(yyvsp[0].tn)->expectedType;;}
    break;

  case 81:
#line 574 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"simple_type:int\n";(yyval.r.type)=1;
													(yyval.tn)=ast->createNode(0,0, simple_type_INT);  (yyval.tn)->expectedType=inttype;;}
    break;

  case 82:
#line 576 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"simple_type:char\n";(yyval.r.type)=2;
													(yyval.tn)=ast->createNode(0,0, simple_type_CHAR);	(yyval.tn)->expectedType=chartype;;}
    break;

  case 83:
#line 578 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"simple_type:float\n";(yyval.r.type)=3;
													(yyval.tn)=ast->createNode(0,0, simple_typeFLOAT);	(yyval.tn)->expectedType=floattype;;}
    break;

  case 84:
#line 580 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"simple_type:string\n";(yyval.r.type)=4;
													(yyval.tn)=ast->createNode(0,0, simple_type_NSSTRING);	(yyval.tn)->expectedType=stringtype;;}
    break;

  case 85:
#line 582 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"simple_type:void\n";(yyval.r.type)=5;
													(yyval.tn)=ast->createNode(0,0, simple_type_VOID);	(yyval.tn)->expectedType=voidtype;;}
    break;

  case 86:
#line 589 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {
		(yyval.r.type)=6;(yyval.r.str)=(yyvsp[-1].r.str);
		if(s->check_var_type((yyvsp[-1].r.str))==0)	
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","type is undefined");
		cout<<"complex_type:	IDENTIFIER	MULTI\n";
		(yyval.tn)=ast->createNode(0,0, complex_type);
			(yyval.tn)->expectedType=complextype;;}
    break;

  case 87:
#line 600 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {i=1;cout<<"interface_declaration_list:interface_declaration_list interface_declaration\n";
														(yyval.tn) = ast->addToLastRight((yyvsp[-1].tn), ast->createNode((yyvsp[0].tn),0, interface_declaration_list_Node));;}
    break;

  case 88:
#line 602 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {i=1;cout<<"interface_declaration_list:interface_declaration\n";	(yyval.tn) = ast->createNode((yyvsp[0].tn),0, interface_declaration_list_Node);;}
    break;

  case 89:
#line 608 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"interface_declaration: class_method_declaration\n";
																	(yyval.tn) = (yyvsp[0].tn);;}
    break;

  case 90:
#line 610 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"interface_declaration: instance_method_declaration\n";
																	(yyval.tn) = (yyvsp[0].tn);;}
    break;

  case 91:
#line 616 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {
	Type t=static_cast<Type>((yyvsp[-2].r.type));
	if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),t,param_list) == 0) 
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");
	param_list.clear();
	cout<<"class_method_declaration: PLUS p_type method_selector SEMI_COMA\n";
	(yyval.tn) = ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn), class_method_declaration);
	(yyval.tn)->expectedType=(yyvsp[-2].tn)->expectedType;;}
    break;

  case 92:
#line 625 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {
		yyclearin;Type t=static_cast<Type>((yyvsp[-2].r.type));
		if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),t,param_list) == 0)
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");param_list.clear();
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");		(yyval.tn) = ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn), class_method_declaration);
		(yyval.tn)->expectedType=(yyvsp[-2].tn)->expectedType;;}
    break;

  case 93:
#line 634 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {
		if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),voidType,param_list) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");param_list.clear();
		cout<<"class_method_declaration: PLUS method_selector SEMI_COMA\n";	(yyval.tn) = ast->createNode(0,(yyvsp[-1].tn), class_method_declaration);
		;}
    break;

  case 94:
#line 641 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {
		yyclearin;
		if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),voidType,param_list) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");
		param_list.clear();
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",":");		(yyval.tn) = ast->createNode(0,(yyvsp[-1].tn), class_method_declaration);;}
    break;

  case 95:
#line 652 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {
		Type t=static_cast<Type>((yyvsp[-2].r.type));
		if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),t,param_list) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Rdefine Method");
		param_list.clear();
		cout<<"instance_method_declaration: MINUS p_type method_selector	SEMI_COMA\n";	(yyval.tn) = ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn), instance_method_declaration);
		(yyval.tn)->expectedType=(yyvsp[-2].tn)->expectedType;;}
    break;

  case 96:
#line 660 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {
		if(s->insertFunctionInCurrentScope((yyvsp[-1].r.str),voidType,param_list) == 0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Method");
		param_list.clear();
		cout<<"instance_method_declaration: MINUS method_selector SEMI_COMA\n";	(yyval.tn) = ast->createNode(0,(yyvsp[-1].tn), instance_method_declaration);;}
    break;

  case 97:
#line 665 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");
												(yyval.tn) = ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn), instance_method_declaration);;}
    break;

  case 98:
#line 667 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");
													(yyval.tn) = ast->createNode(0,(yyvsp[-1].tn), instance_method_declaration);;}
    break;

  case 99:
#line 672 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.r.type)=(yyvsp[-1].r.type);cout<<"p_type : OPEN_P type CLOSE_P\n";
																(yyval.tn) = ast->createNode(0,0, p_typeNode);	(yyval.tn)->expectedType=(yyvsp[-1].tn)->expectedType;;}
    break;

  case 100:
#line 674 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");
																(yyval.tn) = ast->createNode(0,0, p_typeNode);	(yyval.tn)->expectedType=(yyvsp[-1].tn)->expectedType;;}
    break;

  case 101:
#line 676 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");
																(yyval.tn) = ast->createNode(0,0, p_typeNode);	(yyval.tn)->expectedType=(yyvsp[-1].tn)->expectedType;;}
    break;

  case 102:
#line 684 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;;}
    break;

  case 103:
#line 684 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {i=3;s->currScope=s->currScope->parent;(yyval.r.str)=(yyvsp[-3].r.str);cout<<"method_selector:IDENTIFIER SEMI_COLUMN parameter_list\n";
								(yyval.tn) = ast->createNode(0,0, method_selector_Node);	
								
								 char * Main="main";
								if(yylval.r.str[0]==Main[0]){
								if(yylval.r.str[1]==Main[1])
								if(yylval.r.str[2]==Main[2])
								if(yylval.r.str[3]==Main[3])
								if(strlen(yylval.r.str)==4)
											 (yyval.tn)->mainInt=1;

										   }
										   
										   ;}
    break;

  case 104:
#line 701 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.r.str)=(yyvsp[0].r.str);cout<<"method_selector:IDENTIFIER \n";
												(yyval.tn) = ast->createNode(0,0, method_selector_Node);
								
								char * Main="main";
								if(yylval.r.str[0]==Main[0]){
								if(yylval.r.str[1]==Main[1])
								if(yylval.r.str[2]==Main[2])
								if(yylval.r.str[3]==Main[3])
								if(strlen(yylval.r.str)==4)
											 (yyval.tn)->mainInt=1;

										   }	
;}
    break;

  case 105:
#line 720 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"parameter_list:	parameter_list	SEMI_COLUMN	parameter\n";
																			(yyval.tn) = ast->addToLastRight((yyvsp[-2].tn), ast->createNode((yyvsp[0].tn),0, paramListNode));;}
    break;

  case 106:
#line 722 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"parameter_list:	parameter_list	IDENTIFIER  SEMI_COLUMN	parameter\n";
																			(yyval.tn) = ast->addToLastRight((yyvsp[-3].tn), ast->createNode((yyvsp[0].tn),0, paramListNode));;}
    break;

  case 107:
#line 724 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",":");
																			(yyval.tn) = ast->addToLastRight((yyvsp[-3].tn), ast->createNode((yyvsp[0].tn),0, paramListNode));;}
    break;

  case 108:
#line 726 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing",":");
																			(yyval.tn) = ast->addToLastRight((yyvsp[-2].tn), ast->createNode((yyvsp[0].tn),0, paramListNode));;}
    break;

  case 109:
#line 728 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"parameter_list: parameter\n";
																			(yyval.tn) =ast->createNode((yyvsp[0].tn),0, paramListNode);;}
    break;

  case 110:
#line 733 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {
	add_param((yyvsp[-1].r.type));
	Type t=static_cast<Type>((yyvsp[-1].r.type));
	if(s->insertVariableInCurrentScope((yyvsp[0].r.str),t,1) == 0) 
		cout<<"error redefine variable";

	cout<<"parameter: p_type IDENTIFIER\n";	(yyval.tn) = ast->createNode((yyvsp[-1].tn),0, parameter_Node);	(yyval.tn)->expectedType=(yyvsp[-1].tn)->expectedType;

	param_list1.push_back((yyvsp[0].r.str));
	;}
    break;

  case 111:
#line 749 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"statment: try_catch_statment\n";;}
    break;

  case 112:
#line 753 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"statment: catch_statment\n";;}
    break;

  case 113:
#line 754 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"statment: finally_TRY_CATCH\n";;}
    break;

  case 114:
#line 757 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"Exception NullPointerException";;}
    break;

  case 115:
#line 758 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"Exception OutOfBoundryException";;}
    break;

  case 116:
#line 759 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"Exception CastException";;}
    break;

  case 117:
#line 767 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {
		(yyval.tn)=ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),ImpNode);
		(yyval.tn)->currST=s->currScope;
		s->insert_scope1((yyvsp[-1].r.str),s->currScope); s->currScope=s->currScope->parent;
		cout<<"class_implementation: class_implementation_header class_implementation_body\n";;}
    break;

  case 118:
#line 776 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {
		(yyval.tn)=ast->createNode(0,0,HedrImpNode);
		Interface_name=(yyvsp[-2].r.str);
		i=2;
		(yyval.r.str)=(yyvsp[-2].r.str);
		if(s->check_Implementation_Interface((yyvsp[-2].r.str))==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Implementation has no Interface");
		if(s->check_Implementation((yyvsp[-2].r.str))!=0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redfine Implementation"); 
		else if(s->insertImplementationInCurrentScope((yyvsp[-2].r.str),(yyvsp[0].r.str))==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Implementation Inhertance not found"); 
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;
		cout<<"class_implementation_header: AT_IMPLEMENTATION IDENTIFIER SEMI_COLUMN IDENTIFIER\n";;}
    break;

  case 119:
#line 789 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {
		i=2;(yyval.r.str)=(yyvsp[-2].r.str);
		if(s->check_Implementation_Interface((yyvsp[-2].r.str))==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Implementation has no Interface");
		if(s->insertImplementationInCurrentScope((yyvsp[-2].r.str))==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Implementation");
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",":");;}
    break;

  case 120:
#line 799 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {
		i=2;(yyval.r.str)=(yyvsp[-1].r.str);
		if(s->check_Implementation_Interface((yyvsp[-1].r.str))==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Implementation has no Interface");
		if(s->insertImplementationInCurrentScope((yyvsp[-1].r.str))==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Implementation");
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;
		Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing",":");;}
    break;

  case 121:
#line 807 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {
		(yyval.tn)=ast->createNode(0,0,HedrImpNode);
		//Interface_name=new char[30];
		//	cout<<$<r.str>2;
		//strcat(Interface_name,$<r.str>2);
		//cout<<Interface_name;
		i=2;(yyval.r.str)=(yyvsp[0].r.str);
		if(s->check_Implementation_Interface((yyvsp[0].r.str))==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Implementation has no Interface");
		if(s->insertImplementationInCurrentScope((yyvsp[0].r.str))==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Implementation");
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope;
		cout<<"class_implementation_header: AT_IMPLEMENTATION IDENTIFIER \n";
																;}
    break;

  case 122:
#line 825 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn),BdyImpNode);cout<<"class_implementation_body: instance_variables	implementation_definition_list	AT_END\n";;}
    break;

  case 123:
#line 827 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,BdyImpNode);cout<<"class_implementation_body: instance_variables AT_END\n";;}
    break;

  case 124:
#line 828 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode(0,(yyvsp[-1].tn),BdyImpNode);cout<<"class_implementation_body:	implementation_definition_list	AT_END\n";;}
    break;

  case 125:
#line 837 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->addToLastRight((yyvsp[-1].tn),ast->createNode((yyvsp[0].tn),0,ImpdefNode));i=3;cout<<"implementation_definition_list: implementation_definition_list implementation_definition\n";;}
    break;

  case 126:
#line 838 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {								(yyval.tn)=ast->createNode((yyvsp[0].tn),0,ImpdefNode);i=3;cout<<"implementation_definition_list: implementation_definition\n";;}
    break;

  case 127:
#line 842 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"implementation_definition: class_implementation_definition	\n";;}
    break;

  case 128:
#line 843 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"implementation_definition: instance_implementation_definition \n";;}
    break;

  case 129:
#line 850 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {

	(yyval.tn)=ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),ClsImpDefNode);i=2;
	cout<<"class_implementation_definition: class_implementation_definition_header block_body";	 

	s->insert_scope((yyvsp[-1].r.str),s->currScope);s->currScope=s->currScope->parent;

	if((yyvsp[-1].tn)->mainInt==1){
	   if(s->Mainexists==1)
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Multi Main Progect");
	   (yyval.tn)->mainNode=true;
	   cout<<"\n \n   this is main function \n \n  ";
	   s->Set_main((yyval.tn));
	   ast->print(s->Get_main(),0);
	   }

	;}
    break;

  case 131:
#line 873 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode(0,(yyvsp[0].tn),ClsImpDefHdrNode);cout<<"class_implementation_definition_header:  PLUS	method_selector\n";
										  if((yyvsp[0].tn)->mainInt==1){
											 (yyval.tn)->mainInt=1;
										   };}
    break;

  case 132:
#line 877 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.r.str)=(yyvsp[0].r.str);Type t=static_cast<Type>((yyvsp[-1].r.type));
										if(s->insertFunctionInCurrentScope((yyvsp[0].r.str),t,param_list) == 0) 
												Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Rdefine Method");
										Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope; 
										insert_param();
										param_list1.clear();param_list.clear();
										(yyval.tn)=ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),ClsImpDefHdrNode);cout<<"class_implementation_definition_header: PLUS p_type method_selector\n";
										 if((yyvsp[0].tn)->mainInt==1){
											 (yyval.tn)->mainInt=1;
										   };}
    break;

  case 133:
#line 894 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {//s->insert_scope($<r.str>1,s->currScope);	s->currScope=s->currScope->parent; 
														 (yyval.tn) = ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),InsImpDefNode);
														 //i=2;$<r.str>$=$<r.str>1;
																cout<<"instance_implementation_definition: instance_implementation_definition_header block_body\n";;}
    break;

  case 134:
#line 901 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),InsImpDefHdrNode);cout<<"instance_implementation_definition_header:MINUS p_type	method_selector\n";
											(yyval.tn)->expectedType=(yyvsp[-1].tn)->expectedType;;}
    break;

  case 135:
#line 903 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn) = ast->createNode(0,(yyvsp[0].tn),InsImpDefHdrNode);cout<<"instance_implementation_definition_header:MINUS method_selector\n";;}
    break;

  case 136:
#line 904 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    { (yyval.r.str)=(yyvsp[-3].r.str);Type t=static_cast<Type>((yyvsp[-4].r.type));
											  if(s->insertFunctionInCurrentScope((yyvsp[-3].r.str),t,param_list) == 0) 
												Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Rdefine Method");\
											  Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope; 
											  insert_param();
											  param_list1.clear();param_list.clear();
											 ast->createNode((yyvsp[-4].tn),(yyvsp[-3].tn),InsImpDefHdrNode);cout<<"instance_implementation_definition_header:MINUS p_type	method_selector\n";;}
    break;

  case 137:
#line 911 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0,InsImpDefHdrNode);cout<<"instance_implementation_definition_header:MINUS method_selector\n";;}
    break;

  case 138:
#line 918 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-1].tn),ast->createNode((yyvsp[0].tn),0,stmtListNode));cout<<"statement_list: statement_list statement\n";;}
    break;

  case 139:
#line 919 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0,stmtListNode);cout<<"statement_list: statement\n";;}
    break;

  case 140:
#line 925 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"statement: loop_statement\n";;}
    break;

  case 141:
#line 926 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"statement: conditional_statement\n";;}
    break;

  case 142:
#line 927 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=(yyvsp[-1].tn);cout<<"statement: expr\n";;}
    break;

  case 143:
#line 928 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"statement: variable_declaration\n";;}
    break;

  case 144:
#line 929 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {Scope *new_scope = new Scope(); new_scope->parent=s->currScope;s->currScope=new_scope;;}
    break;

  case 145:
#line 929 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=(yyvsp[-1].tn);s->currScope=s->currScope->parent;cout<<"statement: block_body\n";;}
    break;

  case 146:
#line 930 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"statement: return_statement\n";;}
    break;

  case 148:
#line 938 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,ReturnNode);cout<<"return_statement: RETURN expr\n";;}
    break;

  case 149:
#line 939 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",";");;}
    break;

  case 150:
#line 942 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"loop_statement: for_loop\n";;}
    break;

  case 151:
#line 943 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"loop_statement: while_loop\n";;}
    break;

  case 152:
#line 944 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"loop_statement: do_while_loop\n";;}
    break;

  case 153:
#line 947 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),ForNode);cout<<"for_loop: for_loop_header statement\n";;}
    break;

  case 154:
#line 953 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {	
		(yyval.tn)=ast->createNode((yyvsp[-5].tn),ast->createNode((yyvsp[-3].tn),(yyvsp[-1].tn),ForHdrNode),ForHdrNode);
		
		cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA logic_expr SEMI_COMA expr CLOSE_P\n";;}
    break;

  case 155:
#line 960 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");;}
    break;

  case 156:
#line 962 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","(");;}
    break;

  case 157:
#line 964 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 158:
#line 966 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {
		(yyval.tn)=ast->createNode(0,ast->createNode((yyvsp[-3].tn),(yyvsp[-1].tn),ForHdrNode),ForHdrNode);
		cout<<"for_loop_header: FOR OPEN_P SEMI_COMA logic_expr SEMI_COMA expr CLOSE_P\n";;}
    break;

  case 159:
#line 973 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing",")");;}
    break;

  case 160:
#line 975 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","(");;}
    break;

  case 161:
#line 977 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 162:
#line 982 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-4].tn),ast->createNode(0,(yyvsp[-1].tn),ForHdrNode),ForHdrNode);	
		cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA SEMI_COMA expr CLOSE_P\n";;}
    break;

  case 163:
#line 987 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-4].tn),ast->createNode((yyvsp[-2].tn),0,ForHdrNode),ForHdrNode);	
		cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA logic_expr SEMI_COMA CLOSE_P \n";;}
    break;

  case 164:
#line 990 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-3].tn),ast->createNode(0,0,ForHdrNode),ForHdrNode);	
		cout<<"for_loop_header: FOR OPEN_P for_initializer SEMI_COMA SEMI_COMA CLOSE_P	\n";;}
    break;

  case 165:
#line 993 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode(0,ast->createNode((yyvsp[-2].tn),0,ForHdrNode),ForHdrNode);	
		cout<<"for_loop_header: FOR OPEN_P SEMI_COMA logic_expr SEMI_COMA CLOSE_P\n";;}
    break;

  case 166:
#line 996 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode(0,ast->createNode(0,(yyvsp[-1].tn),ForHdrNode),ForHdrNode);
		cout<<"for_loop_header: FOR OPEN_P SEMI_COMA SEMI_COMA expr CLOSE_P";;}
    break;

  case 167:
#line 1000 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,ForHdrNode);	
		cout<<"for_loop_hearder: FOR OPEN_P SEMI_COMA SEMI_COMA CLOSE_P	\n";;}
    break;

  case 168:
#line 1007 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[0].tn),0,ForIniNode);if(s->insertVariableInCurrentScope((yyvsp[-2].r.str),intType,1) == 0) Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"Error","Variable not found");cout<<"for_initializer: INT ID EQUAL expr\n";;}
    break;

  case 169:
#line 1008 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","=");;}
    break;

  case 170:
#line 1009 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","=");;}
    break;

  case 171:
#line 1010 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[0].tn),0,ForIniNode);cout<<"for_initializer: ID EQUAL expr\n";;}
    break;

  case 172:
#line 1011 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","=");;}
    break;

  case 173:
#line 1012 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","=");;}
    break;

  case 174:
#line 1013 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,ForIniNode);cout<<"for_initializer: ID\n";;}
    break;

  case 175:
#line 1018 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr LESS_THAN expr\n";;}
    break;

  case 176:
#line 1019 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr MORE_THAN expr\n";;}
    break;

  case 177:
#line 1020 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr LESS_OR_EQUAL expr\n";;}
    break;

  case 178:
#line 1021 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr MORE_OR_EQUAL expr\n";;}
    break;

  case 179:
#line 1022 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr EQUAL_EQUAL expr\n";;}
    break;

  case 180:
#line 1023 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[0].tn),0,LogExpNode);cout<<"logic_expr:NOT_EQUAL expr\n";;}
    break;

  case 181:
#line 1024 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,LogExpNode);cout<<"logic_expr:OPEN_P logic_expr CLOSE_P\n";;}
    break;

  case 182:
#line 1025 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:logic_expr AND_AND logic_expr\n";;}
    break;

  case 183:
#line 1026 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:logic_expr OR_OR logic_expr\n";;}
    break;

  case 184:
#line 1029 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"expr:assign_expr\n";	;}
    break;

  case 185:
#line 1030 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"expr:simple_expr\n";	(yyval.tn)->expectedType=(yyvsp[0].tn)->expectedType;;}
    break;

  case 186:
#line 1033 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr LESS_THAN expr\n";;}
    break;

  case 187:
#line 1034 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr MORE_THAN expr\n";;}
    break;

  case 188:
#line 1035 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr LESS_OR_EQUAL expr\n";;}
    break;

  case 189:
#line 1036 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr MORE_OR_EQUAL expr\n";;}
    break;

  case 190:
#line 1037 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:expr EQUAL_EQUAL expr\n";;}
    break;

  case 191:
#line 1038 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[0].tn),0,LogExpNode);cout<<"logic_expr:NOT_EQUAL expr\n";;}
    break;

  case 192:
#line 1039 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,LogExpNode);cout<<"logic_expr:OPEN_P logic_expr CLOSE_P\n";;}
    break;

  case 193:
#line 1040 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:logic_expr AND_AND logic_expr\n";;}
    break;

  case 194:
#line 1041 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),LogExpNode);cout<<"logic_expr:logic_expr OR_OR logic_expr\n";;}
    break;

  case 195:
#line 1042 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","LOGIC EXPR");;}
    break;

  case 196:
#line 1043 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");;}
    break;

  case 197:
#line 1044 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 198:
#line 1049 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"expr:simple_expr\n";	(yyval.tn)->expectedType=(yyvsp[0].tn)->expectedType;;}
    break;

  case 199:
#line 1053 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),AsgExpNode);cout<<"assign_expr:long_id EQUAL simple_expr\n";
										;}
    break;

  case 200:
#line 1059 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {
		var.push((yyvsp[0].r.str));				
		(yyval.tn) = ast->addToLastRight((yyvsp[-2].tn),ast->createNode(0,0,longidNode));
		cout<<"long_id: long_id.IDENTIFIER\n";;}
    break;

  case 201:
#line 1064 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);cout<<"long_id: long_id.message_call\n";;}
    break;

  case 202:
#line 1065 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,IdentNode);
		if(strcmp(lexer->YYText(),".")==0) 
			var.push((yyvsp[0].r.str));
		if(s->getVariableFromCurrentScope((yyvsp[0].r.str))==0) {
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Variable Not found ");
		}
		cout<<"long_id:IDENTIFIER\n";;}
    break;

  case 203:
#line 1080 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,stringNode);    (yyval.tn)->expectedType=stringtype;
									cout<<"simple_expr:STRING_VAL\n";
									(yyval.tn)->item=(void *)yylval.r.str;;}
    break;

  case 204:
#line 1087 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,intNode);	 (yyval.tn)->expectedType=inttype;   (yyval.tn)->item=(void *)yylval.r.i;;}
    break;

  case 205:
#line 1093 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,floatNode);cout<<"simple_expr:FLOAT_VAL\n";	(yyval.tn)->expectedType=floattype;
								
								;}
    break;

  case 206:
#line 1100 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,CharNode);cout<<"simple_expr:CHAR_VAL\n";	(yyval.tn)->expectedType=chartype;
								 (yyval.tn)->item=(void *)yylval.r.c;;}
    break;

  case 207:
#line 1103 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,BOOLNode);cout<<"simple_expr:BOOL_VAL\n";	(yyval.tn)->expectedType=booltype;;}
    break;

  case 208:
#line 1104 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,BOOLNode);cout<<"simple_expr:BOOL_VAL\n";	(yyval.tn)->expectedType=booltype;;}
    break;

  case 209:
#line 1108 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {
		
		char *type;
		bool ok1=true;
		if(s->getVariableNameFromInterface("I","l")=="##")
			ok1=false;
		else{
			type=s->getVariableNameFromInterface("I","l");
			cout<<"ok";
		}
		while((!var.empty())&&(ok1)){
			var.pop();
			cout<<type;
			if(var.empty())
				ok1=false;
			else if(s->getVariableNameFromInterface(type,var.front())=="##")
			{
				cout<<"error datamember not found";
				ok1=false;
			}
			else if(s->getVariableNameFromInterface(type,var.front())=="#$"){
				cout<<"error Interface not found";
				ok1=false;
			}
			else if(s->getVariableSpecFromInterface(type,var.front())!=3){
				cout<<"error not public";
				ok1=false;
			}
			else{
					type=s->getVariableNameFromInterface(type,var.front());
			}
			
	}
	cout<<"simple_expr:long_id\n";;}
    break;

  case 210:
#line 1145 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),SmpExpPlusNode);cout<<"simple_expr:expr PLUS expr\n";
											TEW=TC->TCmultiexpr((yyvsp[-2].tn)->expectedType,(yyvsp[0].tn)->expectedType);
											(yyval.tn)->expectedType=TEW->expectedType;
											if(TEW->Is_Error==true)
												Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,TEW->Error_Warning_Type,"");
		
			;}
    break;

  case 211:
#line 1154 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),SmpExpMinusNode);cout<<"simple_expr:expr MINUS expr\n";
											TEW=TC->TCmultiexpr((yyvsp[-2].tn)->expectedType,(yyvsp[0].tn)->expectedType);
											(yyval.tn)->expectedType=TEW->expectedType;
											if(TEW->Is_Error==true)
												Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,TEW->Error_Warning_Type,"");
												;}
    break;

  case 212:
#line 1161 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),SmpExpMultiNode);cout<<"simple_expr:expr MULTI expr\n";
											TEW=TC->TCmultiexpr((yyvsp[-2].tn)->expectedType,(yyvsp[0].tn)->expectedType);
											(yyval.tn)->expectedType=TEW->expectedType;
											if(TEW->Is_Error==true)
												Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,TEW->Error_Warning_Type,"");
											;}
    break;

  case 213:
#line 1168 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[0].tn),SmpExpDivNode);cout<<"simple_expr:expr DIV expr\n";
											TEW=TC->TCmultiexpr((yyvsp[-2].tn)->expectedType,(yyvsp[0].tn)->expectedType);
											(yyval.tn)->expectedType=TEW->expectedType;
											if(TEW->Is_Error==true)
												Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,TEW->Error_Warning_Type,"");
												;}
    break;

  case 214:
#line 1175 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,SmpExpNode);cout<<"simple_expr:OPEN_P expr CLOSE_P\n";
											(yyval.tn)->expectedType=(yyvsp[-1].tn)->expectedType;;}
    break;

  case 215:
#line 1177 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,SmpExpNode);cout<<"expr:p_type expr\n";
													(yyval.tn)->expectedType=(yyvsp[0].tn)->expectedType;;}
    break;

  case 216:
#line 1183 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,BlockNode); cout<<"block_body:OPEN_S statement_list	CLOSE_S\n";;}
    break;

  case 217:
#line 1184 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode(0,0,BlockNode);cout<<"block_body:OPEN_S CLOSE_S\n";;}
    break;

  case 218:
#line 1189 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),WhileNode);cout<<"while_loop:while_loop_header statement\n";;}
    break;

  case 219:
#line 1192 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,WleHdrNode);cout<<"while_loop_header: WHILE OPEN_P logic_expr CLOSE_P\n";;}
    break;

  case 220:
#line 1193 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");;}
    break;

  case 221:
#line 1194 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","(");;}
    break;

  case 222:
#line 1195 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 223:
#line 1198 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn),DoWhlNode);cout<<"do_while_loop_header: DO statement while_loop_header SEMI_COMA\n";;}
    break;

  case 224:
#line 1200 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),CondtiNode);cout<<"conditional_statement: if_header statement\n";;}
    break;

  case 225:
#line 1201 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {
		(yyval.tn)=ast->createNode((yyvsp[-3].tn),(yyvsp[-2].tn),CondtiNode);
		cout<<"conditional_statement: if_header statement\n";;}
    break;

  case 226:
#line 1204 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[0].tn),0,CondtiNode);cout<<"conditional_statement: switch\n";;}
    break;

  case 227:
#line 1207 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-4].tn),(yyvsp[-1].tn),SwitchNode);cout<<"switch statment";;}
    break;

  case 228:
#line 1208 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 229:
#line 1209 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");;}
    break;

  case 230:
#line 1210 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","}");;}
    break;

  case 231:
#line 1211 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","{");;}
    break;

  case 232:
#line 1220 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {
									(yyval.tn)=ast->createNode((yyvsp[-6].tn),ast->createNode((yyvsp[-3].tn),(yyvsp[0].tn),SwtBdyNode),SwtBdyNode);
										
												cout<<"case statment";;}
    break;

  case 233:
#line 1224 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","break");;}
    break;

  case 234:
#line 1225 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode(0,(yyvsp[-2].tn),SwtBdyNode);cout<<"default statment";;}
    break;

  case 235:
#line 1226 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","break");;}
    break;

  case 236:
#line 1231 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);;}
    break;

  case 237:
#line 1232 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);;}
    break;

  case 238:
#line 1236 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);;}
    break;

  case 239:
#line 1237 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=(yyvsp[0].tn);;}
    break;

  case 240:
#line 1240 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-1].tn),0,IfHdrNode);cout<<"if_header: IF OPEN_P logic_expr CLOSE_P\n";;}
    break;

  case 241:
#line 1241 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {yyclearin;Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",")");;}
    break;

  case 242:
#line 1242 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing","(");;}
    break;

  case 243:
#line 1243 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","(");;}
    break;

  case 244:
#line 1246 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn)=ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn),MsgCalNode);cout<<"message_call: OPEN_ARR sender message CLOSE_ARR\n";;}
    break;

  case 245:
#line 1249 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0,SndrNode);cout<<"sender: message_call\n";;}
    break;

  case 246:
#line 1250 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"sender: IDENTIFIER\n";;}
    break;

  case 247:
#line 1253 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {cout<<"message: IDENTIFIER\n";;}
    break;

  case 248:
#line 1254 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0,MsgNode);cout<<"message: IDENTIFIER SEMI_COLUMN argument_list\n";;}
    break;

  case 249:
#line 1257 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn) = ast->addToLastRight((yyvsp[-1].tn),ast->createNode((yyvsp[0].tn),0,argListNode));cout<<"argument_list: argument_list argument\n";;}
    break;

  case 250:
#line 1258 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0,argListNode);cout<<"argument_list: argument\n";;}
    break;

  case 251:
#line 1261 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0,argNode);cout<<"argument: SEMI_COLUMN simple_expr\n";;}
    break;

  case 252:
#line 1262 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",":");;}
    break;

  case 253:
#line 1263 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[0].tn),0,argNode);cout<<"argument: IDENTIFIER SEMI_COLUMN simple_expr\n";;}
    break;

  case 254:
#line 1264 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"missing",":");;}
    break;

  case 255:
#line 1265 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR",":");;}
    break;

  case 256:
#line 1267 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {
	(yyval.tn) = ast->createNode((yyvsp[-1].tn),(yyvsp[0].tn),ProtclNode);
	s->insert_scope1((yyvsp[-1].r.str),s->currScope);s->currScope=s->currScope->parent;
	cout<<"protocol: protocol_header protocol_body\n";;}
    break;

  case 257:
#line 1273 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {
		(yyval.tn) = ast->createNode(0,0,ProtclHdrNode);
		(yyval.r.str)=(yyvsp[0].r.str);
		if(s->check_Interface((yyvsp[0].r.str))!=0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","there is inteface in the same name");
		if( s->insertProtocolInCurrentScope((yyvsp[0].r.str))==0) 
			Er->errQ->enqueue(yylval.r.myLineNo,yylval.r.myColno,"ERROR","Redefine Protocol");
		Scope *new_scope = new Scope();new_scope->parent=s->currScope;s->currScope=new_scope; 
		cout<<"protocol_header: AT_PROTOCOL IDENTIFIER \n";;}
    break;

  case 258:
#line 1285 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {(yyval.tn) = ast->createNode((yyvsp[-2].tn),(yyvsp[-1].tn),ProtclBdyNode);
		cout<<"protocol_body: protocol_reference_list interface_declaration_list AT_END\n";;}
    break;

  case 259:
#line 1287 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {
		(yyval.tn) = ast->createNode((yyvsp[-1].tn),0,ProtclBdyNode);
		cout<<"protocol_body: interface_declaration_list AT_END\n";;}
    break;

  case 260:
#line 1290 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {
		(yyval.tn) = ast->createNode((yyvsp[-1].tn),0,ProtclBdyNode);
		cout<<"protocol_body: protocol_reference_list AT_END \n";;}
    break;

  case 261:
#line 1293 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"
    {
		(yyval.tn) = ast->createNode(0,0,ProtclBdyNode);
		cout<<"protocol_body:	AT_END\n";;}
    break;


      default: break;
    }

/* Line 1126 of yacc.c.  */
#line 3692 "yacc.cpp"

  yyvsp -= yylen;
  yyssp -= yylen;


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
#if YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (YYPACT_NINF < yyn && yyn < YYLAST)
	{
	  int yytype = YYTRANSLATE (yychar);
	  YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
	  YYSIZE_T yysize = yysize0;
	  YYSIZE_T yysize1;
	  int yysize_overflow = 0;
	  char *yymsg = 0;
#	  define YYERROR_VERBOSE_ARGS_MAXIMUM 5
	  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
	  int yyx;

#if 0
	  /* This is so xgettext sees the translatable formats that are
	     constructed on the fly.  */
	  YY_("syntax error, unexpected %s");
	  YY_("syntax error, unexpected %s, expecting %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s");
	  YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
#endif
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
	  int yychecklim = YYLAST - yyn;
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
		yysize_overflow |= yysize1 < yysize;
		yysize = yysize1;
		yyfmt = yystpcpy (yyfmt, yyprefix);
		yyprefix = yyor;
	      }

	  yyf = YY_(yyformat);
	  yysize1 = yysize + yystrlen (yyf);
	  yysize_overflow |= yysize1 < yysize;
	  yysize = yysize1;

	  if (!yysize_overflow && yysize <= YYSTACK_ALLOC_MAXIMUM)
	    yymsg = (char *) YYSTACK_ALLOC (yysize);
	  if (yymsg)
	    {
	      /* Avoid sprintf, as that infringes on the user's name space.
		 Don't have undefined behavior even if the translation
		 produced a string with the wrong number of "%s"s.  */
	      char *yyp = yymsg;
	      int yyi = 0;
	      while ((*yyp = *yyf))
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
	      yyerror (yymsg);
	      YYSTACK_FREE (yymsg);
	    }
	  else
	    {
	      yyerror (YY_("syntax error"));
	      goto yyexhaustedlab;
	    }
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror (YY_("syntax error"));
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
	  yydestruct ("Error: discarding", yytoken, &yylval);
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
  if (0)
     goto yyerrorlab;

yyvsp -= yylen;
  yyssp -= yylen;
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


      yydestruct ("Error: popping", yystos[yystate], yyvsp);
      YYPOPSTACK;
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  if (yyn == YYFINAL)
    YYACCEPT;

  *++yyvsp = yylval;


  /* Shift the error token. */
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
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp);
      YYPOPSTACK;
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
  return yyresult;
}


#line 1296 "C:\\Users\\Hasan\\Documents\\GitHub\\comp22\\comp2\\yacc.y"

void yyerror(char *s) {
	;
}

int yylex(){
	return lexer->yylex();

}
void main(void){
	Parser* p = new Parser();			
	p->parse();
	Er->printErrQueue();	
	system("pause");
	
}



/*test*/
