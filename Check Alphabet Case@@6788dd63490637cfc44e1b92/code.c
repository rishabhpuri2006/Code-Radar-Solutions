#include <stdio.h>

int main() {
    char ch;

    // Input a character
    scanf("%c", &ch);

    // Check if the character is uppercase or lowercase
    if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase");
    } else{
        printf("Lowercase");
    return 0;
}
