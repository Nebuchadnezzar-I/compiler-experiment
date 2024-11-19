lexer grammar ExprLexer;

IMPORT      : 'import'                      ;
COMMA       : ','                           ;
LSQRLY      : '{'                           ;
RSQRLY      : '}'                           ;
EQUAL       : '='                           ;

// Keywords
PAGE        : 'page'                        ;
MAIN        : 'main'                        ;
ENDPOINT    : 'endpoint'                    ;


// Common libs
STDLIB      : 'std'                         ;
MATH        : 'math'                        ;
SERVER      : 'server'                      ;

STRING      : '"' ( ~["\\] | '\\' . )* '"'  ;
INT         : [0-9]+                        ;
ID          : [a-zA-Z_][a-zA-Z_0-9]*        ;
WS          : [ \t\n\r\f]+ -> skip          ;
