#ifndef __LEXER_H__
#define __LEXER_H__

// Required for FILE pointer
#include <stdio.h>

// Initialize lexer with path to source file
// Parameter: path to file
void lexer(char*);

// Open a source file
// Parameter: path to file
FILE* _openSourceFile(char*);

// Close a source file
// Parameter: file pointer
void _closeFile(FILE*);

#endif