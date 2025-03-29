#include <stdio.h>

int findFirstPeak(int arr[], int n) {
    if (n == 1) {
        return arr[0]; // Single element is always a peak
    }

    // Check the first element
    if (arr[0] > arr[1]) {
        return arr[0];
    }

    // Check middle elements
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1]) {
            return arr[i]; // First peak found
        }
    }

    // Check the last element
    if (arr[n - 1] > arr[n - 2]) {
        return arr[n - 1];
    }

    return -1; // No peak found
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find the first peak
    int peak = findFirstPeak(arr, n);
    printf("%d\n", peak);

    return 0;
}
