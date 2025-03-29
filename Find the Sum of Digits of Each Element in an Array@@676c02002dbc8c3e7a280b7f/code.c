#include <stdio.h>
#include <stdlib.h>  // For abs()

// Function to calculate sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    num = abs(num);  // Convert negative numbers to positive
    
    while (num != 0) {
        sum += num % 10;  // Extract last digit and add to sum
        num /= 10;        // Remove last digit
    }
    return sum;
}

int main() {
    int n;

    // Input array size

    scanf("%d", &n);

    int arr[n], sumArray[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Compute sum of digits for each element
    for (int i = 0; i < n; i++) {
        sumArray[i] = sumOfDigits(arr[i]);
    }

    // Print the resulting array
    for (int i = 0; i < n; i++) {
        printf("%d ", sumArray[i]);
    }

    return 0;
}
