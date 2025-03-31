#include <stdio.h>

int main() {
    int n;
    
    // Get user input
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        // Print spaces for pyramid alignment
       // for (int j = 1; j <= n - i; j++) {
           // printf(" ");
        //}

        // Print alphabets from 'A' to the corresponding letter
        for (int j = 1; j <= i; j++) {
            printf("%c ", 'A' + j - 1);
        }

        printf("\n");  // Move to the next row
    }

    return 0;
}
