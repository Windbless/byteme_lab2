/*  Mini Language   */
/*  mini_l.lex  */

%{
#include "heading.h"
#include "tok.h"
%}
    int line = 1;
    int column = 0;

comment         ##.*\n
char            [a-zA-Z]
digit           [0-9]
identifier      {char}+(_*({char}|{digit})+)*
snlidenti       (_|{digit})+{identifier}_*
eunidenti       {identifier}_+
number          {digit}*\.?{digit}+([eE][+-]?{digit}+)?

%%
{comment}       {   column = 0; ++line;                     }
"function"      {   column += yyleng;   return FUNCTION;    }
"beginparams"   {   column += yyleng;   return BEGINPARAMS; }
"endparams"     {   column += yyleng;   return ENDPARAMS;   }
"beginlocals"   {   column += yyleng;   return BEGINLOCALS; }
"endlocals"     {   column += yyleng;   return ENDLOCALS;   }
"beginbody"     {   column += yyleng;   return BEGINBODY;   }
"endbody"       {   column += yyleng;   return ENDBODY;     }
"integer"       {   column += yyleng;   return INTEGER;     }
"array"         {   column += yyleng;   return ARRAY;       }
"of"            {   column += yyleng;   return OF;          }
"if"            {   column += yyleng;   return IF;          }
"then"          {   column += yyleng;   return THEN;        }
"endif"         {   column += yyleng;   return ENDIF;       }
"else"          {   column += yyleng;   return ELSE;        }
"while"         {   column += yyleng;   return WHILE;       }
"do"            {   column += yyleng;   return DO;          }
"foreach"       {   column += yyleng;   return FOREACH;     }
"beginloop"     {   column += yyleng;   return BEGINLOOP;   }
"endloop"       {   column += yyleng;   return ENDLOOP;     }
"continue"      {   column += yyleng;   return CONTINUE;    }
"read"          {   column += yyleng;   return READ;        }
"write"         {   column += yyleng;   return WRITE;       }
"true"          {   column += yyleng;   return TRUE;        }
"false"         {   column += yyleng;   return FALSE;       }
"+"             {   column += yyleng;   return PLUS;        }
"-"             {   column += yyleng;   return SUB;         }
"*"             {   column += yyleng;   return MULT;        }
"/"             {   column += yyleng;   return DIVI;        }
"%"             {   column += yyleng;   return MOD;         }
"and"           {   column += yyleng;   return AND;         }
"or"            {   column += yyleng;   return OR;          }
"<"             {   column += yyleng;   return LT;          }
">"             {   column += yyleng;   return GT;          }
"<="            {   column += yyleng;   return LTE;         }
">="            {   column += yyleng;   return GTE;         }
"=="             {   column += yyleng;   return EQ;          }
"<>"            {   column += yyleng;   return NEQ;         }
";"             {   column += yyleng;   return SEMICOLON;   }
":"             {   column += yyleng;   return COLON;       }
","             {   column += yyleng;   return COMMA;       }
"("             {   column += yyleng;   return LPAREN;      }
")"             {   column += yyleng;   return RPAREN;      }
"["             {   column += yyleng;   return LSQUARE;     }
"]"             {   column += yyleng;   return RSQUARE;     }
"return"        {   column += yyleng;   return RETURN;      }
"not"           {   column += yyleng;   return NOT;         }
":="            {   column += yyleng;   return ASSIGN;      }
" "             {   column += yyleng;                       }
"\t"            {   column += yyleng;                       }
"\n"            {   ++line; column = 0;                     }

{identifier}    {   column += yyleng;   yylval.op_val = new std::string(yytext);  return IDENTIFIERS;    }
{snlidenti}     { printf("Error at line %d, column %d: identifier \"%s\" must begin with a letter.\n", line, column, yytext);}
{eunidenti}     { printf("Error at line %d, column %d: identifier \"%s\" must begin with a letter.\n",line, column, yytext);}
{number}        {   yylval.int_val = atoi(yytext);  return NUMBER; }
.               

%%



