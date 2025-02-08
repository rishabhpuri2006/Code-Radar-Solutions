#include <stdio.h>

int main() {
    int num;

    // Taking integer input from the user
    scanf("%d", &num);

    // Printing the hexadecimal and octal representations
    printf("Hexadecimal: %X\n", num);  // %X prints the hexadecimal value (uppercase)
    printf("Octal: %o\n", num);        // %o prints the octal value

    return 0;
}
