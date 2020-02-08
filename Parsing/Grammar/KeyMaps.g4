grammar KeyMaps;

WS: (' ' | '\t' | '\n') -> skip;
SEMICOLON: ';';

NUMBER: [0-9]+;
IDENTIFIER: [a-zA-Z][a-zA-Z0-9]*;

key: NUMBER;
value: NUMBER;
destination: IDENTIFIER;

trigger_condition
    :   any='ANY'
    |   press='PRESS'
    |   release='RELEASE'
    |   pressure='PRESSURE'
    ;

trigger_threshold
    :   exact='IS'
    |   threshold_up='ABOVE'
    |   threshold_down='BELOW'
    ;

keymap: trigger_condition key trigger_threshold value destination SEMICOLON;
keymaps: keymap*;