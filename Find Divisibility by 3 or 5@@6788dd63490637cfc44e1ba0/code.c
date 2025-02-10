#include <stdio.h>

int main() {
    int num;

    // Prompt the user for input
    printf("Enter a number: ");
    scanf("%d", &num);

    // Check divisibility
    if (num % 3 == 0 && num % 5 == 0) {
        printf("Divisible by Both");
    } else if (num % 3 == 0) {
        printf("Divisible by 3");
    } else if (num % 5 == 0) {
        printf("Divisible by 5");
    } else {
        printf("Not Divisible");
    }

    return 0;
}
