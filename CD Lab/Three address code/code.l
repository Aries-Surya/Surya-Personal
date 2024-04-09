LEX program:
%{
#include<stdio.h>
#include<string.h>
#include "ex4.tab.h"
%}
%%
[ \n\t]+ ;
main {return MAIN;}
int|float|double|char {strcpy(yylval.string,yytext); return TYPE; }
[a-zA-Z][a-zA-Z0-9_]* {strcpy(yylval.string,yytext);return ID; }
[0-9]+ |
[0-9]+\.[0-9]+ {
yylval.dval=atof(yytext);
return NUMBER;
}
. return yytext[0];
%%
int yywrap(){
return 1;
}