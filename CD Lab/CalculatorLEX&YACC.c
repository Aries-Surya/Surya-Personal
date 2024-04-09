LEX FILE
        ********* %
{
#include "y.tab.h"
#include <math.h>
    extern yylval;
    %
}
% %
        [0 - 9] +
{
    yylval = atoi(yytext);
    return NUM;
}
[+]
{ return '+'; }
    [-] { return '-'; }
[*]
{ return '*'; }
    [/] { return '/'; }
[\t] + ;
[\n]
{ return 0; } % %
    YACC FILE
        ********* %
    {
#include <stdio.h>
        % } %
    token NUM % left '-' '+' % right '*' '/' % %
    start : exp
{
    printf("%d\n", $$);
}
exp : exp '+' exp { $$ = $1 + $3; }
| exp '-' exp { $$ = $1 - $3; }
| exp '*' exp { $$ = $1 * $3; }
| exp '/' exp
{
    if ($3 == 0)
        yyerror("error");
    else
    {
        $$ = $1 / $3;
    }
}
| '(' exp ')' { $$ = $2; }
| NUM { $$ = $1; };
% %
    main()
{
    printf("Enter the Expr. in terms of integers\n");
    if (yyparse() == 0)
        printf("Success\n");
}
yywrap() {}
yyerror()
{
    printf("Error\n");
}

TO COMPILE & RUNwrite
the following linux command & press enter:
lex calci.l
yacc -d calci.y
cc lex.yy.c y.tab.c
./a.out
Now it will print:
Enter the expression in terms of integers:
5*8+3 43 Success