#include <stdio.h>

int main() {
    char lowercase_letter = 'a';
    char uppercase_letter = 'A';

    // Print the lowercase alphabet
    while (lowercase_letter <= 'z') {
        putchar(lowercase_letter);
        lowercase_letter++;
    }
    
    // Print the uppercase alphabet
    while (uppercase_letter <= 'Z') {
        putchar(uppercase_letter);
        uppercase_letter++;
    }
    
    // Print a newline character
    putchar('\n');

    return 0;
}
