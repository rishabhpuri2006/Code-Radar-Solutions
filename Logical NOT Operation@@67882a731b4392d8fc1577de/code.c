#include <stdio.h>

int main() {
    int num;

    // Taking input from the user
    scanf("%d", &num);

    // Using the '!' operator to check if the number is not greater than 0
    if (!(num > 0)) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}
