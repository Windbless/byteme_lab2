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

%start	input 


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
%token LAPAREN
%token RAPAREN
%token LSQUARE
%token RSQUARE
%token ASSIGN
%token RETURN

%left	PLUS SUB
%left	MULT DIVI MOD
%left	AND OR
%left LT LTE GT GTE EQ NEQ

%right NOT
%right ASSIGN


%%

prog_start:	functions 	{count << "prog_start -> functions"<< endl;}
	  	;
functions:	/* empty */ 	{count << "functions ->	epsilon" << endl;}
 		| function functions {count << "functions -> function functions"<< endl;}
		;
function:	FUNCTION IDENTIFIERS SEMICOLON BEGINPARAMS Declarations ENDPARAMS BEGINLOCALS Declarations ENDLOCALS BEGINBODY statements ENDBODY {cout<<"FUNCTION IDENT "<<*($2)<<" SEMI		 COLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY"<<endl;}
		;
Declarations:	/* empty */	{count << "Declaration -> epsilon" << endl;}
	   	| declaration SEMICOLON Declarations {cout << "Declaration -> declaration SEMICOLON declarations"<< endl;}
		;
statements:		* empty */	{count << "statements -> epsilon" << endl;}
	   	| statement SEMICOLON statements {cout << "statements -> statement SEMICOLON statements"<< endl;}
		;
declaration:	Identifiers COLON Arrayid	{count << "identifiers COLON Arrayid" << endl;}
	   	;

Identifiers:	IDENTIFIERS	{cout << "identifiers -> IDENT "<<*($1)<<endl ;}
	   	|IDENTIFIERS COMMA indentifiers	{cout<<"identidiers -> IDENT "<<*($1)<<" COMMA id" << endl;}
		;
		
Arrayid:	INTEGER		{cout << "Arrayid -> INTEGER" << endl;}	
       		| ARRAY LSQUARE	NUMBER RSQUARE OF INTEGER	{cout << "ARRAY LSQUARE NUMBER RSQUARE OF INTEGER"<< endl;}
		;
statement:	

bool_expr:	relation_And_Expr	{cout << "bool_expr -> relation-And-Expr" << endl;}
 		| relation_And_Expr OR bool_exper {cout << "bool_expr -> relationn-And-Expr OR bool_exper" << endl;}
		;
relation_And_Expr: relation_Expr	{cout << "relation_And_Expr -> relationn_Expr" << endl;}
		|relation_Expr AND relation_And_Expr {cout << "relation_And_Expr -> relation_Expr AND relation_And_Expr" << endl;}
		;
relation_Expr:	NOT re_ex	{cout << "relation_Expr -> NOT re_ex" << endl;}
	     	| re_ex		{cout << "relationn_Expr -> re_ex" << endl;}
		;
re_ex:		expressions	{cout << "re_ex	-> expressions" << endl;}
     		|TRUE		{cout << "re_ex -> TRUE" << endl;}
		|FALSE		{cout << "re_ex -> FALSE" << endl;}
		|LPAREN	bool_expr RPAREN {cout << "re_ex -> LPAREN bool_expr RPAREN" << endl;}
		;
comp:		EQ {cout<< "comp -> EQ" <<endl;}
		| NEQ {cout<< "comp -> NEQ" <<endl;}
		| LT {cout<< "comp -> LT" <<endl;}
		| GT {cout<< "comp -> GT" <<endl;}
		| LTE {cout<< "comp -> LTE" <<endl;}
		| GTE {cout<< "comp -> GTE" <<endl;}
		;
expression:	multiplicative_Expr expre {cout << "expressionn -> multiplicative_Expr expre" << endl;}
	  	;
expre:		/*empty*/ {cout << "expre -> epsilon" << endl;}
     		| PLUS multiplicative_Expr expre {cout << "expre -> PLUS multiplicative_expr expre" << endl;}
		| SUB  multiplicative_Expr expre {cout << "expre -> SUB multiplicative_expr expre" << endl;}
		;
multiplicative_Expr:	term terms	{cout << "multiplicative_Expr -> term terms" << endl;}
		   ;
terms:		/&empty*/ 		{cout << "terms -> epsilon" << endl;}
     		|MULT term terms	{cout << "terms -> MULT term terms" << endl;}
		|DIVI term terms	{cout << "terms -> DIVI term terms" << endl;}
		|MOD  term terms	{cout << "terms -> MOD term terms" << endl;}
		;

term:

var:		IDENTIFIERS		 {cout << "var -> IDENT " << *($1) << endl;}
                | IDENTIFIERS LSQUARE expression RSQUARE {cout << "var -> IDENT "<< *($1) <<" LSQUARE expression RSQUARE" << endl;} 
                ;
vars:		var COMMA vars 		 {cout << "vars -> var COMMA vars" << endl;}
    		|var			 {cout << "vars -> var" << endl;}
		;
%%

int yyerror(string s)
{
  extern int yylineno,row;	// defined and maintained in lex.c
  extern char *yytext;	// defined and maintained in lex.c
  
  cerr << "ERROR: " << s << " at symbol \"" << yytext;
  cerr << "\" on line " << yylineno << endl;
  exit(1);
}

int yyerror(char *s)
{
  return yyerror(string(s));
}




