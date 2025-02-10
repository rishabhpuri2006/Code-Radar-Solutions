#include <stdio.h>

int main() {
    float num;

    // Ask the user to enter a number
    scanf("%f", &num);

    // Check if the number is positive, negative, or zero
    if (num > 0) {
        printf("Positive");
    }
    else if (num < 0) {
        printf("Negative");
    }
    else {
        printf("Zero");
    }

    return 0;
}
