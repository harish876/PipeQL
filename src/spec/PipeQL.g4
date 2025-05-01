grammar PipeQL;

// Entry point for the query
query
    : fromClause pipeOperator* EOF
    ;

// FROM clause
fromClause
    : 'FROM' IDENTIFIER (aliasClause)?
    ;

// Pipe operators
pipeOperator
    : '|>' selectOperator
    | '|>' whereOperator
    | '|>' orderByOperator
    | '|>' unionOperator
    | '|>' intersectOperator
    | '|>' exceptOperator
    | '|>' assertOperator
    | '|>' limitClause // Added LIMIT clause as a pipe operator
    ;

// SELECT pipe operator
selectOperator
    : 'SELECT' selectExpression (',' selectExpression)*
    ;

// WHERE pipe operator
whereOperator
    : 'WHERE' booleanExpression
    ;

// ORDER BY pipe operator
orderByOperator
    : 'ORDER BY' orderExpression (',' orderExpression)*
    ;

// UNION pipe operator
unionOperator
    : 'UNION' ('ALL' | 'DISTINCT') '(' query (',' query)* ')'
    ;

// INTERSECT pipe operator
intersectOperator
    : 'INTERSECT' ('ALL' | 'DISTINCT') '(' query (',' query)* ')'
    ;

// EXCEPT pipe operator
exceptOperator
    : 'EXCEPT' ('ALL' | 'DISTINCT') '(' query (',' query)* ')'
    ;

// ASSERT pipe operator
assertOperator
    : 'ASSERT' booleanExpression (',' payloadExpression)*
    ;

// LIMIT clause
limitClause
    : 'LIMIT' NUMBER (offsetClause)?
    ;

// OFFSET clause
offsetClause
    : 'OFFSET' NUMBER
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
    : 'AS' IDENTIFIER
    ;

// Tokens
IDENTIFIER
    : [a-zA-Z_][a-zA-Z0-9_]*
    ;

STRING
    : '"' (~["\\] | '\\' .)* '"'
    ;

NUMBER
    : [0-9]+ ('.' [0-9]+)?
    ;

// Whitespace
WS
    : [ \t\r\n]+ -> skip
    ;