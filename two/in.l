%{
#define YYSTYPE char*
	
#include <stdio.h>
#include "cpptest.tab.h"

void yyerror(char *s);

%}

%%

[1-4]	yylval = atoi(yytext); return NUMBER;
[ \n]

%%