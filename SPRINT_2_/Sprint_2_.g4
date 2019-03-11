grammar Sprint_2_;


prg : funcDeclaration+;
funcDeclaration : type ID '(' formalParameters? ')' block;

formalParameters : parameter (',' parameter)*;

parameter : type ID;

block : '{' statement* '}';

statement : block
            | declStatement
            | retStatement
            ;

retStatement : 'return' (ID|INT) ';';
declStatement: type varDeclaration (',' varDeclaration)* ';';
varDeclaration : ID ('=' (ID | INT | CHAR))?;

type : 'char' | 'int' | 'void';

ID  :   LETTER (LETTER|DIGIT|UNDER_SCORE)*;
INT : DIGIT+;
CHAR : '\'' ('\u0000' .. '\u007F') '\''; //TODO: manage escaped characters as [']

LETTER : [a-zA-Z];
DIGIT : [0-9];
UNDER_SCORE : '_';

INCLUDE : '#' [ \t]* 'include' [ \t]* '<' (~[> \t])*? '>' -> skip;
WS : [ \t\r\n]+ -> skip;
