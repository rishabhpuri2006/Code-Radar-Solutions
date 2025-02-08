#include <stdio.h>

int main() {
    int num1, num2;

    // Taking input from the user
    scanf("%d", &num1);
    scanf("%d", &num2);

    // Using product to check if numbers have different signs
    if (num1 * num2 < 0) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}
