/* mini_l.y */

%{
#include "heading.h"
int yyerror(char *s);
int yylex(void);

%}

%union{
  int		int_val;
  string*	op_val;
}

%start	prog_start
%token <int_val> NUMBER
%token <op_val> IDENTIFIERS

%token FUNCTION
%token BEGINPARAMS
%token ENDPARAMS
%token BEGINLOCALS
%token ENDLOCALS
%token BEGINBODY
%token ENDBODY
%token INTEGER
%token ARRAY
%token OF
%token IF
%token THEN
%token ENDIF
%token ELSE
%token WHILE
%token DO
%token FOREACH
%token BEGINLOOP
%token ENDLOOP
%token CONTINUE
%token READ
%token WRITE
%token TRUE
%token FALSE
%token SEMICOLON
%token COLON
%token COMMA
%token LPAREN
%token RPAREN
%token LSQUARE
%token RSQUARE
%token RETURN

%left	PLUS SUB
%left	MULT DIVI MOD
%left	AND OR
%left LT LTE GT GTE EQ NEQ

%right NOT
%right ASSIGN


%%

prog_start:	            functions 	{cout << "prog_start -> functions"<< endl;}
	  	;

functions:              /* empty */ 	{cout << "functions ->	epsilon" << endl;}
 		|               function functions {cout << "functions -> function functions"<< endl;}

		;
function:               FUNCTION IDENTIFIERS SEMICOLON BEGINPARAMS Declarations ENDPARAMS BEGINLOCALS Declarations ENDLOCALS BEGINBODY statements ENDBODY {cout<<"function -> FUNCTION IDENT "<<*($2)<<" SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY"<<endl;}
		;

Declarations:           /* empty */	{cout << "Declaration -> epsilon" << endl;}
	   	|               declaration SEMICOLON Declarations {cout << "Declaration -> declaration SEMICOLON declarations"<< endl;}
	   	|               error SEMICOLON 
	   	|               error SEMICOLON Declarations
		|               error
		;

statements:             statement SEMICOLON statements {cout << "statements -> statement SEMICOLON statements"<< endl;}  
        |               statement SEMICOLON {cout << "statements -> statement SEMICOLON " << endl;}
		
		;

declaration:            Identifiers COLON Arrayid	{cout << "declaration -> identifiers COLON Arrayid" << endl;}
		|               error 
	   	;

Identifiers:            IDENTIFIERS	{cout << "identifiers -> IDENT "<<*($1)<<endl ;}
	   	|               IDENTIFIERS COMMA Identifiers	{cout<<"identidiers -> IDENT "<<*($1)<<" COMMA id" << endl;}
		;
		
Arrayid:	            INTEGER	{cout << "Arrayid -> INTEGER" << endl;}	
       	|               ARRAY LSQUARE	NUMBER RSQUARE OF INTEGER	{cout << "Arrayid -> ARRAY LSQUARE NUMBER "<< ($3) << " RSQUARE OF INTEGER"<< endl;}
		;
statement:	            var ASSIGN expression {cout << "statement -> var ASSIGN expression" << endl;}
		|               IF bool_expr THEN statements elsestates ENDIF {cout << "statement -> IF bool_expr THEN statements elsestates ENDIF" << endl;}
		|               WHILE bool_expr BEGINLOOP statements ENDLOOP    {cout << "statement -> WHILE bool_expr BEGINLOOP statements" << endl;}	  
		|               DO BEGINLOOP statements ENDLOOP WHILE bool_expr  {cout << "statement -> DO BEGINLOOP statements ENDLOOP statements ENDLOOP WHILE bool_expr " << endl;}
		|               READ vars {cout << "statement -> READ vars" << endl;}
		|               WRITE vars {cout << "statement -> WRITE vars" << endl;}
		|               CONTINUE   {cout << "statement -> CONTINUE" << endl;}
		|               RETURN expression {cout << "statement -> RETURN Expression" << endl;}
		;
			
elsestates:	            /*empty*/ 	{cout << "elsestates -> epsilon" << endl;}
		|               ELSE statements {cout << "elsestates -> ELSE statements" << endl;} 
		;


bool_expr:              relation_And_Expr	{cout << "bool_expr -> relation-And-Expr" << endl;}
 		|               relation_And_Expr OR bool_expr {cout << "bool_expr -> relationn-And-Expr OR bool_exper" << endl;}
		;

relation_And_Expr:      relation_Expr	{cout << "relation_And_Expr -> relationn_Expr" << endl;}
		|               relation_Expr AND relation_And_Expr {cout << "relation_And_Expr -> relation_Expr AND relation_And_Expr" << endl;}
		;
		
relation_Expr:          NOT expression comp expression 	{cout << "relation_Expr	-> NOT expressions" << endl;}
     	|               NOT TRUE		{cout << "relation_Expr -> NOT TRUE" << endl;}
		|               NOT FALSE		{cout << "relation_Expr -> NOT FALSE" << endl;}
		|               NOT LPAREN	bool_expr RPAREN {cout << "relation_Expr -> NOT LPAREN bool_expr RPAREN" << endl;}
		|               expression comp expression 	{cout << "relation_Expr	-> expressions" << endl;}
     	|               TRUE		{cout << "relation_Expr -> TRUE" << endl;}
		|               FALSE		{cout << "relation_Expr -> FALSE" << endl;}
		|               LPAREN	bool_expr RPAREN {cout << "relation_Expr -> LPAREN bool_expr RPAREN" << endl;}
		;
		
comp:                   EQ {cout<< "comp -> EQ" <<endl;}
		|               NEQ {cout<< "comp -> NEQ" <<endl;}
		|               LT {cout<< "comp -> LT" <<endl;}
		|               GT {cout<< "comp -> GT" <<endl;}
		|               LTE {cout<< "comp -> LTE" <<endl;}
		|               GTE {cout<< "comp -> GTE" <<endl;}
		;

expression:             multiplicative_Expr { cout << "expressionn -> multiplicative_Expr" << endl;}
        |               expression PLUS multiplicative_Expr { cout << "expression -> expression PLUS multiplicative_Expr" << endl; }
        |               expression SUB multiplicative_Expr { cout << "expression -> expression SUB multiplicative_Expr" << endl; }
	  	;

multiplicative_Expr:    term	{cout << "multiplicative_Expr -> term" << endl;}
        |               multiplicative_Expr MULT term { cout << "multiplicative_Expr -> multiplicative_Expr MULT term" << endl; }
        |               multiplicative_Expr DIVI term { cout << "multiplicative_Expr -> multiplicative_Expr DIVI term" << endl; }
        |               multiplicative_Expr MOD term { cout << "multiplicative_Expr -> multiplicative_Expr MOD term" << endl; }
		;

term:	                posterm		{cout << "term -> Posterm" << endl;}
		|               SUB posterm {cout << "term -> SUB posterm" << endl;}
		|               ident 		{cout << "term -> ident" << endl;}
		;

ident:	                IDENTIFIERS	LPAREN ex RPAREN {cout << "ident -> IDENT " <<*($1) << " LPAREN ex RPAREN" << endl;}
		;
	
ex:		                /*empty*/	{cout << "ex -> epsilon" << endl;}
		|               expression {cout << "ex -> expression" << endl;}
		|               expression COMMA ex {cout << "ex -> expression COMMA ex"}
		; 

posterm:	            var 	{cout << "posterm -> var" << endl;}
		|               NUMBER {cout << "posterm -> NUMBER "<< $1 << endl;}
		|               LPAREN expression RPAREN {cout << "posterm -> LPAREN expression RPAREN" << endl;}
		;

var:                    IDENTIFIERS		 {cout << "var -> IDENT " << *($1) << endl;}
        |               IDENTIFIERS LSQUARE expression RSQUARE {cout << "var -> IDENT "<< *($1) <<" LSQUARE expression RSQUARE" << endl;} 
        ;

vars:		            var COMMA vars 		 {cout << "vars -> var COMMA vars" << endl;}
        |               var			 {cout << "vars -> var" << endl;}
		;
%%

int yyerror(string s)
{
  extern int column,line;	// defined and maintained in lex.c
  extern char *yytext;	// defined and maintained in lex.c
  //printf ( "SYNTAX(PARSER) Error at line %s, column %s :Unexpected Symbol %s Encoutered ", line, column, yytext );

cerr << "SYNTAX(PARSER) Error at line " << line <<", column " << column << " : Unexpected Symbol \"" << yytext << "\" Encountered." << endl;

}

int yyerror(char *s)
{
  return yyerror(string(s));
}




