#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {  // Loop for rows
        for (int j = 1; j <= n; j++) {  // Loop for columns
            // Print '*' for first/last row or first/last column
            if (i == 1 || i == n || j == 1 || j == n) {
                printf("*");
            } else {
                printf(" ");  // Print space inside
            }
        }
        printf("\n");  // Move to next row
    }

    return 0;
}
