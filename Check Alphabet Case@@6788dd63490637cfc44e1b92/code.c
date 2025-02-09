#include <stdio.h>

int main() {
    char ch;

    // Input a character
    printf("Enter a character: ");
    scanf("%c", &ch);

    // Check if the character is uppercase or lowercase
    if (ch >= 'A' && ch <= 'Z') {
        printf("The letter '%c' is in uppercase.\n", ch);
    } else if (ch >= 'a' && ch <= 'z') {
        printf("The letter '%c' is in lowercase.\n", ch);
    } else {
        printf("The entered character is not a letter.\n");
    }

    return 0;
}
