#include <stdio.h>

int main() {
    int num;

    // Prompt the user for input
    scanf("%d", &num);

    // Check if the number is within the range 1 to 100
    if (num >= 1 && num <= 100) {
        printf("In Range");
    } else {
        printf("Out of Range");
    }

    return 0;
}
