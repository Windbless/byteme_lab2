/*  Mini Language   */
/*  mini_l.lex  */

%{
#include "heading.h"
%}
    int line = 1;
    int column = 0;
%%
"function"      {   return FUNCTION;    }
"beginparams"   {   return BEGINPARAMS; }
"endparams"     {   return ENDPARAMS;   }
"beginlocals"   {   return BEGINLOCALS; }
"endlocals"     {   return ENDLOCALS;   }
"beginbody"     {   return BEGINBODY;   }
"endbody"       {   return ENDBODY;     }
"integer"       {   return INTEGER;     }
"array"         {   return ARRAY;       }
"of"            {   return OF;          }
"if"            {   return IF;          }
"then"          {   return THEN;        }
"endif"         {   return ENDIF;       }
"else"          {   return ELSE;        }
"while"         {   return WHILE;       }
"do"            {   return DO;          }
"foreach"       {   return FOREACH;     }
"beginloop"     {   return BEGINLOOP;   }
"endloop"       {   return ENDLOOP;     }
"continue"      {   return CONTINUE;    }
"read"          {   return READ;        }
"write"         {   return WRITE;       }
"true"          {   return TRUE;        }
"false"         {   return FALSE;       }
"+"             {   return PLUS;        }
"-"             {   return SUB;         }
"*"             {   return MULT;        }
"/"             {   return DIVI;        }
"%"             {   return MOD;         }
"and"           {   return AND;         }
"or"            {   return OR;          }
"<"             {   return LT;          }
">"             {   return GT;          }
"<="            {   return LTE;         }
">="            {   return GTE;         }
"="             {   return EQ;          }
"<>"            {   return NEQ;         }
";"             {   return SEMICOLON;   }
":"             {   return COLON;       }
","             {   return COMMA;       }
"("             {   return LAPAREN;     }
")"             {   return RAPAREN;     }
"["             {   return LSQUARE;     }
"]"             {   return RSQUARE;     }
"return"        {   return RETURN;      }
"not"           {   return NOT;         }
":="            {   return ASSIGN;      }
"\n"            {   line++;             }
%%
