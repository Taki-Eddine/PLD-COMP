grammar sprint;


prg : funcDeclaration+;
funcDeclaration : type ID '(' formalParameters? ')' block;

formalParameters : parameter (',' parameter)*;

parameter : type ID;

block : '{' statement* '}';

statement : block
            | declStatement
            | retStatement
            | expr ';' 
            | ifStatement
            ;

retStatement : 'return' expr ';';
declStatement: type varDeclaration (',' varDeclaration)* ';';
ifStatement : 'if' '(' boolE ')' block ('else' 'if' '(' boolE ')' block)* ('else' block)? #ifElseIfElse
            | 'if' '(' boolE ')' block #if
            | 'if' '(' boolE ')' block 'else' block #ifElse
            | 'while' '(' boolE ')' block #whileDo
            | 'do' block 'while' '(' boolE ')' ';' #doWhile 
            ;

varDeclaration : ID '=' expr #InitializedDec
                | ID #nonInitDec
                ;
                
expr :  '(' expr ')' #PAREN_EXPR  
        | PLUS_MINUS expr #UNARY_EXPR
        | expr '*' expr #MULT_EXPR
        | expr PLUS_MINUS expr #ADD_MINUS_EXPR 
        | ID '=' expr #AFFECT_EXPR
        | ID #VAR_EXPR
        | INT #NUM_EXPR      
        ;

boolE:  '!' boolE #NOT
        |'(' boolE ')' #PAREN_BOOLE
        | expr LT_GT expr #CMPLtGt
        | expr EQ_NEQ expr #CMPEqNeq 
        | boolE '&&' boolE #AND
        | boolE '||' boolE #OR
        ;
type : 'int';

ID  :   LETTER (LETTER|DIGIT|UNDER_SCORE)*;
INT : DIGIT+;
CHAR : '\'' ('\u0000' .. '\u007F') '\''; //TODO: manage escaped characters as [']
PLUS_MINUS : '+' | '-';
LT_GT : '<' | '<=' | '>' | '>=';
EQ_NEQ : '==' | '!=';
LETTER : [a-zA-Z];
DIGIT : [0-9];
UNDER_SCORE : '_';

INCLUDE : '#' [ \t]* 'include' [ \t]* '<' (~[> \t])*? '>' -> skip;
WS : [ \t\r\n]+ -> skip;
