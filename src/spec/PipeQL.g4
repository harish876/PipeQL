grammar PipeQL;

query
    : 'from' IDENTIFIER pipeExpression+ EOF
    ;

pipeExpression
    : '| select' selectExpression
    | '| filter' filterExpression
    | '| order by' orderExpression
    ;

selectExpression
    : (IDENTIFIER '.' IDENTIFIER 'as' IDENTIFIER) (',' IDENTIFIER '.' IDENTIFIER 'as' IDENTIFIER)*
    ;

filterExpression
    : '(' '('IDENTIFIER')' '=>' IDENTIFIER 'LIKE' REGEX ')'
    ;

orderExpression
    : IDENTIFIER ('asc' | 'desc')
    ;

IDENTIFIER
    : [a-zA-Z_][a-zA-Z0-9_]*
    ;

REGEX
    : '"' (~["\\] | '\\' .)* '"'
    ;

WS
    : [ \t\r\n]+ -> skip
    ;