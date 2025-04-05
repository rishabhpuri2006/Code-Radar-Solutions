#include <stdio.h>
#include <limits.h>

int main() {
    int n;

    // Input array size
    scanf("%d", &n);

    if (n < 2) {
        return 1;
    }

    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize with the smallest possible integer values
    int max1 = INT_MIN, max2 = INT_MIN;

    // Find the top two maximum numbers
    for (int i = 0; i < n; i++) {
        if (arr[i] > max1) {
            max2 = max1;
            max1 = arr[i];
        } else if (arr[i] > max2) {
            max2 = arr[i];
        }
    }

    int product = max1 * max2;
    printf("%d", product);

    return 0;
}
