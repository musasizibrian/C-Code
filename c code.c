//C program to read command line arguments and just print them.
#include <stdio.h>

int main(int argc, char *argv[]) {
 // argc: Number of arguments, including the program name itself
    // argv: Array of strings, each string representing an argument


    for (int i = 0; i < argc; i++) {
        printf("Argument %d: %s\n", i, argv[i]);
    }

    return 0;
}
