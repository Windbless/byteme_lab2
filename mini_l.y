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

prog_start:	functions 	{cout << "prog_start -> functions"<< endl;}
	  	;
functions:	/* empty */ 	{cout << "functions ->	epsilon" << endl;}
 		| function functions {cout << "functions -> function functions"<< endl;}
		;
function:	FUNCTION IDENTIFIERS SEMICOLON BEGINPARAMS Declarations ENDPARAMS BEGINLOCALS Declarations ENDLOCALS BEGINBODY statements ENDBODY {cout<<"function -> FUNCTION IDENT "<<*($2)<<" SEMICOLON BEGIN_PARAMS declarations END_PARAMS BEGIN_LOCALS declarations END_LOCALS BEGIN_BODY statements END_BODY"<<endl;}
		;
Declarations:	/* empty */	{cout << "Declaration -> epsilon" << endl;}
		| declaration SEMICOLON {cout << "Declaration -> declaration SEMICOLON"<< endl;}
	   	| declaration SEMICOLON Declarations {cout << "Declaration -> declaration SEMICOLON declarations"<< endl;}
		;
statements:		 statement SEMICOLON statements {cout << "statements -> statement SEMICOLON statements"<< endl;}  
        |		 statement SEMICOLON {cout << "statements -> statement SEMICOLON " << endl;}

		;
declaration:	Identifiers COLON Arrayid	{cout << "declaration -> identifiers COLON Arrayid" << endl;}
	   	;

Identifiers:	IDENTIFIERS	{cout << "identifiers -> IDENT "<<*($1)<<endl ;}
	   	|IDENTIFIERS COMMA Identifiers	{cout<<"identidiers -> IDENT "<<*($1)<<" COMMA id" << endl;}
		;
		
Arrayid:	INTEGER		{cout << "Arrayid -> INTEGER" << endl;}	
       		| ARRAY LSQUARE	NUMBER RSQUARE OF INTEGER	{cout << "Arrayid -> ARRAY LSQUARE NUMBER "<< ($3) << " RSQUARE OF INTEGER"<< endl;}
		;
statement:	astate		{cout << "statement -> a_state" << endl;}
			|bstate		{cout << "statement -> b_state" << endl;}
			|cstate 	{cout << "statement -> c_state" << endl;}
			|dstate		{cout << "statement -> d_state" << endl;}
			|estate		{cout << "statement -> e_state" << endl;}
			|fstate		{cout << "statement -> f_state" << endl;}
			|gstate		{cout << "statement -> g_state" << endl;}
			|hstate		{cout << "statement -> h_state" << endl;}
			;
astate:		var ASSIGN expression {cout << "a_state -> var ASSIGN expression" << endl;}
			;
bstate:		IF bool_expr THEN statements elsestates ENDIF {cout << "b_state -> IF bool_expr THEN statements elsestates ENDIF" << endl;}
			;

elsestates:	/*empty*/ 	{cout << "elsestates -> epsilon" << endl;}
			| ELSE statements {cout << "elsestates -> ELSE statements" << endl;} 
			;

cstate:		WHILE bool_expr BEGINLOOP statements ENDLOOP    {cout << "c_state -> WHILE bool_expr BEGINLOOP statements" << endl;}	   ;

dstate:		DO BEGINLOOP statements ENDLOOP WHILE bool_expr  {cout << "d_state -> DO BEGINLOOP statements ENDLOOP statements ENDLOOP WHILE bool_expr " << endl;}
			;
estate:		READ vars {cout << "e_state -> READ vars" << endl;}
			;
fstate:		WRITE vars {cout << "f_state -> WRITE vars" << endl;}
			;
gstate:		CONTINUE   {cout << "g_state -> CONTINUE" << endl;}
			;
hstate:		RETURN expression {cout << "h_state -> RETURN Expression" << endl;}
			;

bool_expr:	relation_And_Expr	{cout << "bool_expr -> relation-And-Expr" << endl;}
 		| relation_And_Expr OR bool_expr {cout << "bool_expr -> relationn-And-Expr OR bool_exper" << endl;}
		;
relation_And_Expr: relation_Expr	{cout << "relation_And_Expr -> relationn_Expr" << endl;}
		|relation_Expr AND relation_And_Expr {cout << "relation_And_Expr -> relation_Expr AND relation_And_Expr" << endl;}
		;
		
relation_Expr:	NOT expression comp expression 	{cout << "relation_Expr	-> NOT expressions" << endl;}
     	|NOT TRUE		{cout << "relation_Expr -> NOT TRUE" << endl;}
		|NOT FALSE		{cout << "relation_Expr -> NOT FALSE" << endl;}
		|NOT LPAREN	bool_expr RPAREN {cout << "relation_Expr -> NOT LPAREN bool_expr RPAREN" << endl;}
		|expression comp expression 	{cout << "relation_Expr	-> expressions" << endl;}
     	|TRUE		{cout << "relation_Expr -> TRUE" << endl;}
		|FALSE		{cout << "relation_Expr -> FALSE" << endl;}
		|LPAREN	bool_expr RPAREN {cout << "relation_Expr -> LPAREN bool_expr RPAREN" << endl;}
		;
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
terms:		/*empty*/ 		{cout << "terms -> epsilon" << endl;}
     		|MULT term terms	{cout << "terms -> MULT term terms" << endl;}
		|DIVI term terms	{cout << "terms -> DIVI term terms" << endl;}
		|MOD  term terms	{cout << "terms -> MOD term terms" << endl;}
		;

term:	posterm		{cout << "term -> Posterm" << endl;}
		|SUB posterm {cout << "term -> SUB posterm" << endl;}
		|ident 		{cout << "term -> ident" << endl;}
		;
ident:	IDENTIFIERS	LPAREN ex RPAREN {cout << "ident -> IDENT " <<*($1) << " LPAREN ex RPAREN" << endl;}
		;
	
ex:		/*empty*/	{cout << "ex -> epsilon" << endl;}
		|expression {cout << "ex -> expression" << endl;}
		|expression COMMA ex {cout << "ex -> expression COMMA ex"}
		; 
posterm:	var 	{cout << "posterm -> var" << endl;}
			|NUMBER {cout << "posterm -> NUMBER "<< $1 << endl;}
			|LPAREN expression RPAREN {cout << "posterm -> LPAREN expression RPAREN" << endl;}
			;
var:		IDENTIFIERS		 {cout << "var -> IDENT " << *($1) << endl;}
            | IDENTIFIERS LSQUARE expression RSQUARE {cout << "var -> IDENT "<< *($1) <<" LSQUARE expression RSQUARE" << endl;} 
            ;
vars:		var COMMA vars 		 {cout << "vars -> var COMMA vars" << endl;}
    		|var			 {cout << "vars -> var" << endl;}
			;
%%

int yyerror(string s)
{
  extern int column,line;	// defined and maintained in lex.c
  extern char *yytext;	// defined and maintained in lex.c
  
   cerr << "SYNTAX(PARSER) Error at line " << line <<", column " << column << " : Unexpected Symbol \"" << yytext << "\" Encountered." << endl;
  exit(1);
}

int yyerror(char *s)
{
  return yyerror(string(s));
}




