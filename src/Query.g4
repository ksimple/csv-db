grammar Query;

// 语法规则
expression : orExpression;

orExpression : andExpression ('or' andExpression)*;

andExpression : binaryExpression ('and' binaryExpression) *;

binaryExpression : atom BINARY_OPERATOR atom;

atom : STRING | '(' orExpression ')';

// 词法规则
STRING : ((~[" \t=!&$]+)|(["](~["\\]|([\\][n\\"]))*["]));
BINARY_OPERATOR : ( '==' | '!=' | '&=' | '$=' );

WS : [ \t\r\n]+ -> skip;
