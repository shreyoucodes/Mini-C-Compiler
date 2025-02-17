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
    T_EQCOMP = 263,                /* T_EQCOMP  */
    T_NOTEQUAL = 264,              /* T_NOTEQUAL  */
    T_GREATEREQ = 265,             /* T_GREATEREQ  */
    T_LESSEREQ = 266,              /* T_LESSEREQ  */
    T_LEFTSHIFT = 267,             /* T_LEFTSHIFT  */
    T_RIGHTSHIFT = 268,            /* T_RIGHTSHIFT  */
    T_PRINTLN = 269,               /* T_PRINTLN  */
    T_FLOAT = 270,                 /* T_FLOAT  */
    T_IF = 271,                    /* T_IF  */
    T_ELSE = 272,                  /* T_ELSE  */
    T_DO = 273,                    /* T_DO  */
    T_INCLUDE = 274,               /* T_INCLUDE  */
    T_HEADER = 275,                /* T_HEADER  */
    T_MAIN = 276,                  /* T_MAIN  */
    T_ID = 277,                    /* T_ID  */
    T_NUM = 278,                   /* T_NUM  */
    T_FOR = 279,                   /* T_FOR  */
    T_WHILE = 280,                 /* T_WHILE  */
    T_SWITCH = 281,                /* T_SWITCH  */
    T_CASE = 282,                  /* T_CASE  */
    T_BREAK = 283,                 /* T_BREAK  */
    T_CONTINUE = 284,              /* T_CONTINUE  */
    T_OROR = 285,                  /* T_OROR  */
    T_ANDAND = 286,                /* T_ANDAND  */
    T_NOT = 287,                   /* T_NOT  */
    T_BOOLEAN = 288,               /* T_BOOLEAN  */
    T_BOOLLITERAL = 289,           /* T_BOOLLITERAL  */
    T_STRLITERAL = 290,            /* T_STRLITERAL  */
    T_RETURN = 291                 /* T_RETURN  */
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
#define T_EQCOMP 263
#define T_NOTEQUAL 264
#define T_GREATEREQ 265
#define T_LESSEREQ 266
#define T_LEFTSHIFT 267
#define T_RIGHTSHIFT 268
#define T_PRINTLN 269
#define T_FLOAT 270
#define T_IF 271
#define T_ELSE 272
#define T_DO 273
#define T_INCLUDE 274
#define T_HEADER 275
#define T_MAIN 276
#define T_ID 277
#define T_NUM 278
#define T_FOR 279
#define T_WHILE 280
#define T_SWITCH 281
#define T_CASE 282
#define T_BREAK 283
#define T_CONTINUE 284
#define T_OROR 285
#define T_ANDAND 286
#define T_NOT 287
#define T_BOOLEAN 288
#define T_BOOLLITERAL 289
#define T_STRLITERAL 290
#define T_RETURN 291

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
  YYSYMBOL_T_EQCOMP = 8,                   /* T_EQCOMP  */
  YYSYMBOL_T_NOTEQUAL = 9,                 /* T_NOTEQUAL  */
  YYSYMBOL_T_GREATEREQ = 10,               /* T_GREATEREQ  */
  YYSYMBOL_T_LESSEREQ = 11,                /* T_LESSEREQ  */
  YYSYMBOL_T_LEFTSHIFT = 12,               /* T_LEFTSHIFT  */
  YYSYMBOL_T_RIGHTSHIFT = 13,              /* T_RIGHTSHIFT  */
  YYSYMBOL_T_PRINTLN = 14,                 /* T_PRINTLN  */
  YYSYMBOL_T_FLOAT = 15,                   /* T_FLOAT  */
  YYSYMBOL_T_IF = 16,                      /* T_IF  */
  YYSYMBOL_T_ELSE = 17,                    /* T_ELSE  */
  YYSYMBOL_T_DO = 18,                      /* T_DO  */
  YYSYMBOL_T_INCLUDE = 19,                 /* T_INCLUDE  */
  YYSYMBOL_T_HEADER = 20,                  /* T_HEADER  */
  YYSYMBOL_T_MAIN = 21,                    /* T_MAIN  */
  YYSYMBOL_T_ID = 22,                      /* T_ID  */
  YYSYMBOL_T_NUM = 23,                     /* T_NUM  */
  YYSYMBOL_T_FOR = 24,                     /* T_FOR  */
  YYSYMBOL_T_WHILE = 25,                   /* T_WHILE  */
  YYSYMBOL_T_SWITCH = 26,                  /* T_SWITCH  */
  YYSYMBOL_T_CASE = 27,                    /* T_CASE  */
  YYSYMBOL_T_BREAK = 28,                   /* T_BREAK  */
  YYSYMBOL_T_CONTINUE = 29,                /* T_CONTINUE  */
  YYSYMBOL_T_OROR = 30,                    /* T_OROR  */
  YYSYMBOL_T_ANDAND = 31,                  /* T_ANDAND  */
  YYSYMBOL_T_NOT = 32,                     /* T_NOT  */
  YYSYMBOL_T_BOOLEAN = 33,                 /* T_BOOLEAN  */
  YYSYMBOL_T_BOOLLITERAL = 34,             /* T_BOOLLITERAL  */
  YYSYMBOL_T_STRLITERAL = 35,              /* T_STRLITERAL  */
  YYSYMBOL_T_RETURN = 36,                  /* T_RETURN  */
  YYSYMBOL_37_ = 37,                       /* ';'  */
  YYSYMBOL_38_ = 38,                       /* ','  */
  YYSYMBOL_39_ = 39,                       /* '='  */
  YYSYMBOL_40_ = 40,                       /* '['  */
  YYSYMBOL_41_ = 41,                       /* ']'  */
  YYSYMBOL_42_ = 42,                       /* '+'  */
  YYSYMBOL_43_ = 43,                       /* '-'  */
  YYSYMBOL_44_ = 44,                       /* '*'  */
  YYSYMBOL_45_ = 45,                       /* '/'  */
  YYSYMBOL_46_ = 46,                       /* '('  */
  YYSYMBOL_47_ = 47,                       /* ')'  */
  YYSYMBOL_48_ = 48,                       /* '<'  */
  YYSYMBOL_49_ = 49,                       /* '>'  */
  YYSYMBOL_50_ = 50,                       /* '{'  */
  YYSYMBOL_51_ = 51,                       /* '}'  */
  YYSYMBOL_52_ = 52,                       /* ':'  */
  YYSYMBOL_YYACCEPT = 53,                  /* $accept  */
  YYSYMBOL_START = 54,                     /* START  */
  YYSYMBOL_PROG = 55,                      /* PROG  */
  YYSYMBOL_DECLR = 56,                     /* DECLR  */
  YYSYMBOL_LISTVAR = 57,                   /* LISTVAR  */
  YYSYMBOL_VAR = 58,                       /* VAR  */
  YYSYMBOL_TYPE = 59,                      /* TYPE  */
  YYSYMBOL_ASSGN = 60,                     /* ASSGN  */
  YYSYMBOL_61_1 = 61,                      /* $@1  */
  YYSYMBOL_EXPR = 62,                      /* EXPR  */
  YYSYMBOL_E = 63,                         /* E  */
  YYSYMBOL_T = 64,                         /* T  */
  YYSYMBOL_F = 65,                         /* F  */
  YYSYMBOL_UPDATE = 66,                    /* UPDATE  */
  YYSYMBOL_REL_OP = 67,                    /* REL_OP  */
  YYSYMBOL_ARRAY_DECL = 68,                /* ARRAY_DECL  */
  YYSYMBOL_ARRAY_DIM = 69,                 /* ARRAY_DIM  */
  YYSYMBOL_ARRAY_INIT = 70,                /* ARRAY_INIT  */
  YYSYMBOL_ARRAY_LIST = 71,                /* ARRAY_LIST  */
  YYSYMBOL_MAIN = 72,                      /* MAIN  */
  YYSYMBOL_73_2 = 73,                      /* $@2  */
  YYSYMBOL_EMPTY_LISTVAR = 74,             /* EMPTY_LISTVAR  */
  YYSYMBOL_STMT = 75,                      /* STMT  */
  YYSYMBOL_IF_ELSE = 76,                   /* IF_ELSE  */
  YYSYMBOL_FOR_LOOP = 77,                  /* FOR_LOOP  */
  YYSYMBOL_FOR_INIT = 78,                  /* FOR_INIT  */
  YYSYMBOL_FOR_UP = 79,                    /* FOR_UP  */
  YYSYMBOL_WHILE_LOOP = 80,                /* WHILE_LOOP  */
  YYSYMBOL_DO_WHILE_LOOP = 81,             /* DO_WHILE_LOOP  */
  YYSYMBOL_SWITCH_STMT = 82,               /* SWITCH_STMT  */
  YYSYMBOL_CASES = 83,                     /* CASES  */
  YYSYMBOL_CASE = 84,                      /* CASE  */
  YYSYMBOL_FUNC_DECL = 85,                 /* FUNC_DECL  */
  YYSYMBOL_FUNC_DEF = 86,                  /* FUNC_DEF  */
  YYSYMBOL_PARAM_LIST = 87,                /* PARAM_LIST  */
  YYSYMBOL_PARAM = 88,                     /* PARAM  */
  YYSYMBOL_RET_STMT = 89,                  /* RET_STMT  */
  YYSYMBOL_STMT_NO_BLOCK = 90,             /* STMT_NO_BLOCK  */
  YYSYMBOL_BLOCK = 91,                     /* BLOCK  */
  YYSYMBOL_92_3 = 92,                      /* $@3  */
  YYSYMBOL_COND = 93                       /* COND  */
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
#define YYFINAL  17
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   336

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  53
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  41
/* YYNRULES -- Number of rules.  */
#define YYNRULES  107
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  219

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   291


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
      46,    47,    44,    42,    38,    43,     2,    45,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    52,    37,
      48,    39,    49,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    40,     2,    41,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,     2,    51,     2,     2,     2,     2,
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
      35,    36
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    34,    34,    37,    38,    39,    40,    41,    44,    47,
      48,    51,    67,    73,    79,   106,   107,   108,   109,   110,
     114,   114,   138,   158,   159,   162,   165,   168,   171,   174,
     180,   200,   220,   227,   247,   267,   273,   274,   299,   317,
     330,   333,   355,   377,   399,   423,   424,   425,   426,   427,
     428,   431,   432,   433,   436,   437,   438,   445,   450,   455,
     462,   462,   465,   466,   469,   470,   471,   472,   473,   474,
     475,   476,   477,   478,   479,   482,   483,   484,   485,   488,
     491,   492,   493,   496,   497,   498,   501,   504,   507,   510,
     510,   513,   516,   519,   520,   523,   524,   525,   528,   532,
     533,   536,   537,   538,   542,   542,   545,   546
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
  "T_DOUBLE", "T_INC", "T_DEC", "T_EQCOMP", "T_NOTEQUAL", "T_GREATEREQ",
  "T_LESSEREQ", "T_LEFTSHIFT", "T_RIGHTSHIFT", "T_PRINTLN", "T_FLOAT",
  "T_IF", "T_ELSE", "T_DO", "T_INCLUDE", "T_HEADER", "T_MAIN", "T_ID",
  "T_NUM", "T_FOR", "T_WHILE", "T_SWITCH", "T_CASE", "T_BREAK",
  "T_CONTINUE", "T_OROR", "T_ANDAND", "T_NOT", "T_BOOLEAN",
  "T_BOOLLITERAL", "T_STRLITERAL", "T_RETURN", "';'", "','", "'='", "'['",
  "']'", "'+'", "'-'", "'*'", "'/'", "'('", "')'", "'<'", "'>'", "'{'",
  "'}'", "':'", "$accept", "START", "PROG", "DECLR", "LISTVAR", "VAR",
  "TYPE", "ASSGN", "$@1", "EXPR", "E", "T", "F", "UPDATE", "REL_OP",
  "ARRAY_DECL", "ARRAY_DIM", "ARRAY_INIT", "ARRAY_LIST", "MAIN", "$@2",
  "EMPTY_LISTVAR", "STMT", "IF_ELSE", "FOR_LOOP", "FOR_INIT", "FOR_UP",
  "WHILE_LOOP", "DO_WHILE_LOOP", "SWITCH_STMT", "CASES", "CASE",
  "FUNC_DECL", "FUNC_DEF", "PARAM_LIST", "PARAM", "RET_STMT",
  "STMT_NO_BLOCK", "BLOCK", "$@3", "COND", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-163)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-57)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     290,  -163,  -163,  -163,  -163,   -15,   -32,  -163,    58,  -163,
      25,    44,    30,   290,   290,    80,    37,  -163,   290,    34,
      35,    50,  -163,   290,  -163,  -163,    87,    89,    99,  -163,
      80,  -163,   159,    80,   200,   127,   106,  -163,  -163,    80,
    -163,   101,   193,   164,  -163,    90,  -163,   101,  -163,  -163,
    -163,  -163,  -163,     1,   224,  -163,  -163,  -163,  -163,    80,
      80,   100,  -163,  -163,   276,   276,   276,   276,   276,     1,
      50,   128,    80,     1,   112,   136,   129,  -163,  -163,  -163,
       1,     1,    80,  -163,   127,   106,   106,  -163,  -163,   141,
       1,   -35,  -163,   157,     1,  -163,    80,  -163,   191,  -163,
     156,     1,   166,   173,   148,   176,   178,   183,   230,  -163,
     201,   220,   207,   194,   156,   156,   156,   156,   156,   156,
     156,   156,   156,   156,   206,   268,   156,   303,   268,   225,
    -163,   248,   156,  -163,   108,  -163,  -163,  -163,  -163,  -163,
    -163,  -163,  -163,  -163,  -163,  -163,  -163,    20,  -163,     1,
     203,   209,  -163,   101,  -163,   214,   216,   219,  -163,   210,
      68,   190,   243,   268,   227,   231,  -163,   247,    16,  -163,
     156,  -163,    74,   234,   233,  -163,   257,  -163,    68,   -31,
     235,   116,  -163,   268,    63,   264,    57,  -163,  -163,  -163,
     252,   140,   156,   242,    28,  -163,  -163,   245,   249,  -163,
    -163,  -163,   254,  -163,  -163,   273,   263,   156,   156,  -163,
     156,   287,   265,   266,   282,   156,  -163,  -163,  -163
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       7,    15,    18,    17,    16,     0,    20,    19,     0,     2,
       0,     0,     0,     7,     7,     0,     0,     1,     7,     0,
      12,     8,    10,     7,     4,     3,     0,     0,    37,    38,
       0,    27,    28,     0,     0,    29,    32,    35,    40,     0,
       5,    63,     0,     0,    14,    52,    53,     0,     6,    41,
      42,    43,    44,    26,     0,    49,    50,    46,    45,     0,
       0,     0,    47,    48,     0,     0,     0,     0,     0,    21,
      62,     0,     0,    11,     0,     0,     0,    51,     9,    36,
      24,    25,     0,    39,    23,    30,    31,    33,    34,     0,
      59,     0,    55,    13,    22,    60,     0,    57,     0,    54,
      74,    58,     0,     0,     0,     0,     0,     0,     0,   104,
       0,     0,     0,     0,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    56,     0,    74,    82,     0,     0,
     100,     0,    74,   101,    12,   102,    61,    66,    67,    68,
      73,    69,    70,    71,    72,    64,    65,    37,   107,   106,
       0,     0,    80,     0,    81,     0,     0,     0,    99,     0,
      97,     0,     0,     0,     0,     0,   105,     0,     0,    96,
      74,   103,    74,     0,     0,    86,     0,    98,     0,     0,
       0,     0,    77,     0,    85,     0,     0,    90,    95,    92,
      93,    74,    74,     0,    20,    84,    83,     0,     0,    88,
      89,    94,     0,    76,    78,     0,     0,    74,    74,    87,
      74,     0,     0,     0,     0,    74,    79,    91,    75
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -163,  -163,   123,    15,   279,   274,     7,     0,  -163,    22,
     260,   152,   153,   142,  -163,  -163,   -71,   283,  -163,  -163,
    -163,  -163,   -75,  -163,  -163,  -163,  -163,  -163,  -163,  -163,
    -163,   143,  -163,  -163,  -163,   149,   -68,  -157,  -162,  -163,
    -127
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_uint8 yydefgoto[] =
{
       0,     8,     9,   110,    21,    22,   111,   112,    16,   149,
      35,    36,    37,    38,    64,    44,    45,    46,    91,    13,
     100,    71,   113,   114,   115,   155,   197,   116,   117,   118,
     186,   187,   119,   120,   168,   169,   121,   122,   123,   132,
     150
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      12,   156,   175,    96,   172,    14,   189,    11,    15,    55,
      56,    57,    58,    12,    12,    10,    97,   190,    12,   109,
      11,    11,    99,    12,   192,    11,    51,    52,    10,    10,
      11,    59,    60,    10,    51,    52,   174,    34,    10,   137,
     138,   139,   140,   141,   142,   143,   144,   145,   146,    62,
      63,   151,    53,    99,   178,    54,   193,   159,    17,   -20,
      15,    69,    18,   179,    73,    19,    20,    23,    15,    26,
      27,     1,     2,     3,    42,    43,    39,     1,     2,     3,
      41,    80,    81,     4,   185,   194,    26,    27,    47,     4,
     103,   181,   104,   171,    90,   180,     6,   182,   105,   106,
     107,     7,    28,    29,    94,    51,    52,     7,   199,    49,
     108,    50,    30,   171,    31,    32,   203,   204,   101,     1,
       2,     3,   201,    20,   109,   148,    33,   154,   148,    76,
     131,     4,   211,   212,   153,   213,    24,    25,     6,    82,
     218,    40,   152,     1,     2,     3,    48,    42,    43,     7,
      67,    68,   108,    92,   160,     4,   103,   202,   104,     1,
       2,     3,     6,   148,   105,   106,   107,   167,   153,    65,
      66,     4,   103,     7,   104,    89,   108,    93,     6,    72,
     105,   106,   107,   148,   195,   167,    74,    75,   153,     7,
     109,    95,   108,     1,     2,     3,   -56,    98,   126,    26,
      27,   -39,   -39,   -39,   -39,     4,   109,   124,    55,    56,
      57,    58,     6,    74,   102,    28,    29,    85,    86,   125,
      87,    88,   127,     7,   128,    30,   108,    31,    32,   129,
      59,    60,    55,    56,    57,    58,    26,    27,   133,    33,
     170,    61,   134,    72,   135,   136,    98,   157,    62,    63,
     161,   163,    28,    29,    59,    60,    55,    56,    57,    58,
     162,   166,    30,   164,    31,    32,   165,   130,   173,   177,
     184,    79,    62,    63,    26,    27,    33,   109,    59,    60,
     183,   176,    26,    27,   185,   158,   191,   198,   108,   205,
     147,    29,   206,     1,     2,     3,    62,    63,    28,    29,
      30,   207,    31,    32,   208,     4,     1,     2,     3,     5,
     209,    83,     6,   210,    33,   214,   215,   216,     4,   217,
      70,    78,    33,     7,    84,     6,   196,   188,    77,   200,
       0,     0,     0,     0,     0,     0,     7
};

static const yytype_int16 yycheck[] =
{
       0,   128,   164,    38,   161,    20,    37,     0,    40,     8,
       9,    10,    11,    13,    14,     0,    51,   179,    18,    50,
      13,    14,    93,    23,   181,    18,     6,     7,    13,    14,
      23,    30,    31,    18,     6,     7,   163,    15,    23,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,    48,
      49,   126,    30,   124,    38,    33,   183,   132,     0,    39,
      40,    39,    37,    47,    42,    21,    22,    37,    40,     6,
       7,     3,     4,     5,    39,    40,    39,     3,     4,     5,
      46,    59,    60,    15,    27,    22,     6,     7,    38,    15,
      16,    17,    18,   161,    72,   170,    22,   172,    24,    25,
      26,    33,    22,    23,    82,     6,     7,    33,    51,    22,
      36,    22,    32,   181,    34,    35,   191,   192,    96,     3,
       4,     5,   190,    22,    50,   125,    46,   127,   128,    39,
     108,    15,   207,   208,   127,   210,    13,    14,    22,    39,
     215,    18,   127,     3,     4,     5,    23,    39,    40,    33,
      44,    45,    36,    41,    46,    15,    16,    17,    18,     3,
       4,     5,    22,   163,    24,    25,    26,   160,   161,    42,
      43,    15,    16,    33,    18,    47,    36,    41,    22,    50,
      24,    25,    26,   183,   184,   178,    22,    23,   181,    33,
      50,    50,    36,     3,     4,     5,    39,    40,    50,     6,
       7,    42,    43,    44,    45,    15,    50,    41,     8,     9,
      10,    11,    22,    22,    23,    22,    23,    65,    66,    46,
      67,    68,    46,    33,    46,    32,    36,    34,    35,    46,
      30,    31,     8,     9,    10,    11,     6,     7,    37,    46,
      50,    41,    22,    50,    37,    51,    40,    22,    48,    49,
      47,    37,    22,    23,    30,    31,     8,     9,    10,    11,
      51,    51,    32,    47,    34,    35,    47,    37,    25,    22,
      37,    47,    48,    49,     6,     7,    46,    50,    30,    31,
      46,    50,     6,     7,    27,    37,    51,    23,    36,    47,
      22,    23,    47,     3,     4,     5,    48,    49,    22,    23,
      32,    52,    34,    35,    50,    15,     3,     4,     5,    19,
      37,    35,    22,    50,    46,    28,    51,    51,    15,    37,
      41,    47,    46,    33,    64,    22,   184,   178,    45,   186,
      -1,    -1,    -1,    -1,    -1,    -1,    33
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     4,     5,    15,    19,    22,    33,    54,    55,
      56,    59,    60,    72,    20,    40,    61,     0,    37,    21,
      22,    57,    58,    37,    55,    55,     6,     7,    22,    23,
      32,    34,    35,    46,    62,    63,    64,    65,    66,    39,
      55,    46,    39,    40,    68,    69,    70,    38,    55,    22,
      22,     6,     7,    62,    62,     8,     9,    10,    11,    30,
      31,    41,    48,    49,    67,    42,    43,    44,    45,    62,
      57,    74,    50,    62,    22,    23,    39,    70,    58,    47,
      62,    62,    39,    35,    63,    64,    64,    65,    65,    47,
      62,    71,    41,    41,    62,    50,    38,    51,    40,    69,
      73,    62,    23,    16,    18,    24,    25,    26,    36,    50,
      56,    59,    60,    75,    76,    77,    80,    81,    82,    85,
      86,    89,    90,    91,    41,    46,    50,    46,    46,    46,
      37,    62,    92,    37,    22,    37,    51,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    22,    60,    62,
      93,    75,    56,    59,    60,    78,    93,    22,    37,    75,
      46,    47,    51,    37,    47,    47,    51,    59,    87,    88,
      50,    89,    90,    25,    93,    91,    50,    22,    38,    47,
      75,    17,    75,    46,    37,    27,    83,    84,    88,    37,
      91,    51,    90,    93,    22,    60,    66,    79,    23,    51,
      84,    89,    17,    75,    75,    47,    47,    52,    50,    37,
      50,    75,    75,    75,    28,    51,    51,    37,    75
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    53,    54,    55,    55,    55,    55,    55,    56,    57,
      57,    58,    58,    58,    58,    59,    59,    59,    59,    59,
      61,    60,    60,    62,    62,    62,    62,    62,    62,    62,
      63,    63,    63,    64,    64,    64,    65,    65,    65,    65,
      65,    66,    66,    66,    66,    67,    67,    67,    67,    67,
      67,    68,    68,    68,    69,    69,    69,    70,    71,    71,
      73,    72,    74,    74,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    76,    76,    76,    76,    77,
      78,    78,    78,    79,    79,    79,    80,    81,    82,    83,
      83,    84,    85,    86,    86,    87,    87,    87,    88,    89,
      89,    90,    90,    90,    92,    91,    93,    93
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     3,     2,     3,     3,     0,     2,     3,
       1,     3,     1,     4,     2,     1,     1,     1,     1,     1,
       0,     4,     6,     3,     3,     3,     2,     1,     1,     1,
       3,     3,     1,     3,     3,     1,     3,     1,     1,     1,
       1,     2,     2,     2,     2,     1,     1,     1,     1,     1,
       1,     2,     1,     1,     4,     3,     3,     4,     3,     1,
       0,     9,     1,     0,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     0,    12,     8,     6,     8,    11,
       1,     1,     0,     1,     1,     0,     5,     9,     7,     2,
       1,     6,     6,     6,     7,     3,     1,     0,     2,     3,
       2,     2,     2,     1,     0,     4,     1,     1
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
#line 34 "parser.y"
               { printf("Valid syntax\n"); YYACCEPT; }
#line 1454 "y.tab.c"
    break;

  case 11: /* VAR: T_ID '=' EXPR  */
#line 51 "parser.y"
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
#line 1475 "y.tab.c"
    break;

  case 12: /* VAR: T_ID  */
#line 67 "parser.y"
               {
            if ( check_symbol_table( yyvsp[0], scope ) != NULL ) {
                    yyerror( yyvsp[0] );
                }
                insert_into_table( yyvsp[0], type, yylineno, scope );
		}
#line 1486 "y.tab.c"
    break;

  case 13: /* VAR: T_ID '[' T_NUM ']'  */
#line 73 "parser.y"
                             {
        if ( check_symbol_table( yyvsp[-3], scope ) ) {
            yyerror( yyvsp[-3] );
        }
        insert_into_table( yyvsp[-3], type, yylineno, scope );
        }
#line 1497 "y.tab.c"
    break;

  case 14: /* VAR: T_ID ARRAY_DECL  */
#line 79 "parser.y"
                          {
        if (check_symbol_table(yyvsp[-1], scope))  
        	yyerror(yyvsp[-1]);
        else {
        insert_into_table(yyvsp[-1], type, yylineno, scope);
        symbol *s = get_symbol(yyvsp[-1], scope);
        
        // Store the whole array instead of just the last value
        if (strcmp(vval, "~") != 0) {
            char array_values[1024] = "";  // Buffer to hold all values
            strcat(array_values, vval);   // Append first value
            
            // If multiple values exist, concatenate them
            if (yyvsp[0] != NULL) {  
                strcat(array_values, ", ");
                strcat(array_values, yyvsp[0]);
            }
	    insert_value_to_name(yyvsp[-1], array_values, scope);
        }
        type = -1;
        vval = "~";
        }
        }
#line 1525 "y.tab.c"
    break;

  case 15: /* TYPE: T_INT  */
#line 106 "parser.y"
                {type = INT;}
#line 1531 "y.tab.c"
    break;

  case 16: /* TYPE: T_FLOAT  */
#line 107 "parser.y"
                  {type = FLOAT;}
#line 1537 "y.tab.c"
    break;

  case 17: /* TYPE: T_DOUBLE  */
#line 108 "parser.y"
                   {type = DOUBLE;}
#line 1543 "y.tab.c"
    break;

  case 18: /* TYPE: T_CHAR  */
#line 109 "parser.y"
                 {type = CHAR;}
#line 1549 "y.tab.c"
    break;

  case 19: /* TYPE: T_BOOLEAN  */
#line 110 "parser.y"
                    {type = BOOL;}
#line 1555 "y.tab.c"
    break;

  case 20: /* $@1: %empty  */
#line 114 "parser.y"
               {    
                    global_p = get_symbol( yyvsp[0], scope );
                    type = global_p == NULL ? -1 : global_p->type;
               }
#line 1564 "y.tab.c"
    break;

  case 21: /* ASSGN: T_ID $@1 '=' EXPR  */
#line 117 "parser.y"
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
#line 1590 "y.tab.c"
    break;

  case 22: /* ASSGN: T_ID '[' EXPR ']' '=' EXPR  */
#line 138 "parser.y"
                                         {
            symbol *s = get_symbol(yyvsp[-5], scope);
                if(s == NULL) {
                    fprintf(stderr, "%s is not declared\n", yyvsp[-5]);
                    yyerror(yyvsp[-5]);
                }
                else {
                    // Handle array assignment
                    char index_str[32];
                    sprintf(index_str, "[%s]", yyvsp[-3]);
                    char *new_val = malloc(strlen(s->val) + strlen(index_str) + strlen(yyvsp[0]) + 1);
                    sprintf(new_val, "%s%s=%s", s->val, index_str, yyvsp[0]);
                    insert_value_to_symbol(s, new_val);
                    free(new_val);
                }
            }
#line 1611 "y.tab.c"
    break;

  case 24: /* EXPR: EXPR T_OROR EXPR  */
#line 159 "parser.y"
                           {
             yyval = (atoi(yyvsp[-2]) || atoi(yyvsp[0])) ? strdup("1") : strdup("0");
        }
#line 1619 "y.tab.c"
    break;

  case 25: /* EXPR: EXPR T_ANDAND EXPR  */
#line 162 "parser.y"
                             {
             yyval = (atoi(yyvsp[-2]) && atoi(yyvsp[0])) ? strdup("1") : strdup("0");
        }
#line 1627 "y.tab.c"
    break;

  case 26: /* EXPR: T_NOT EXPR  */
#line 165 "parser.y"
                     {
             yyval = (!atoi(yyvsp[0])) ? strdup("1") : strdup("0");
        }
#line 1635 "y.tab.c"
    break;

  case 27: /* EXPR: T_BOOLLITERAL  */
#line 168 "parser.y"
                        {
            yyval = yyvsp[0];
        }
#line 1643 "y.tab.c"
    break;

  case 28: /* EXPR: T_STRLITERAL  */
#line 171 "parser.y"
                       {
            yyval = yyvsp[0];
        }
#line 1651 "y.tab.c"
    break;

  case 29: /* EXPR: E  */
#line 174 "parser.y"
            {
             vval = yyvsp[0];
        }
#line 1659 "y.tab.c"
    break;

  case 30: /* E: E '+' T  */
#line 180 "parser.y"
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
#line 1684 "y.tab.c"
    break;

  case 31: /* E: E '-' T  */
#line 200 "parser.y"
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
#line 1709 "y.tab.c"
    break;

  case 32: /* E: T  */
#line 220 "parser.y"
            {
            //copy value from T to grammar rule E
            yyval = yyvsp[0];
        }
#line 1718 "y.tab.c"
    break;

  case 33: /* T: T '*' F  */
#line 227 "parser.y"
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
#line 1743 "y.tab.c"
    break;

  case 34: /* T: T '/' F  */
#line 247 "parser.y"
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
#line 1768 "y.tab.c"
    break;

  case 35: /* T: F  */
#line 267 "parser.y"
            {
            //copy value from F to grammar rule T
            yyval = yyvsp[0];
        }
#line 1777 "y.tab.c"
    break;

  case 37: /* F: T_ID  */
#line 274 "parser.y"
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
#line 1807 "y.tab.c"
    break;

  case 38: /* F: T_NUM  */
#line 299 "parser.y"
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
#line 1830 "y.tab.c"
    break;

  case 39: /* F: T_STRLITERAL  */
#line 317 "parser.y"
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
#line 1848 "y.tab.c"
    break;

  case 41: /* UPDATE: T_INC T_ID  */
#line 333 "parser.y"
                    {
                symbol *s=get_symbol(yyvsp[0],scope);
                if(s==NULL) {
                    fprintf(stderr,"%s is not declared\n",yyvsp[0]);
                    yyerror(yyvsp[0]);
                }
                if(!strcmp(s->val,"~")) {
                    fprintf(stderr,"%s is not initialized\n",yyvsp[0]);
                    yyerror(yyvsp[0]);
                }
                char new_value[32];
                if(s->type==INT) {
                    int val = atoi(s->val) + 1;
                    sprintf(new_value,"%d",val);
                } else if(s->type==FLOAT || s->type==DOUBLE) {
                    double val = atof(s->val) + 1.0;
                    sprintf(new_value,"%lf",val);
                }
                insert_value_to_symbol(s,new_value);
                yyval=strdup(new_value);
                vtype=s->type;
            }
#line 1875 "y.tab.c"
    break;

  case 42: /* UPDATE: T_DEC T_ID  */
#line 355 "parser.y"
               {
                symbol *s=get_symbol(yyvsp[0],scope);
                if(s==NULL) {
                    fprintf(stderr,"%s is not declared\n",yyvsp[0]);
                    yyerror(yyvsp[0]);
                }
                if(!strcmp(s->val,"~")) {
                    fprintf(stderr,"%s is not initialized\n",yyvsp[0]);
                    yyerror(yyvsp[0]);
                }
                char new_value[32];
                if(s->type==INT) {
                    int val = atoi(s->val) - 1;
                    sprintf(new_value,"%d",val);
                } else if(s->type==FLOAT || s->type==DOUBLE) {
                    double val = atof(s->val) - 1.0;
                    sprintf(new_value,"%lf",val);
                }
                insert_value_to_symbol(s,new_value);
                yyval=strdup(new_value);
                vtype=s->type;
            }
#line 1902 "y.tab.c"
    break;

  case 43: /* UPDATE: T_ID T_INC  */
#line 377 "parser.y"
               {
                symbol *s=get_symbol(yyvsp[-1],scope);
                if(s==NULL) {
                    fprintf(stderr,"%s is not declared\n",yyvsp[-1]);
                    yyerror(yyvsp[-1]);
                }
                if(!strcmp(s->val,"~")) {
                    fprintf(stderr,"%s is not initialized\n",yyvsp[-1]);
                    yyerror(yyvsp[-1]);
                }
                yyval=strdup(s->val);
                char new_value[32];
                if(s->type==INT) {
                    int val = atoi(s->val) + 1;
                    sprintf(new_value,"%d",val);
                } else if(s->type==FLOAT || s->type==DOUBLE) {
                    double val = atof(s->val) + 1.0;
                    sprintf(new_value,"%lf",val);
                }
                insert_value_to_symbol(s,new_value);
                vtype=s->type;
            }
#line 1929 "y.tab.c"
    break;

  case 44: /* UPDATE: T_ID T_DEC  */
#line 399 "parser.y"
               {
                symbol *s=get_symbol(yyvsp[-1],scope);
                if(s==NULL) {
                    fprintf(stderr,"%s is not declared\n",yyvsp[-1]);
                    yyerror(yyvsp[-1]);
                }
                if(!strcmp(s->val,"~")) {
                    fprintf(stderr,"%s is not initialized\n",yyvsp[-1]);
                    yyerror(yyvsp[-1]);
                }
                yyval=strdup(s->val);
                char new_value[32];
                if(s->type==INT) {
                    int val = atoi(s->val) - 1;
                    sprintf(new_value,"%d",val);
                } else if(s->type==FLOAT || s->type==DOUBLE) {
                    double val = atof(s->val) - 1.0;
                    sprintf(new_value,"%lf",val);
                }
                insert_value_to_symbol(s,new_value);
                vtype=s->type;
            }
#line 1956 "y.tab.c"
    break;

  case 56: /* ARRAY_DIM: '[' T_NUM ']'  */
#line 438 "parser.y"
                          { 
              char str[32];
              sprintf(str, "%d", atoi(yyvsp[-1]));
              yyval = strdup(str);
            }
#line 1966 "y.tab.c"
    break;

  case 57: /* ARRAY_INIT: '=' '{' ARRAY_LIST '}'  */
#line 445 "parser.y"
                                    { 
            yyval = strdup(yyvsp[-1]); // Store the entire array list as a single string 
            }
#line 1974 "y.tab.c"
    break;

  case 58: /* ARRAY_LIST: ARRAY_LIST ',' EXPR  */
#line 450 "parser.y"
                                 {
            char *temp = malloc(strlen(yyvsp[-2]) + strlen(yyvsp[0]) + 3); // Allocate space
            sprintf(temp, "%s, %s", yyvsp[-2], yyvsp[0]); // Concatenate values
            yyval = temp;
	   }
#line 1984 "y.tab.c"
    break;

  case 59: /* ARRAY_LIST: EXPR  */
#line 455 "parser.y"
                  { 
            yyval = strdup(yyvsp[0]); // Store first value
	   }
#line 1992 "y.tab.c"
    break;

  case 60: /* $@2: %empty  */
#line 462 "parser.y"
                                             { scope++; }
#line 1998 "y.tab.c"
    break;

  case 61: /* MAIN: TYPE T_MAIN '(' EMPTY_LISTVAR ')' '{' $@2 STMT '}'  */
#line 462 "parser.y"
                                                                   { scope--; }
#line 2004 "y.tab.c"
    break;

  case 104: /* $@3: %empty  */
#line 542 "parser.y"
              { scope++; }
#line 2010 "y.tab.c"
    break;

  case 105: /* BLOCK: '{' $@3 STMT '}'  */
#line 542 "parser.y"
                                    { scope--; }
#line 2016 "y.tab.c"
    break;


#line 2020 "y.tab.c"

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

#line 549 "parser.y"


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
