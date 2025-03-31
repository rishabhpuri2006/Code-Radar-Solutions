#include <stdio.h>

int main() {
    int n, num = 1;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {  // Loop for rows
        for (int j = 1; j <= i; j++) {  // Loop for numbers in each row
            printf("%d ", num);
            num++;  // Increment number
        }
        printf("\n");  // Move to next row
    }

    return 0;
}
