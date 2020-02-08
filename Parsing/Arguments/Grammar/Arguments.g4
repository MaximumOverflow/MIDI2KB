grammar Arguments;

DASH: '-';
SPACE: ' ';

CHAR: [a-zA-Z];
NUMBER: [0-9]+;
path: (CHAR | '.' | '/')+;

identifier: CHAR (CHAR | NUMBER)*;
value: path | NUMBER | identifier;
space: SPACE+;

arg: DASH identifier (space value)?;
args: (arg space)*;