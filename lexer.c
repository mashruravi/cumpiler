#include "lexer.h"

// Required for file handling
#include <stdio.h>

// Required for exit() function
#include <stdlib.h>

void lexer(char* pathToFile) {

    // Try to open the file
    FILE* filePointer = _openSourceFile(pathToFile);

    // Get a token stream 
    char** tokenStream = _getTokenStream(filePointer);

    // Be good and close the source file
    _closeFile(filePointer);
}

FILE* _openSourceFile(char* path) {

    FILE *fp;

    // Open the source file in read mode
    fp = fopen(path, "r");
    
    // Quit if something went wrong
    if(fp == NULL) {
        fprintf(stderr, "Something went wrong. Can't open source file!\n");
        exit(1);
    }

    return fp;
}

void _closeFile(FILE* fp) {
    fclose(fp);
}

char** _getTokenStream(FILE* fp) {

    int lineNumber = 1;  

    // Read source file character by character
    while(!feof(fp)) {

        // Get the next character in the stream
        char next = getc(fp);

        // On encountering a blank space
        if(next == ' ') {

        }

        // On encountering new line
        else if (next == '\n') {
            lineNumber++;
        }
    }

}