grammar PipeQL;

// Entry point for the query
query
    : fromClause pipeOperator* EOF
    ;

// FROM clause
fromClause
    : FROM IDENTIFIER (aliasClause)?
    ;

// Pipe operators
pipeOperator
    : PIPE_OPERATOR selectOperator
    | PIPE_OPERATOR whereOperator
    | PIPE_OPERATOR orderByOperator
    | PIPE_OPERATOR unionOperator
    | PIPE_OPERATOR intersectOperator
    | PIPE_OPERATOR exceptOperator
    | PIPE_OPERATOR assertOperator
    | PIPE_OPERATOR limitClause
    ;

// SELECT pipe operator
selectOperator
    : SELECT selectExpression (',' selectExpression)*
    ;

// WHERE pipe operator
whereOperator
    : WHERE booleanExpression
    ;

// ORDER BY pipe operator
orderByOperator
    : ORDER_BY orderExpression (',' orderExpression)*
    ;

// UNION pipe operator
unionOperator
    : UNION ('ALL' | 'DISTINCT') '(' query (',' query)* ')'
    ;

// INTERSECT pipe operator
intersectOperator
    : INTERSECT ('ALL' | 'DISTINCT') '(' query (',' query)* ')'
    ;

// EXCEPT pipe operator
exceptOperator
    : EXCEPT ('ALL' | 'DISTINCT') '(' query (',' query)* ')'
    ;

// ASSERT pipe operator
assertOperator
    : ASSERT booleanExpression (',' payloadExpression)*
    ;

// LIMIT clause
limitClause
    : LIMIT NUMBER (offsetClause)?
    ;

// OFFSET clause
offsetClause
    : OFFSET NUMBER
    ;

// SELECT expression
selectExpression
    : expression ('AS' IDENTIFIER)?
    ;

// ORDER BY expression
orderExpression
    : expression ('ASC' | 'DESC')?
    ;

// Boolean expression
booleanExpression
    : expression
    | expression BETWEEN expression AND expression
    ;

// Payload expression for ASSERT
payloadExpression
    : expression
    ;

// General expression
expression
    : IDENTIFIER
    | literal
    | functionCall
    | '(' expression ')'
    ;

// Function call
functionCall
    : IDENTIFIER '(' (expression (',' expression)*)? ')'
    ;

// Literals
literal
    : STRING
    | NUMBER
    ;

// Alias clause
aliasClause
    : AS IDENTIFIER
    ;

// Tokens
FROM         : [Ff][Rr][Oo][Mm];
SELECT       : [Ss][Ee][Ll][Ee][Cc][Tt];
WHERE        : [Ww][Hh][Ee][Rr][Ee];
ORDER_BY     : [Oo][Rr][Dd][Ee][Rr] [Bb][Yy];
UNION        : [Uu][Nn][Ii][Oo][Nn];
INTERSECT    : [Ii][Nn][Tt][Ee][Rr][Ss][Ee][Cc][Tt];
EXCEPT       : [Ee][Xx][Cc][Ee][Pp][Tt];
ASSERT       : [Aa][Ss][Ss][Ee][Rr][Tt];
LIMIT        : [Ll][Ii][Mm][Ii][Tt];
OFFSET       : [Oo][Ff][Ff][Ss][Ee][Tt];
AS           : [Aa][Ss];
BETWEEN      : [Bb][Ee][Tt][Ww][Ee][Ee][Nn];
AND          : [Aa][Nn][Dd];
PIPE_OPERATOR: '|>';

// Identifiers
IDENTIFIER
    : [a-zA-Z_][a-zA-Z0-9_]*
    ;

// String literals
STRING
    : '"' (~["\\] | '\\' .)* '"'
    ;

// Numbers
NUMBER
    : [0-9]+ ('.' [0-9]+)?
    ;

// Whitespace
WS
    : [ \t\r\n]+ -> skip
    ;