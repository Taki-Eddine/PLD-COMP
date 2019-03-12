grammar Sprint_1_;

prg : 'int' 'main' '(' ')' '{' ret '}';

ret : 'return' INT ';' ;
INT : DIGIT+;
DIGIT : [0-9];
WS  : [ \t\r\n] -> skip;
