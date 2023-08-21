#include "main.h"
#include <stdio.h>
#include <ctype.h>

int isAlphabetic(char c) {
    return isalpha(c);
}

int main() {
    char character;

    printf("Enter a character: ");
    scanf("%c", &character);

    if (isAlphabetic(character)) {
        printf("The character '%c' is an alphabetic character.\n", character);
    } else {
        printf("The character '%c' is not an alphabetic character.\n", character);
    }

    return 0;
}

