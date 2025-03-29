#include <stdio.h>

int findMajorityElement(int arr[], int n) {
    int candidate = -1, count = 0;

    // Step 1: Find a candidate using Moore’s Voting Algorithm
    for (int i = 0; i < n; i++) {
        if (count == 0) {
            candidate = arr[i];
            count = 1;
        } else if (arr[i] == candidate) {
            count++;
        } else {
            count--;
        }
    }

    // Step 2: Verify if candidate is actually the majority element
    count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == candidate) {
            count++;
        }
    }

    return (count > n / 2) ? candidate : -1;  // Return majority element or -1 if not found
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Find and print the majority element
    int result = findMajorityElement(arr, n);
    printf("%d\n", result);

    return 0;
}
