parser grammar ExprParser;
options { tokenVocab=ExprLexer; }

program
    : importStatement* (pageDeclaration | mainDeclaration) EOF
    ;

mainDeclaration
    : MAIN EQUAL LSQRLY endpointDeclaration+ RSQRLY
    ;

endpointDeclaration
    : ENDPOINT ID ID
    ;

pageDeclaration
    : PAGE EQUAL LSQRLY STRING RSQRLY
    ;

importStatement
    : IMPORT ID+ (importPath | stdImportLib)
    ;

importPath
    : STRING
    ;

stdImportLib
    : STDLIB
    | MATH
    | SERVER
    | ID
    ;
