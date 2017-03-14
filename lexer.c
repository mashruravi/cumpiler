#include "lexer.h"

// Required for file handling
#include <stdio.h>

// Required for exit() function
#include <stdlib.h>

void lexer(char* pathToFile) {

    // Try to open the file
    FILE* filePointer = _openSourceFile(pathToFile);

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