%{
    #include <string>

    using namespace std;

    void yyerror(const char *s)
    {
    	if (s == NULL)
    		std::cerr << "wrong input" << ", line " << yylineno << std::endl;
    	else
        	std::cerr << s << ", line " << yylineno << std::endl;
    }

    int main()
    {
    	yyparse();
    }

    string questions[8];
    question[0] = "what is?";
%}

%token NUMBER 

%%

    answer:
        NUMBER
        {

        }

%%