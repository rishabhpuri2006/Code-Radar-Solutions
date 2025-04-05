#include <stdio.h>

int main() {
    int n;

    scanf("%d", &n);

    // Validate input
    if (n < 2) {
        return 1;
    }

    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize max1 and max2
    int max1 = arr[0] > arr[1] ? arr[0] : arr[1];
    int max2 = arr[0] < arr[1] ? arr[0] : arr[1];

    // Find the two largest elements
    for (int i = 2; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }
    }

    int product = max1 * max2;
    printf("%d",product);

    return 0;
}