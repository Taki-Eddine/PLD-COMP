grammar sprint;


prg : funcDeclaration+;
funcDeclaration : TYPE ID '(' formalParameters? ')' block;

formalParameters : parameter (',' parameter)*;

parameter : TYPE ID;

block : '{' statement* '}';

statement : block
            | declaration ';'
            | ret ';'
            | assignment ';'
            | call ';'
            | ifStatement
            | whileDoStatement
            | doWhileStatement
            ;

ret : 'return' expr;

declaration: TYPE varDeclaration (',' varDeclaration)* #DECLARATION
             ;

assignment:  ID '=' expr #SCALAR_ASSIGNMENT
            |ID '[' expr ']' '=' expr #ARR_ASSIGNMENT;
        

call : ID '(' arguments? ')' #CALL;

ifStatement : 'if' '(' boolE ')' block ('else' 'if' '(' boolE ')' block)* ('else' block)? #ifElseIfElse
            | 'if' '(' boolE ')' block #if
            | 'if' '(' boolE ')' block 'else' block #ifElse
            ;

whileDoStatement: 'while' '(' boolE ')' block #whileDo;
doWhileStatement: 'do' block 'while' '(' boolE ')' ';' #doWhile ;

varDeclaration : ID '=' expr #InitializedDec
                | ID #nonInitDec
                | ID '[' (INT)? ']' '=' ('{' expr (',' expr)* '}'| '{' '}') #InitializedArrDec
                | ID '[' INT ']' #nonInitArrDec
                ;
arguments : expr (',' expr)*;

expr :    call #CALL_EXPR
        | ID '[' expr ']' #ARR_EXPR
        | '(' expr ')' #PAREN_EXPR  
        | PLUS_MINUS expr #UNARY_EXPR
        | expr '*' expr #MULT_EXPR
        | expr PLUS_MINUS expr #ADD_MINUS_EXPR 
        | assignment #ASSIGNMENT_EXPR
        | ID #VAR_EXPR
        | INT #NUM_EXPR
        | CHAR #CHAR_EXPR
        ;

boolE:  '!' boolE #NOT
        |'(' boolE ')' #PAREN_BOOLE
        | expr LT_GT expr #CMPLtGt
        | expr EQ_NEQ expr #CMPEqNeq 
        | boolE '&&' boolE #AND
        | boolE '||' boolE #OR
        ;
TYPE : 'int';

ID  : LETTER (LETTER|DIGIT|UNDER_SCORE)*;
INT : DIGIT+;
PLUS_MINUS : '+' | '-';
LT_GT : '<' | '<=' | '>' | '>=';
EQ_NEQ : '==' | '!=';
LETTER : [a-zA-Z];
DIGIT : [0-9];
UNDER_SCORE : '_';
CHAR : '\'' (DIGIT | LETTER | [!"#$%&()*+,-./:;<=>?@^_`{}~ ] |'\\n'|'\\r'|'\\t'| '\\\'' | '\\\\' | '[' | ']' | '|') '\'';

INLINE_COMMENT : '//'(.)*? [\r\n] -> skip;
MULTILINE_COMMENT: '/*' (.)*? '*/' -> skip;
INCLUDE : '#' [ \t]* 'include' [ \t]* '<' (~[> \t])*? '>' -> skip;
WS : [ \t\r\n]+ -> skip;