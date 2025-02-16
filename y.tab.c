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


#line 92 "y.tab.c"

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

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    T_INT = 258,                   /* T_INT  */
    T_CHAR = 259,                  /* T_CHAR  */
    T_DOUBLE = 260,                /* T_DOUBLE  */
    T_INC = 261,                   /* T_INC  */
    T_DEC = 262,                   /* T_DEC  */
    T_OROR = 263,                  /* T_OROR  */
    T_ANDAND = 264,                /* T_ANDAND  */
    T_EQCOMP = 265,                /* T_EQCOMP  */
    T_NOTEQUAL = 266,              /* T_NOTEQUAL  */
    T_GREATEREQ = 267,             /* T_GREATEREQ  */
    T_LESSEREQ = 268,              /* T_LESSEREQ  */
    T_LEFTSHIFT = 269,             /* T_LEFTSHIFT  */
    T_RIGHTSHIFT = 270,            /* T_RIGHTSHIFT  */
    T_PRINTLN = 271,               /* T_PRINTLN  */
    T_STRING = 272,                /* T_STRING  */
    T_FLOAT = 273,                 /* T_FLOAT  */
    T_BOOLEAN = 274,               /* T_BOOLEAN  */
    T_IF = 275,                    /* T_IF  */
    T_ELSE = 276,                  /* T_ELSE  */
    T_STRLITERAL = 277,            /* T_STRLITERAL  */
    T_DO = 278,                    /* T_DO  */
    T_INCLUDE = 279,               /* T_INCLUDE  */
    T_HEADER = 280,                /* T_HEADER  */
    T_MAIN = 281,                  /* T_MAIN  */
    T_ID = 282,                    /* T_ID  */
    T_NUM = 283,                   /* T_NUM  */
    T_FOR = 284,                   /* T_FOR  */
    T_WHILE = 285,                 /* T_WHILE  */
    T_SWITCH = 286,                /* T_SWITCH  */
    T_CASE = 287,                  /* T_CASE  */
    T_BREAK = 288,                 /* T_BREAK  */
    T_CONTINUE = 289,              /* T_CONTINUE  */
    T_RETURN = 290                 /* T_RETURN  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEMPTY -2
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
#define T_INT 258
#define T_CHAR 259
#define T_DOUBLE 260
#define T_INC 261
#define T_DEC 262
#define T_OROR 263
#define T_ANDAND 264
#define T_EQCOMP 265
#define T_NOTEQUAL 266
#define T_GREATEREQ 267
#define T_LESSEREQ 268
#define T_LEFTSHIFT 269
#define T_RIGHTSHIFT 270
#define T_PRINTLN 271
#define T_STRING 272
#define T_FLOAT 273
#define T_BOOLEAN 274
#define T_IF 275
#define T_ELSE 276
#define T_STRLITERAL 277
#define T_DO 278
#define T_INCLUDE 279
#define T_HEADER 280
#define T_MAIN 281
#define T_ID 282
#define T_NUM 283
#define T_FOR 284
#define T_WHILE 285
#define T_SWITCH 286
#define T_CASE 287
#define T_BREAK 288
#define T_CONTINUE 289
#define T_RETURN 290

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;


int yyparse (void);


#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
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
  YYSYMBOL_T_RETURN = 35,                  /* T_RETURN  */
  YYSYMBOL_36_ = 36,                       /* ';'  */
  YYSYMBOL_37_ = 37,                       /* ','  */
  YYSYMBOL_38_ = 38,                       /* '='  */
  YYSYMBOL_39_ = 39,                       /* '+'  */
  YYSYMBOL_40_ = 40,                       /* '-'  */
  YYSYMBOL_41_ = 41,                       /* '*'  */
  YYSYMBOL_42_ = 42,                       /* '/'  */
  YYSYMBOL_43_ = 43,                       /* '('  */
  YYSYMBOL_44_ = 44,                       /* ')'  */
  YYSYMBOL_45_ = 45,                       /* '<'  */
  YYSYMBOL_46_ = 46,                       /* '>'  */
  YYSYMBOL_47_ = 47,                       /* '{'  */
  YYSYMBOL_48_ = 48,                       /* '}'  */
  YYSYMBOL_49_ = 49,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 50,                  /* $accept  */
  YYSYMBOL_START = 51,                     /* START  */
  YYSYMBOL_PROG = 52,                      /* PROG  */
  YYSYMBOL_DECLR = 53,                     /* DECLR  */
  YYSYMBOL_LISTVAR = 54,                   /* LISTVAR  */
  YYSYMBOL_VAR = 55,                       /* VAR  */
  YYSYMBOL_TYPE = 56,                      /* TYPE  */
  YYSYMBOL_ASSGN = 57,                     /* ASSGN  */
  YYSYMBOL_58_1 = 58,                      /* $@1  */
  YYSYMBOL_EXPR = 59,                      /* EXPR  */
  YYSYMBOL_E = 60,                         /* E  */
  YYSYMBOL_T = 61,                         /* T  */
  YYSYMBOL_F = 62,                         /* F  */
  YYSYMBOL_REL_OP = 63,                    /* REL_OP  */
  YYSYMBOL_MAIN = 64,                      /* MAIN  */
  YYSYMBOL_65_2 = 65,                      /* $@2  */
  YYSYMBOL_EMPTY_LISTVAR = 66,             /* EMPTY_LISTVAR  */
  YYSYMBOL_STMT = 67,                      /* STMT  */
  YYSYMBOL_IF_ELSE = 68,                   /* IF_ELSE  */
  YYSYMBOL_FOR_LOOP = 69,                  /* FOR_LOOP  */
  YYSYMBOL_WHILE_LOOP = 70,                /* WHILE_LOOP  */
  YYSYMBOL_SWITCH_STMT = 71,               /* SWITCH_STMT  */
  YYSYMBOL_CASES = 72,                     /* CASES  */
  YYSYMBOL_CASE = 73,                      /* CASE  */
  YYSYMBOL_FUNC_DECL = 74,                 /* FUNC_DECL  */
  YYSYMBOL_FUNC_DEF = 75,                  /* FUNC_DEF  */
  YYSYMBOL_PARAM_LIST = 76,                /* PARAM_LIST  */
  YYSYMBOL_PARAM = 77,                     /* PARAM  */
  YYSYMBOL_RET_STMT = 78,                  /* RET_STMT  */
  YYSYMBOL_STMT_NO_BLOCK = 79,             /* STMT_NO_BLOCK  */
  YYSYMBOL_BLOCK = 80,                     /* BLOCK  */
  YYSYMBOL_81_3 = 81,                      /* $@3  */
  YYSYMBOL_COND = 82                       /* COND  */
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
#define YYLAST   208

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  33
/* YYNRULES -- Number of rules.  */
#define YYNRULES  75
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  157

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   290


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
      43,    44,    41,    39,    37,    40,     2,    42,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    49,    36,
      45,    38,    46,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    47,     2,    48,     2,     2,     2,     2,
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
      35
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    32,    32,    35,    36,    37,    38,    42,    46,    47,
      50,    66,    78,    79,    80,    81,    85,    85,   111,   112,
     119,   139,   159,   166,   186,   206,   212,   213,   238,   256,
     273,   274,   275,   276,   277,   278,   284,   284,   287,   288,
     291,   292,   293,   294,   295,   296,   297,   298,   299,   300,
     303,   304,   305,   306,   309,   312,   315,   318,   318,   321,
     324,   327,   328,   331,   332,   333,   336,   340,   341,   344,
     345,   346,   350,   350,   353,   354
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
  "T_CONTINUE", "T_RETURN", "';'", "','", "'='", "'+'", "'-'", "'*'",
  "'/'", "'('", "')'", "'<'", "'>'", "'{'", "'}'", "':'", "$accept",
  "START", "PROG", "DECLR", "LISTVAR", "VAR", "TYPE", "ASSGN", "$@1",
  "EXPR", "E", "T", "F", "REL_OP", "MAIN", "$@2", "EMPTY_LISTVAR", "STMT",
  "IF_ELSE", "FOR_LOOP", "WHILE_LOOP", "SWITCH_STMT", "CASES", "CASE",
  "FUNC_DECL", "FUNC_DEF", "PARAM_LIST", "PARAM", "RET_STMT",
  "STMT_NO_BLOCK", "BLOCK", "$@3", "COND", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-78)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-17)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      79,   -78,   -78,   -78,   -78,   -78,     6,   -78,   -27,    34,
       9,    79,     2,   -78,    79,     8,    16,    20,   -78,    79,
     -78,   136,   -78,    39,   136,    39,   -78,   -78,   -78,   -78,
     136,   129,    65,    82,   -78,    20,    45,   129,   -78,   104,
     -78,   -78,   -78,   -78,   -78,   -78,   136,   136,   136,   136,
     136,    31,   -78,    65,    82,    82,   -78,   -78,   -78,    91,
      50,    55,    57,    88,   134,   -78,    89,   110,   111,   107,
      91,    91,    91,    91,    91,    91,    91,    91,    91,   138,
     130,   138,   145,   -78,   123,    91,   -78,   -35,   -78,   -78,
     -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   -78,   135,
     -78,   129,   139,   142,   143,   144,   -78,   141,    83,    72,
     138,   133,   146,   -78,   159,   -32,   -78,    91,    39,   -78,
      17,   155,   -78,   160,   -78,    83,   -34,   147,   149,   -78,
     130,   166,   -31,   -78,   -78,   -78,   161,    38,    91,   153,
     150,   -78,   -78,   -78,   151,   -78,   -78,   133,    91,    91,
     -78,   167,   154,   165,    91,   -78,   -78
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
       0,     0,    26,    18,    20,    21,    23,    24,    36,    49,
       0,     0,     0,     0,     0,    72,     0,     0,     0,     0,
      49,    49,    49,    49,    49,    49,    49,    49,    49,     0,
       0,     0,     0,    68,     0,    49,    69,    11,    70,    37,
      42,    43,    44,    45,    46,    47,    48,    40,    41,    27,
      75,    74,     0,     0,     0,     0,    67,     0,    65,     0,
       0,     0,     0,    73,     0,     0,    64,    49,     0,    71,
      49,     0,    55,     0,    66,     0,     0,     0,     0,    52,
       0,     0,     0,    58,    63,    60,    61,    49,    49,     0,
       0,    56,    57,    62,     0,    51,    53,     0,    49,    49,
      54,     0,     0,     0,    49,    59,    50
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -78,   -78,   132,   171,   180,   179,     4,     0,   -78,   -14,
     162,    80,    95,   -78,   -78,   -78,   -78,   -46,   -78,   -78,
     -78,   -78,   -78,    73,   -78,   -78,   -78,    81,   -73,   -56,
     -77,   -78,   -48
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     6,     7,    66,    17,    18,    67,    68,    12,   101,
      32,    33,    34,    46,    11,    59,    36,    69,    70,    71,
      72,    73,   132,   133,    74,    75,   115,   116,    76,    77,
      78,    85,   102
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      10,   131,   135,    24,     9,   125,    13,    31,   108,    14,
      37,    10,   126,    65,    10,     9,    39,   141,     9,    10,
       1,     2,     3,     9,    90,    91,    92,    93,    94,    95,
      96,    97,    98,   104,   122,     4,   119,    60,   128,   107,
      21,     1,     2,     3,     5,    19,    61,    62,    63,   136,
      84,    23,    64,   120,    24,   119,     4,    25,    60,   144,
      15,    16,   121,   143,    65,     5,    16,    61,    62,    63,
     150,   127,   138,    64,   129,     1,     2,     3,    58,   100,
     103,   100,     1,     2,     3,    65,     1,     2,     3,    51,
       4,   145,   146,    79,     1,     2,     3,     4,    80,     5,
      81,     4,   151,   152,    47,    48,     5,    64,   156,     4,
     100,    60,   114,   118,    40,    41,    42,    43,     5,   117,
      61,    62,    63,    49,    50,    86,    64,    54,    55,   114,
     139,    82,   118,    40,    41,    42,    43,    87,    65,    40,
      41,    42,    43,    20,    56,    57,    22,    88,    52,    44,
      45,    26,     1,     2,     3,    89,    27,     5,    27,   106,
      27,    28,    29,    28,    29,    99,    29,     4,    44,    45,
      83,     8,   105,   -16,    44,    45,     5,    30,   110,    30,
      65,    30,     8,   109,    64,     8,   124,   111,   112,   113,
       8,   130,   131,   123,   140,   137,    64,   147,   149,   148,
     153,   155,   154,    35,    38,   142,   134,     0,    53
};

static const yytype_int16 yycheck[] =
{
       0,    32,    36,    38,     0,    37,     0,    21,    43,    36,
      24,    11,    44,    47,    14,    11,    30,    48,    14,    19,
       3,     4,     5,    19,    70,    71,    72,    73,    74,    75,
      76,    77,    78,    81,   111,    18,   109,    20,    21,    85,
      38,     3,     4,     5,    27,    36,    29,    30,    31,   126,
      64,    43,    35,   109,    38,   128,    18,    37,    20,    21,
      26,    27,   110,   136,    47,    27,    27,    29,    30,    31,
     147,   117,   128,    35,   120,     3,     4,     5,    47,    79,
      80,    81,     3,     4,     5,    47,     3,     4,     5,    44,
      18,   137,   138,    43,     3,     4,     5,    18,    43,    27,
      43,    18,   148,   149,    39,    40,    27,    35,   154,    18,
     110,    20,   108,   109,    10,    11,    12,    13,    27,    47,
      29,    30,    31,    41,    42,    36,    35,    47,    48,   125,
     130,    43,   128,    10,    11,    12,    13,    27,    47,    10,
      11,    12,    13,    11,    49,    50,    14,    36,    44,    45,
      46,    19,     3,     4,     5,    48,    22,    27,    22,    36,
      22,    27,    28,    27,    28,    27,    28,    18,    45,    46,
      36,     0,    27,    38,    45,    46,    27,    43,    36,    43,
      47,    43,    11,    44,    35,    14,    27,    44,    44,    48,
      19,    36,    32,    47,    28,    48,    35,    44,    47,    49,
      33,    36,    48,    23,    25,   132,   125,    -1,    46
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,    18,    27,    51,    52,    53,    56,
      57,    64,    58,     0,    36,    26,    27,    54,    55,    36,
      52,    38,    52,    43,    38,    37,    52,    22,    27,    28,
      43,    59,    60,    61,    62,    54,    66,    59,    55,    59,
      10,    11,    12,    13,    45,    46,    63,    39,    40,    41,
      42,    44,    44,    60,    61,    61,    62,    62,    47,    65,
      20,    29,    30,    31,    35,    47,    53,    56,    57,    67,
      68,    69,    70,    71,    74,    75,    78,    79,    80,    43,
      43,    43,    43,    36,    59,    81,    36,    27,    36,    48,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    27,
      57,    59,    82,    57,    82,    27,    36,    67,    43,    44,
      36,    44,    44,    48,    56,    76,    77,    47,    56,    78,
      79,    82,    80,    47,    27,    37,    44,    67,    21,    67,
      36,    32,    72,    73,    77,    36,    80,    48,    79,    57,
      28,    48,    73,    78,    21,    67,    67,    44,    49,    47,
      80,    67,    67,    33,    48,    36,    67
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    50,    51,    52,    52,    52,    52,    53,    54,    54,
      55,    55,    56,    56,    56,    56,    58,    57,    59,    59,
      60,    60,    60,    61,    61,    61,    62,    62,    62,    62,
      63,    63,    63,    63,    63,    63,    65,    64,    66,    66,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      68,    68,    68,    68,    69,    70,    71,    72,    72,    73,
      74,    75,    75,    76,    76,    76,    77,    78,    78,    79,
      79,    79,    81,    80,    82,    82
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     2,     3,     3,     0,     2,     3,     1,
       3,     1,     1,     1,     1,     1,     0,     4,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     0,     9,     1,     0,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     0,
      12,     8,     6,     8,     9,     5,     7,     2,     1,     6,
       6,     6,     7,     3,     1,     0,     2,     3,     2,     2,
       2,     1,     0,     4,     1,     1
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
#line 32 "parser.y"
               { printf("Valid syntax\n"); YYACCEPT; }
#line 1384 "y.tab.c"
    break;

  case 10: /* VAR: T_ID '=' EXPR  */
#line 50 "parser.y"
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
#line 1405 "y.tab.c"
    break;

  case 11: /* VAR: T_ID  */
#line 66 "parser.y"
               {
            /*
                finished in lab 2
            */
            if ( check_symbol_table( yyvsp[0], scope ) != NULL ) {
                    yyerror( yyvsp[0] );
                }
                insert_into_table( yyvsp[0], type, yylineno, scope );
		}
#line 1419 "y.tab.c"
    break;

  case 12: /* TYPE: T_INT  */
#line 78 "parser.y"
                {type = INT;}
#line 1425 "y.tab.c"
    break;

  case 13: /* TYPE: T_FLOAT  */
#line 79 "parser.y"
                  {type = FLOAT;}
#line 1431 "y.tab.c"
    break;

  case 14: /* TYPE: T_DOUBLE  */
#line 80 "parser.y"
                   {type = DOUBLE;}
#line 1437 "y.tab.c"
    break;

  case 15: /* TYPE: T_CHAR  */
#line 81 "parser.y"
                 {type = CHAR;}
#line 1443 "y.tab.c"
    break;

  case 16: /* $@1: %empty  */
#line 85 "parser.y"
               {    
                    global_p = get_symbol( yyvsp[0], scope );
                    type = global_p == NULL ? -1 : global_p->type;
               }
#line 1452 "y.tab.c"
    break;

  case 17: /* ASSGN: T_ID $@1 '=' EXPR  */
#line 88 "parser.y"
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
#line 1478 "y.tab.c"
    break;

  case 19: /* EXPR: E  */
#line 112 "parser.y"
            {
            // store value using value variable declared before
            vval = yyvsp[0];
        }
#line 1487 "y.tab.c"
    break;

  case 20: /* E: E '+' T  */
#line 119 "parser.y"
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
#line 1512 "y.tab.c"
    break;

  case 21: /* E: E '-' T  */
#line 139 "parser.y"
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
#line 1537 "y.tab.c"
    break;

  case 22: /* E: T  */
#line 159 "parser.y"
            {
            //copy value from T to grammar rule E
            yyval = yyvsp[0];
        }
#line 1546 "y.tab.c"
    break;

  case 23: /* T: T '*' F  */
#line 166 "parser.y"
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
#line 1571 "y.tab.c"
    break;

  case 24: /* T: T '/' F  */
#line 186 "parser.y"
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
#line 1596 "y.tab.c"
    break;

  case 25: /* T: F  */
#line 206 "parser.y"
            {
            //copy value from F to grammar rule T
            yyval = yyvsp[0];
        }
#line 1605 "y.tab.c"
    break;

  case 27: /* F: T_ID  */
#line 213 "parser.y"
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
#line 1635 "y.tab.c"
    break;

  case 28: /* F: T_NUM  */
#line 238 "parser.y"
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
#line 1658 "y.tab.c"
    break;

  case 29: /* F: T_STRLITERAL  */
#line 256 "parser.y"
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
#line 1676 "y.tab.c"
    break;

  case 36: /* $@2: %empty  */
#line 284 "parser.y"
                                             { scope++; }
#line 1682 "y.tab.c"
    break;

  case 37: /* MAIN: TYPE T_MAIN '(' EMPTY_LISTVAR ')' '{' $@2 STMT '}'  */
#line 284 "parser.y"
                                                                   { scope--; }
#line 1688 "y.tab.c"
    break;

  case 72: /* $@3: %empty  */
#line 350 "parser.y"
              { scope++; }
#line 1694 "y.tab.c"
    break;

  case 73: /* BLOCK: '{' $@3 STMT '}'  */
#line 350 "parser.y"
                                    { scope--; }
#line 1700 "y.tab.c"
    break;


#line 1704 "y.tab.c"

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

#line 357 "parser.y"


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
