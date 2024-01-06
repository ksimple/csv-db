grammar query_parser;

// 语法规则
expression : orExpression;

orExpression : andExpression ('or' andExpression)*;

andExpression : binaryExpression ('and' binaryExpression) *;

binaryExpression : atom binaryOperator atom {$result = new BinaryExpressionPredict($atom, $binaryOperator, $atom2);};

atom : STRING | '(' orExpression ')';

binaryOperator : BINARY_OPERATOR;

// 词法规则
STRING : ((~["=!&$]+)|(["](~["\\]|([\\][n\\"]))*["]));
BINARY_OPERATOR : ( '==' | '!=' | '&=' | '$=' );

WS : [ \t\r\n]+ -> skip;
