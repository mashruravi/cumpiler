#ifndef __LEXER_H__
#define __LEXER_H__

// Required for FILE pointer
#include <stdio.h>

// Initialize lexer
// Parameter: path to file
void lexer(char*);

// Open a source file
// Parameter: path to file
// Returns: file descriptor
FILE* _openSourceFile(char*);

// Close a source file
// Parameter: file pointer
void _closeFile(FILE*);

// Get a token stream from a source file
// Paramter: file descriptor pointing to source file
// Returns: an array of tokens
char** _getTokenStream(FILE*);

#endif