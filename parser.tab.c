/* A Bison parser, made by GNU Bison 3.8.2.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30802

/* Bison version string.  */
#define YYBISON_VERSION "3.8.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "parser.y"

	#include "sym_tab.c"
	#include <stdio.h>
	#include <stdlib.h>
	#include <string.h>
	#define YYSTYPE char*
	/*
		declare variables to help you keep track or store properties
		scope can be default value for this lab(implementation in the next lab)
	*/
    int scope = 0;          // initial declaration of scope
    int type = -1;          // initial declaration of type for symbol table
    int vtype = -1;         // used for type checking
    char *vval = "~";       // initial declaration of value for symbol table
	void yyerror(char* s);  // error handling function
	int yylex();            // declare the function performing lexical analysis
	extern int yylineno;    // track the line number
    symbol *global_p = NULL;       // global pointer to a symbol table entry


#line 92 "parser.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "parser.tab.h"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_T_INT = 3,                      /* T_INT  */
  YYSYMBOL_T_CHAR = 4,                     /* T_CHAR  */
  YYSYMBOL_T_DOUBLE = 5,                   /* T_DOUBLE  */
  YYSYMBOL_T_INC = 6,                      /* T_INC  */
  YYSYMBOL_T_DEC = 7,                      /* T_DEC  */
  YYSYMBOL_T_OROR = 8,                     /* T_OROR  */
  YYSYMBOL_T_ANDAND = 9,                   /* T_ANDAND  */
  YYSYMBOL_T_EQCOMP = 10,                  /* T_EQCOMP  */
  YYSYMBOL_T_NOTEQUAL = 11,                /* T_NOTEQUAL  */
  YYSYMBOL_T_GREATEREQ = 12,               /* T_GREATEREQ  */
  YYSYMBOL_T_LESSEREQ = 13,                /* T_LESSEREQ  */
  YYSYMBOL_T_LEFTSHIFT = 14,               /* T_LEFTSHIFT  */
  YYSYMBOL_T_RIGHTSHIFT = 15,              /* T_RIGHTSHIFT  */
  YYSYMBOL_T_PRINTLN = 16,                 /* T_PRINTLN  */
  YYSYMBOL_T_STRING = 17,                  /* T_STRING  */
  YYSYMBOL_T_FLOAT = 18,                   /* T_FLOAT  */
  YYSYMBOL_T_BOOLEAN = 19,                 /* T_BOOLEAN  */
  YYSYMBOL_T_IF = 20,                      /* T_IF  */
  YYSYMBOL_T_ELSE = 21,                    /* T_ELSE  */
  YYSYMBOL_T_STRLITERAL = 22,              /* T_STRLITERAL  */
  YYSYMBOL_T_DO = 23,                      /* T_DO  */
  YYSYMBOL_T_INCLUDE = 24,                 /* T_INCLUDE  */
  YYSYMBOL_T_HEADER = 25,                  /* T_HEADER  */
  YYSYMBOL_T_MAIN = 26,                    /* T_MAIN  */
  YYSYMBOL_T_ID = 27,                      /* T_ID  */
  YYSYMBOL_T_NUM = 28,                     /* T_NUM  */
  YYSYMBOL_T_FOR = 29,                     /* T_FOR  */
  YYSYMBOL_T_WHILE = 30,                   /* T_WHILE  */
  YYSYMBOL_T_SWITCH = 31,                  /* T_SWITCH  */
  YYSYMBOL_T_CASE = 32,                    /* T_CASE  */
  YYSYMBOL_T_BREAK = 33,                   /* T_BREAK  */
  YYSYMBOL_T_CONTINUE = 34,                /* T_CONTINUE  */
  YYSYMBOL_35_ = 35,                       /* ';'  */
  YYSYMBOL_36_ = 36,                       /* ','  */
  YYSYMBOL_37_ = 37,                       /* '='  */
  YYSYMBOL_38_ = 38,                       /* '+'  */
  YYSYMBOL_39_ = 39,                       /* '-'  */
  YYSYMBOL_40_ = 40,                       /* '*'  */
  YYSYMBOL_41_ = 41,                       /* '/'  */
  YYSYMBOL_42_ = 42,                       /* '('  */
  YYSYMBOL_43_ = 43,                       /* ')'  */
  YYSYMBOL_44_ = 44,                       /* '<'  */
  YYSYMBOL_45_ = 45,                       /* '>'  */
  YYSYMBOL_46_ = 46,                       /* '{'  */
  YYSYMBOL_47_ = 47,                       /* '}'  */
  YYSYMBOL_48_ = 48,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 49,                  /* $accept  */
  YYSYMBOL_START = 50,                     /* START  */
  YYSYMBOL_PROG = 51,                      /* PROG  */
  YYSYMBOL_DECLR = 52,                     /* DECLR  */
  YYSYMBOL_LISTVAR = 53,                   /* LISTVAR  */
  YYSYMBOL_VAR = 54,                       /* VAR  */
  YYSYMBOL_TYPE = 55,                      /* TYPE  */
  YYSYMBOL_ASSGN = 56,                     /* ASSGN  */
  YYSYMBOL_57_1 = 57,                      /* $@1  */
  YYSYMBOL_EXPR = 58,                      /* EXPR  */
  YYSYMBOL_E = 59,                         /* E  */
  YYSYMBOL_T = 60,                         /* T  */
  YYSYMBOL_F = 61,                         /* F  */
  YYSYMBOL_REL_OP = 62,                    /* REL_OP  */
  YYSYMBOL_MAIN = 63,                      /* MAIN  */
  YYSYMBOL_64_2 = 64,                      /* $@2  */
  YYSYMBOL_EMPTY_LISTVAR = 65,             /* EMPTY_LISTVAR  */
  YYSYMBOL_STMT = 66,                      /* STMT  */
  YYSYMBOL_IF_ELSE = 67,                   /* IF_ELSE  */
  YYSYMBOL_FOR_LOOP = 68,                  /* FOR_LOOP  */
  YYSYMBOL_WHILE_LOOP = 69,                /* WHILE_LOOP  */
  YYSYMBOL_SWITCH_STMT = 70,               /* SWITCH_STMT  */
  YYSYMBOL_CASES = 71,                     /* CASES  */
  YYSYMBOL_CASE = 72,                      /* CASE  */
  YYSYMBOL_FUNC_DECL = 73,                 /* FUNC_DECL  */
  YYSYMBOL_FUNC_DEF = 74,                  /* FUNC_DEF  */
  YYSYMBOL_PARAM_LIST = 75,                /* PARAM_LIST  */
  YYSYMBOL_PARAM = 76,                     /* PARAM  */
  YYSYMBOL_STMT_NO_BLOCK = 77,             /* STMT_NO_BLOCK  */
  YYSYMBOL_BLOCK = 78,                     /* BLOCK  */
  YYSYMBOL_79_3 = 79,                      /* $@3  */
  YYSYMBOL_COND = 80                       /* COND  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   186

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  49
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  70
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  149

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   289


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      42,    43,    40,    38,    36,    39,     2,    41,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    48,    35,
      44,    37,    45,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    46,     2,    47,     2,     2,     2,     2,
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
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    31,    31,    34,    35,    36,    37,    41,    45,    46,
      49,    65,    77,    78,    79,    80,    84,    84,   110,   111,
     118,   138,   158,   165,   185,   205,   211,   212,   237,   255,
     272,   273,   274,   275,   276,   277,   283,   283,   286,   287,
     290,   291,   292,   293,   294,   295,   296,   297,   298,   301,
     302,   303,   304,   307,   310,   313,   316,   316,   319,   322,
     325,   328,   329,   330,   333,   337,   338,   342,   342,   345,
     346
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "T_INT", "T_CHAR",
  "T_DOUBLE", "T_INC", "T_DEC", "T_OROR", "T_ANDAND", "T_EQCOMP",
  "T_NOTEQUAL", "T_GREATEREQ", "T_LESSEREQ", "T_LEFTSHIFT", "T_RIGHTSHIFT",
  "T_PRINTLN", "T_STRING", "T_FLOAT", "T_BOOLEAN", "T_IF", "T_ELSE",
  "T_STRLITERAL", "T_DO", "T_INCLUDE", "T_HEADER", "T_MAIN", "T_ID",
  "T_NUM", "T_FOR", "T_WHILE", "T_SWITCH", "T_CASE", "T_BREAK",
  "T_CONTINUE", "';'", "','", "'='", "'+'", "'-'", "'*'", "'/'", "'('",
  "')'", "'<'", "'>'", "'{'", "'}'", "':'", "$accept", "START", "PROG",
  "DECLR", "LISTVAR", "VAR", "TYPE", "ASSGN", "$@1", "EXPR", "E", "T", "F",
  "REL_OP", "MAIN", "$@2", "EMPTY_LISTVAR", "STMT", "IF_ELSE", "FOR_LOOP",
  "WHILE_LOOP", "SWITCH_STMT", "CASES", "CASE", "FUNC_DECL", "FUNC_DEF",
  "PARAM_LIST", "PARAM", "STMT_NO_BLOCK", "BLOCK", "$@3", "COND", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-88)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-17)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     114,   -88,   -88,   -88,   -88,   -88,     3,   -88,   -22,     6,
       8,   114,    15,   -88,   114,    22,    33,    62,   -88,   114,
     -88,    23,   -88,    73,    23,    73,   -88,   -88,   -88,   -88,
      23,    49,    96,    98,   -88,    62,    59,    49,   -88,    -4,
     -88,   -88,   -88,   -88,   -88,   -88,    23,    23,    23,    23,
      23,    75,   -88,    96,    98,    98,   -88,   -88,   -88,    85,
      66,    88,   107,   108,   -88,   101,   121,   116,   109,    85,
      85,    85,    85,    85,    85,    85,    85,    27,   127,    27,
     128,    85,   -88,    55,   -88,   -88,   -88,   -88,   -88,   -88,
     -88,   -88,   -88,   -88,   120,   -88,    49,   110,   123,   117,
     118,   112,   124,   106,    27,   119,   122,   -88,   135,    77,
     -88,    85,    73,    17,   129,   -88,   131,   -88,   124,   -34,
     125,   114,   -88,   127,   138,    44,   -88,   -88,   -88,   -88,
      53,    85,   130,   132,   -88,   -88,   133,   -88,   -88,   119,
      85,    85,   -88,   134,   136,   139,    85,   -88,   -88
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       6,    12,    15,    14,    13,    16,     0,     2,     0,     0,
       0,     6,     0,     1,     6,     0,    11,     7,     9,     6,
       3,     0,     4,    39,     0,     0,     5,    29,    27,    28,
       0,    17,    19,    22,    25,    38,     0,    10,     8,     0,
      34,    35,    31,    30,    32,    33,     0,     0,     0,     0,
       0,     0,    26,    18,    20,    21,    23,    24,    36,    48,
       0,     0,     0,     0,    67,     0,     0,     0,     0,    48,
      48,    48,    48,    48,    48,    48,    48,     0,     0,     0,
       0,    48,    65,    11,    66,    37,    42,    43,    44,    45,
      46,    47,    40,    41,    27,    70,    69,     0,     0,     0,
       0,     0,    63,     0,     0,     0,     0,    68,     0,     0,
      62,    48,     0,    48,     0,    54,     0,    64,     0,     0,
       0,     0,    51,     0,     0,     0,    57,    61,    59,    60,
      48,    48,     0,     0,    55,    56,     0,    50,    52,     0,
      48,    48,    53,     0,     0,     0,    48,    58,    49
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -88,   -88,    -9,   126,   146,   145,     4,     0,   -88,    51,
     140,    99,    94,   -88,   -88,   -88,   -88,   -45,   -88,   -88,
     -88,   -88,   -88,    46,   -88,   -88,   -88,    57,   -87,   -52,
     -88,   -62
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     6,     7,    65,    17,    18,    66,    67,    12,    96,
      32,    33,    34,    46,    11,    59,    36,    68,    69,    70,
      71,    72,   125,   126,    73,    74,   109,   110,    75,    76,
      81,    97
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,   128,    20,    13,     9,    22,    40,    41,    42,    43,
      26,    10,    64,    14,    10,     9,   113,    99,     9,    10,
       1,     2,     3,     9,    86,    87,    88,    89,    90,    91,
      92,    93,    15,    16,   131,     4,   101,    60,   121,    52,
      44,    45,   114,    19,     5,    27,    61,    62,    63,    27,
      28,    29,    21,   115,    94,    29,     1,     2,     3,    40,
      41,    42,    43,    64,    23,    30,   120,   129,   122,    30,
      24,     4,    31,    60,   136,    37,   124,    95,    98,    95,
       5,    39,    61,    62,    63,   137,   138,   142,     1,     2,
       3,   134,    24,    44,    45,   143,   144,   102,    25,    64,
      16,   148,    51,     4,    95,    60,   108,   112,    77,     1,
       2,     3,     5,   118,    61,    62,    63,     1,     2,     3,
     119,    58,   108,   132,     4,   112,     8,     1,     2,     3,
      78,    64,     4,     5,    47,    48,    82,     8,    49,    50,
       8,     5,     4,    56,    57,     8,    54,    55,    83,    79,
      80,    84,   111,   103,     5,   100,    85,   -16,   104,   107,
     105,   106,   117,   124,   123,    64,   133,   145,   116,    35,
      38,   135,   130,   139,   147,   127,     0,     0,     0,   141,
     140,     0,     0,   146,     0,     0,    53
};

static const yytype_int16 yycheck[] =
{
       0,    35,    11,     0,     0,    14,    10,    11,    12,    13,
      19,    11,    46,    35,    14,    11,   103,    79,    14,    19,
       3,     4,     5,    19,    69,    70,    71,    72,    73,    74,
      75,    76,    26,    27,   121,    18,    81,    20,    21,    43,
      44,    45,   104,    35,    27,    22,    29,    30,    31,    22,
      27,    28,    37,   105,    27,    28,     3,     4,     5,    10,
      11,    12,    13,    46,    42,    42,   111,   119,   113,    42,
      37,    18,    21,    20,    21,    24,    32,    77,    78,    79,
      27,    30,    29,    30,    31,   130,   131,   139,     3,     4,
       5,    47,    37,    44,    45,   140,   141,    42,    36,    46,
      27,   146,    43,    18,   104,    20,   102,   103,    42,     3,
       4,     5,    27,    36,    29,    30,    31,     3,     4,     5,
      43,    46,   118,   123,    18,   121,     0,     3,     4,     5,
      42,    46,    18,    27,    38,    39,    35,    11,    40,    41,
      14,    27,    18,    49,    50,    19,    47,    48,    27,    42,
      42,    35,    46,    43,    27,    27,    47,    37,    35,    47,
      43,    43,    27,    32,    35,    46,    28,    33,    46,    23,
      25,   125,    47,    43,    35,   118,    -1,    -1,    -1,    46,
      48,    -1,    -1,    47,    -1,    -1,    46
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,    18,    27,    50,    51,    52,    55,
      56,    63,    57,     0,    35,    26,    27,    53,    54,    35,
      51,    37,    51,    42,    37,    36,    51,    22,    27,    28,
      42,    58,    59,    60,    61,    53,    65,    58,    54,    58,
      10,    11,    12,    13,    44,    45,    62,    38,    39,    40,
      41,    43,    43,    59,    60,    60,    61,    61,    46,    64,
      20,    29,    30,    31,    46,    52,    55,    56,    66,    67,
      68,    69,    70,    73,    74,    77,    78,    42,    42,    42,
      42,    79,    35,    27,    35,    47,    66,    66,    66,    66,
      66,    66,    66,    66,    27,    56,    58,    80,    56,    80,
      27,    66,    42,    43,    35,    43,    43,    47,    55,    75,
      76,    46,    55,    77,    80,    78,    46,    27,    36,    43,
      66,    21,    66,    35,    32,    71,    72,    76,    35,    78,
      47,    77,    56,    28,    47,    72,    21,    66,    66,    43,
      48,    46,    78,    66,    66,    33,    47,    35,    66
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    49,    50,    51,    51,    51,    51,    52,    53,    53,
      54,    54,    55,    55,    55,    55,    57,    56,    58,    58,
      59,    59,    59,    60,    60,    60,    61,    61,    61,    61,
      62,    62,    62,    62,    62,    62,    64,    63,    65,    65,
      66,    66,    66,    66,    66,    66,    66,    66,    66,    67,
      67,    67,    67,    68,    69,    70,    71,    71,    72,    73,
      74,    75,    75,    75,    76,    77,    77,    79,    78,    80,
      80
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     3,     3,     0,     2,     3,     1,
       3,     1,     1,     1,     1,     1,     0,     4,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     9,     1,     0,
       2,     2,     2,     2,     2,     2,     2,     2,     0,    12,
       8,     6,     8,     9,     5,     7,     2,     1,     6,     6,
       6,     3,     1,     0,     2,     2,     2,     0,     4,     1,
       1
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* START: PROG  */
#line 31 "parser.y"
               { printf("Valid syntax\n"); YYACCEPT; }
#line 1263 "parser.tab.c"
    break;

  case 10: /* VAR: T_ID '=' EXPR  */
#line 49 "parser.y"
                        {
            /*
                check if symbol is in the table
                if it is then error for redeclared variable
                else make entry and insert into table
                insert value coming from EXPR
                revert variables to default values: vval, type
            */
            if ( check_symbol_table( yyvsp[-2], scope ) ) {
                yyerror( yyvsp[-2] );
            }
            insert_into_table( yyvsp[-2], type, yylineno, scope );
            insert_value_to_name( yyvsp[-2], vval, scope );
            vval = "~";
            type = -1;
		}
#line 1284 "parser.tab.c"
    break;

  case 11: /* VAR: T_ID  */
#line 65 "parser.y"
               {
            /*
                finished in lab 2
            */
            if ( check_symbol_table( yyvsp[0], scope ) != NULL ) {
                    yyerror( yyvsp[0] );
                }
                insert_into_table( yyvsp[0], type, yylineno, scope );
		}
#line 1298 "parser.tab.c"
    break;

  case 12: /* TYPE: T_INT  */
#line 77 "parser.y"
                {type = INT;}
#line 1304 "parser.tab.c"
    break;

  case 13: /* TYPE: T_FLOAT  */
#line 78 "parser.y"
                  {type = FLOAT;}
#line 1310 "parser.tab.c"
    break;

  case 14: /* TYPE: T_DOUBLE  */
#line 79 "parser.y"
                   {type = DOUBLE;}
#line 1316 "parser.tab.c"
    break;

  case 15: /* TYPE: T_CHAR  */
#line 80 "parser.y"
                 {type = CHAR;}
#line 1322 "parser.tab.c"
    break;

  case 16: /* $@1: %empty  */
#line 84 "parser.y"
               {    
                    global_p = get_symbol( yyvsp[0], scope );
                    type = global_p == NULL ? -1 : global_p->type;
               }
#line 1331 "parser.tab.c"
    break;

  case 17: /* ASSGN: T_ID $@1 '=' EXPR  */
#line 87 "parser.y"
                          {
            /*
                 Check if variable is declared in the table
                 if it is declared then insert value
                 else throw error
                 revert variable to default values: vval, type, global_p

                NOTE:   When the type on LHS does not match the type on RHS,
                        most compilers try to perform an implicit conversion to 
                        the type on the LHS. You can implement this type conversion
                        as a seperate function. In this lab, we throw an error
                        if there is a type mismatch.
            */
            if ( global_p == NULL ) {
                yyerror( yyvsp[-3] );
            }
            insert_value_to_symbol( global_p, vval );
            vval = "~";
            type = -1;
            global_p = NULL;
		}
#line 1357 "parser.tab.c"
    break;

  case 19: /* EXPR: E  */
#line 111 "parser.y"
            {
            // store value using value variable declared before
            vval = yyvsp[0];
        }
#line 1366 "parser.tab.c"
    break;

  case 20: /* E: E '+' T  */
#line 118 "parser.y"
                  { 
            /*
                check type
                if character type return error
                convert to int/float perform calculation
                convert back to string 
                copy to grammar rule E
            */
            if ( vtype == INT ) {
                printf("%s %s\n", yyvsp[-2], yyvsp[0]);
                sprintf( yyval, "%d", ( atoi( yyvsp[-2] ) + atoi( yyvsp[0] ) ) );
            } else if ( vtype == FLOAT || vtype == DOUBLE ) {
                sprintf( yyval, "%lf", ( atof( yyvsp[-2] ) + atof( yyvsp[0] ) ) );
            } else {
                fprintf( stderr, "Operation %s not supported for type %d",
                         yyvsp[-1], vtype );
                yyerror( yyval );
                yyval = "~";
            }
		}
#line 1391 "parser.tab.c"
    break;

  case 21: /* E: E '-' T  */
#line 138 "parser.y"
                  { 
            /*
                check type
                if character type return error
                convert to int/float perform calculation
                convert back to string 
                copy to grammar rule E
            */
            if ( vtype == INT ) {
                printf("%s %s\n", yyvsp[-2], yyvsp[0]);
                sprintf( yyval, "%d", ( atoi( yyvsp[-2] ) - atoi( yyvsp[0] ) ) );
            } else if ( vtype == FLOAT || vtype == DOUBLE ) {
                sprintf( yyval, "%lf", ( atof( yyvsp[-2] ) - atof( yyvsp[0] ) ) );
            } else {
                fprintf( stderr, "Operation %s not supported for type %d",
                         yyvsp[-1], vtype );
                yyerror( yyval );
                yyval = "~";
            }
		}
#line 1416 "parser.tab.c"
    break;

  case 22: /* E: T  */
#line 158 "parser.y"
            {
            //copy value from T to grammar rule E
            yyval = yyvsp[0];
        }
#line 1425 "parser.tab.c"
    break;

  case 23: /* T: T '*' F  */
#line 165 "parser.y"
                  { 
		    /*
		        check type
		        if character type return error
		        convert to int/float perform calculation
		        convert back to string 
		        copy to grammar rule T
            */
            if ( vtype == INT ) {
                printf("%s %s\n", yyvsp[-2], yyvsp[0]);
                sprintf( yyval, "%d", ( atoi( yyvsp[-2] ) * atoi( yyvsp[0] ) ) );
            } else if ( vtype == FLOAT || vtype == DOUBLE ) {
                sprintf( yyval, "%lf", ( atof( yyvsp[-2] ) * atof( yyvsp[0] ) ) );
            } else {
                fprintf( stderr, "Operation %s not supported for type %d",
                         yyvsp[-1], vtype );
                yyerror( yyval );
                yyval = "~";
            }
		}
#line 1450 "parser.tab.c"
    break;

  case 24: /* T: T '/' F  */
#line 185 "parser.y"
                        { 
		    /*
		        check type
		        if character type return error
		        convert to int/float perform calculation
		        convert back to string 
		        copy to grammar rule T
           	*/
           	if ( vtype == INT ) {
                printf("%s %s\n", yyvsp[-2], yyvsp[0]);
                sprintf( yyval, "%d", ( atoi( yyvsp[-2] ) / atoi( yyvsp[0] ) ) );
            } else if ( vtype == FLOAT || vtype == DOUBLE ) {
                sprintf( yyval, "%lf", ( atof( yyvsp[-2] ) / atof( yyvsp[0] ) ) );
            } else {
                fprintf( stderr, "Operation %s not supported for type %d",
                         yyvsp[-1], vtype );
                yyerror( yyval );
                yyval = "~";
            }
		}
#line 1475 "parser.tab.c"
    break;

  case 25: /* T: F  */
#line 205 "parser.y"
            {
            //copy value from F to grammar rule T
            yyval = yyvsp[0];
        }
#line 1484 "parser.tab.c"
    break;

  case 27: /* F: T_ID  */
#line 212 "parser.y"
               {
		    /*
		        check if variable is in table
		        check the value in the variable is default
		        if yes return error for variable not initialised
		        else duplicate value from T_ID to F
		        check for type match
		        (secondary type variable vtype used here)
            */
            symbol *s = get_symbol( yyvsp[0], scope );
            if ( s == NULL ) {
                fprintf( stderr, "%s is not declared\n", yyvsp[0] );
                yyerror( yyvsp[0] );
            }
            if ( !strcmp( s->val, "~" ) ) {
                fprintf( stderr, "%s is not initialized\n", yyvsp[0] );
                yyerror( yyvsp[0] );
            }
            yyval = strdup( s->val );
            vtype = get_type( s->val );
            if ( vtype != type && type != -1 ) {
                fprintf( stderr, "Cannot assign type %d to type %d\n", vtype, type );
                yyerror( yyvsp[0] );
            }
		}
#line 1514 "parser.tab.c"
    break;

  case 28: /* F: T_NUM  */
#line 237 "parser.y"
                {
    		/*
		        duplicate value from T_NUM to F
		        check for type match
		        (secondary type variable vtype used here)

                the if condition contains a workaround for ambiguity between
                assigning float or double to T_NUM
             */
             yyval = strdup( yyvsp[0] );
             vtype = get_type( yyvsp[0] );
             if ( vtype != type && type != -1 &&
                  !( vtype == DOUBLE && type == FLOAT ) &&    
                  !( vtype == FLOAT && type == DOUBLE ) ) {
                fprintf( stderr, "Cannot assign type %d to type %d\n", vtype, type );
                yyerror( yyvsp[0] );
            }
		}
#line 1537 "parser.tab.c"
    break;

  case 29: /* F: T_STRLITERAL  */
#line 255 "parser.y"
                       {
            /*
			    duplicate value from T_STRLITERAL to F
			    check for type match
			    (secondary type variable vtype used here)
            */
            yyval = strdup( yyvsp[0] );
            vtype = 1;
            if ( vtype != type ) {
                fprintf( stderr, "Cannot assign char * to type %d\n", type );
                yyerror( yyvsp[0] );
            }
		}
#line 1555 "parser.tab.c"
    break;

  case 36: /* $@2: %empty  */
#line 283 "parser.y"
                                             { scope++; }
#line 1561 "parser.tab.c"
    break;

  case 37: /* MAIN: TYPE T_MAIN '(' EMPTY_LISTVAR ')' '{' $@2 STMT '}'  */
#line 283 "parser.y"
                                                                   { scope--; }
#line 1567 "parser.tab.c"
    break;

  case 67: /* $@3: %empty  */
#line 342 "parser.y"
              { scope++; }
#line 1573 "parser.tab.c"
    break;

  case 68: /* BLOCK: '{' $@3 STMT '}'  */
#line 342 "parser.y"
                                    { scope--; }
#line 1579 "parser.tab.c"
    break;


#line 1583 "parser.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 349 "parser.y"


/* error handling function */
void yyerror(char* s)
{
	printf("Error :%s at %d \n",s,yylineno);
}

int main(int argc, char* argv[])
{
	/* initialise table here */
    t = allocate_space_for_table(); 
	yyparse();
	/* display final symbol table*/
    display_symbol_table();
	return 0;

}
