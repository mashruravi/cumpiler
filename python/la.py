import re

token_map = {
    'define': 'TK_KEY_DEFINE',
    'as': 'TK_KEY_AS',
    'is': 'TK_KEY_IS',
    'if': 'TK_KEY_IF',
    'then': 'TK_KEY_THEN',
    'else': 'TK_KEY_ELSE',
    'endif': 'TK_KEY_ENDIF',
    '+': 'TK_PLUS',
    '-': 'TK_MINUS',
    '*': 'TK_MUL',
    '/': 'TK_DIV',
    '~': 'TK_NOT',
    '&': 'TK_AND',
    '|': 'TK_OR',
    '<': 'TK_LESS',
    '<=': 'TK_LEQ',
    '>': 'TK_GT',
    '>=': 'TK_GEQ',
    '==': 'TK_EQ',
    '=': 'TK_ASSIGN',
    '(': 'TK_OPEN',
    ')': 'TK_CLOSE',
    ';': 'TK_SEMI',
    ',': 'TK_COMMA'
}

token_list = list()
tk_index = 0

def initialize(file_path):
    # Open the file at file_path
    source_lines = open(file_path).readlines()

    for index, line in enumerate(source_lines):
        # Replace ; with <space>;
        line = line.replace(';', ' ;')
        tokens = line.strip().split(' ')
        
        for token in tokens:
            # Check if token is keyword
            try:
                lex_token = token_map[token]
                token_list.append(lex_token)

            except KeyError:
                # Check if token is identifier
                if re.match('^[a-zA-Z][a-zA-Z0-9_]*$', token):
                    token_list.append('TK_IDEN')

                # Check if token is a real
                elif re.match('^[0-9]+.[0-9]+$', token):
                    token_list.append('TK_REAL')

                # Check if token is an int
                elif re.match('^[0-9]+$', token):
                    token_list.append('TK_INT')

                # Else, invalid token, print line at which error occurs
                else:
                    print("Invalid syntax: " + token + ", at line " + str(index + 1))
                    print(line)
                    return


def has_more_tokens():
    if tk_index < len(token_list):
        return True
    return False

def next():
    global tk_index
    next_token = token_list[tk_index]
    tk_index = tk_index + 1
    return next_token
