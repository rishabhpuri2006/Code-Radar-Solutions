#include <stdio.h>

int main() {
    char ch;
    scanf("%c", &ch);

    // Check if the character is a letter
    if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
        // Check for vowels (both lowercase and uppercase)
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || 
            ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
            printf("Vowel\n");
        } else {
            printf("Consonant\n");
        }
    }
    // Check if the character is a digit
    else if (ch >= '0' && ch <= '9') {
        printf("Digit\n");
    }
    // If not a letter or digit, it's a special character
    else {
        printf("Special Character\n");
    }

    return 0;
}
