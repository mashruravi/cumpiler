#include <stdio.h>

#include "lexer.h";

void printUseError() {
    printf("No source file specified.\n");
    printf("Usage: cumpiler path/to/source/file\n");
}

int main(int argc, char *argv[]) {

    switch (argc) {

		// No file path specified
		case 1: {
			printUseError();
			break;
		}

		// Correct number of arguments
		case 2: {
			printf("Correct Usage!");
			break;
		}

		// More than one argument
		default: {
			printUseError();
		}

    }

    return 0;
}
