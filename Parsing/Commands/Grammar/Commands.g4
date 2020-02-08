grammar Commands;

SPACE: ' ' -> skip;

LETTER: [a-zA-Z];
NUMBER: [0-9]+;

TEXT: LETTER+;

path: (TEXT | '.' | '/' | SPACE)+;

command
    : use_command
    | help_command
    | quit_command
    | load_command
    | list_command
    | clear_command
    | reload_command
    | change_command
    | toggle_command
    ;

quit_command: 'quit' | 'exit' | 'close';
help_command: 'help';
load_command: 'load' path;
list_command: 'list' (devices='devices' | keymaps='keymaps');
clear_command: 'clear' (keymaps='keymaps' | console='console');
reload_command: 'reload';
change_command: 'change' (device='device');

toggle_command: 'toggle'
    (   log='logging'
    |   keymap='keymap'
    )
    (on='on' | off='off');

use_command: 'use'
    (   (device='device' num=NUMBER)
    |   (keymap='keymap' path)
    );