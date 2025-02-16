%{
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

%}

%token T_INT T_CHAR T_DOUBLE T_INC T_DEC T_OROR T_ANDAND T_EQCOMP T_NOTEQUAL
%token T_GREATEREQ T_LESSEREQ T_LEFTSHIFT T_RIGHTSHIFT T_PRINTLN T_STRING  T_FLOAT
%token T_BOOLEAN T_IF T_ELSE T_STRLITERAL T_DO T_INCLUDE T_HEADER T_MAIN T_ID T_NUM T_FOR 
%token T_WHILE T_SWITCH T_CASE T_BREAK T_CONTINUE 
%token T_RETURN

%start START

%%

START   : PROG { printf("Valid syntax\n"); YYACCEPT; }	
        ;	
	  
PROG    : MAIN PROG				
	    | DECLR ';' PROG 				
	    | ASSGN ';' PROG 			
	    | 					
	    ;
	 

DECLR   : TYPE LISTVAR 
	    ;	


LISTVAR : LISTVAR ',' VAR 
	    | VAR
	    ;

VAR     : T_ID '=' EXPR {
            /*
                check if symbol is in the table
                if it is then error for redeclared variable
                else make entry and insert into table
                insert value coming from EXPR
                revert variables to default values: vval, type
            */
            if ( check_symbol_table( $1, scope ) ) {
                yyerror( $1 );
            }
            insert_into_table( $1, type, yylineno, scope );
            insert_value_to_name( $1, vval, scope );
            vval = "~";
            type = -1;
		}
        | T_ID {
            /*
                finished in lab 2
            */
            if ( check_symbol_table( $1, scope ) != NULL ) {
                    yyerror( $1 );
                }
                insert_into_table( $1, type, yylineno, scope );
		}
        ;

//assign type here to be returned to the declaration grammar
TYPE    : T_INT {type = INT;}
        | T_FLOAT {type = FLOAT;}
        | T_DOUBLE {type = DOUBLE;}
        | T_CHAR {type = CHAR;}
        ;
    
/* Grammar for assignment */   
ASSGN   : T_ID {    
                    global_p = get_symbol( $1, scope );
                    type = global_p == NULL ? -1 : global_p->type;
               } '=' EXPR {
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
                yyerror( $1 );
            }
            insert_value_to_symbol( global_p, vval );
            vval = "~";
            type = -1;
            global_p = NULL;
		}
	    ;

EXPR    : EXPR REL_OP E
        | E {
            // store value using value variable declared before
            vval = $1;
        }
        ;
	   
/* Expression Grammar */	   
E       : E '+' T { 
            /*
                check type
                if character type return error
                convert to int/float perform calculation
                convert back to string 
                copy to grammar rule E
            */
            if ( vtype == INT ) {
                printf("%s %s\n", $1, $3);
                sprintf( $$, "%d", ( atoi( $1 ) + atoi( $3 ) ) );
            } else if ( vtype == FLOAT || vtype == DOUBLE ) {
                sprintf( $$, "%lf", ( atof( $1 ) + atof( $3 ) ) );
            } else {
                fprintf( stderr, "Operation %s not supported for type %d",
                         $2, vtype );
                yyerror( $$ );
                $$ = "~";
            }
		}
        | E '-' T { 
            /*
                check type
                if character type return error
                convert to int/float perform calculation
                convert back to string 
                copy to grammar rule E
            */
            if ( vtype == INT ) {
                printf("%s %s\n", $1, $3);
                sprintf( $$, "%d", ( atoi( $1 ) - atoi( $3 ) ) );
            } else if ( vtype == FLOAT || vtype == DOUBLE ) {
                sprintf( $$, "%lf", ( atof( $1 ) - atof( $3 ) ) );
            } else {
                fprintf( stderr, "Operation %s not supported for type %d",
                         $2, vtype );
                yyerror( $$ );
                $$ = "~";
            }
		}
        | T {
            //copy value from T to grammar rule E
            $$ = $1;
        }
        ;
	
	
T       : T '*' F { 
		    /*
		        check type
		        if character type return error
		        convert to int/float perform calculation
		        convert back to string 
		        copy to grammar rule T
            */
            if ( vtype == INT ) {
                printf("%s %s\n", $1, $3);
                sprintf( $$, "%d", ( atoi( $1 ) * atoi( $3 ) ) );
            } else if ( vtype == FLOAT || vtype == DOUBLE ) {
                sprintf( $$, "%lf", ( atof( $1 ) * atof( $3 ) ) );
            } else {
                fprintf( stderr, "Operation %s not supported for type %d",
                         $2, vtype );
                yyerror( $$ );
                $$ = "~";
            }
		}
        | T '/' F 	{ 
		    /*
		        check type
		        if character type return error
		        convert to int/float perform calculation
		        convert back to string 
		        copy to grammar rule T
           	*/
           	if ( vtype == INT ) {
                printf("%s %s\n", $1, $3);
                sprintf( $$, "%d", ( atoi( $1 ) / atoi( $3 ) ) );
            } else if ( vtype == FLOAT || vtype == DOUBLE ) {
                sprintf( $$, "%lf", ( atof( $1 ) / atof( $3 ) ) );
            } else {
                fprintf( stderr, "Operation %s not supported for type %d",
                         $2, vtype );
                yyerror( $$ );
                $$ = "~";
            }
		}
        | F {
            //copy value from F to grammar rule T
            $$ = $1;
        }
        ;

F       : '(' EXPR ')'
        | T_ID {
		    /*
		        check if variable is in table
		        check the value in the variable is default
		        if yes return error for variable not initialised
		        else duplicate value from T_ID to F
		        check for type match
		        (secondary type variable vtype used here)
            */
            symbol *s = get_symbol( $1, scope );
            if ( s == NULL ) {
                fprintf( stderr, "%s is not declared\n", $1 );
                yyerror( $1 );
            }
            if ( !strcmp( s->val, "~" ) ) {
                fprintf( stderr, "%s is not initialized\n", $1 );
                yyerror( $1 );
            }
            $$ = strdup( s->val );
            vtype = get_type( s->val );
            if ( vtype != type && type != -1 ) {
                fprintf( stderr, "Cannot assign type %d to type %d\n", vtype, type );
                yyerror( $1 );
            }
		}
        | T_NUM {
    		/*
		        duplicate value from T_NUM to F
		        check for type match
		        (secondary type variable vtype used here)

                the if condition contains a workaround for ambiguity between
                assigning float or double to T_NUM
             */
             $$ = strdup( $1 );
             vtype = get_type( $1 );
             if ( vtype != type && type != -1 &&
                  !( vtype == DOUBLE && type == FLOAT ) &&    
                  !( vtype == FLOAT && type == DOUBLE ) ) {
                fprintf( stderr, "Cannot assign type %d to type %d\n", vtype, type );
                yyerror( $1 );
            }
		}
        | T_STRLITERAL {
            /*
			    duplicate value from T_STRLITERAL to F
			    check for type match
			    (secondary type variable vtype used here)
            */
            $$ = strdup( $1 );
            vtype = 1;
            if ( vtype != type ) {
                fprintf( stderr, "Cannot assign char * to type %d\n", type );
                yyerror( $1 );
            }
		}   
        ;



REL_OP  : T_LESSEREQ
	    | T_GREATEREQ
	    | '<' 
	    | '>' 
	    | T_EQCOMP
	    | T_NOTEQUAL
	    ;	


/* Grammar for main function */
//increment and decrement at particular points in the grammar to implement scope tracking
MAIN : TYPE T_MAIN '(' EMPTY_LISTVAR ')' '{' { scope++; } STMT '}' { scope--; }
     ;

EMPTY_LISTVAR   : LISTVAR
		        |	
		        ;

STMT    : STMT_NO_BLOCK STMT
        | BLOCK STMT
        | IF_ELSE STMT
        | FOR_LOOP STMT
        | WHILE_LOOP STMT
        | SWITCH_STMT STMT
        | FUNC_DECL STMT
        | FUNC_DEF STMT
        | RET_STMT STMT
        |
        ;
        
IF_ELSE : T_IF '(' COND ')' '{' STMT '}' T_ELSE  '{' STMT '}' STMT
	| T_IF '(' COND ')' '{' STMT '}' STMT
	| T_IF '(' COND ')' STMT_NO_BLOCK  STMT 
	| T_IF '(' COND ')' STMT_NO_BLOCK T_ELSE STMT_NO_BLOCK STMT 
	;

FOR_LOOP : T_FOR '(' ASSGN ';' COND ';' ASSGN ')' BLOCK 
         ;

WHILE_LOOP : T_WHILE '(' COND ')' BLOCK 
           ;

SWITCH_STMT : T_SWITCH '(' T_ID ')' '{' CASES '}' 
	    ;
	    
CASES       : CASES CASE | CASE 
	    ;
	    
CASE        : T_CASE T_NUM ':' STMT T_BREAK ';' 
	    ;

FUNC_DECL : TYPE T_ID '(' PARAM_LIST ')' ';' 
	  ;
	  
FUNC_DEF  : TYPE T_ID '(' PARAM_LIST ')' BLOCK 
	  | TYPE T_ID '(' PARAM_LIST ')' BLOCK RET_STMT
	  ;

PARAM_LIST : PARAM_LIST ',' PARAM
           | PARAM
           | 
           ;

PARAM : TYPE T_ID 
      ; /* Handles a single parameter like `int a` */


RET_STMT : T_RETURN EXPR ';'
	 | T_RETURN ';'
	 ;

STMT_NO_BLOCK   : DECLR ';'
                | ASSGN ';'
                | RET_STMT
                ;
       
//increment and decrement at particular points in the grammar to implement scope tracking
BLOCK   : '{' { scope++; } STMT '}' { scope--; }
        ;

COND    : EXPR 
        | ASSGN
        ;

%%

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
