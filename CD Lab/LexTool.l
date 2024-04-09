/* program name is lexp.l */
%{
/* program to recognize a c program */
%}
identifier [a-zA-Z][a-zA-Z0-9]*
%%
#.* { printf("\n%s is a PREPROCESSOR DIRECTIVE",yytext);}
int |
float |
char |
double |
while |
for |
do |
if |
break |
continue |
void |
switch |
case |
long |
struct |
const |
typedef |
return |
else |
goto {printf("\n\t%s is a KEYWORD",yytext);}
{identifier}\( { printf("\n\nFUNCTION\n\t%s",yytext);}
\{ { printf("\n BLOCK BEGINS");}
\} { printf("\n BLOCK ENDS");}
{identifier}(\[[0-9]*\])? { printf("\n %s IDENTIFIER",yytext);}
\".*\" { printf("\n\t%s is a STRING",yytext);}
[0-9]+ { printf("\n\t%s is a NUMBER",yytext);}
\)(\;)? { printf("\n\t");ECHO;printf("\n");}
\( ECHO;
= { printf("\n\t%s is an ASSIGNMENT OPERATOR",yytext);}
\<= |
\>= |
\< |
== |
\> { printf("\n\t%s is a RELATIONAL OPERATOR",yytext);}
%%
int main(int argc,char **argv)
{
if (argc > 1)
{
FILE *file;
file = fopen(argv[1],"r");
if(!file)
{
printf("could not open %s \n",argv[1]);
exit(0);
}
yyin = file;
}
yylex();
printf("\n\n");
return 0;
} int yywrap()
{
return