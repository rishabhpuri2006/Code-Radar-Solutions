#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n < 2) {
        return 1;
    }

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Initialize indices of two max magnitude numbers
    int idx1 = 0, idx2 = 1;

    // Ensure proper initial order based on magnitude
    if (abs(arr[idx2]) > abs(arr[idx1])) {
        int temp = idx1;
        idx1 = idx2;
        idx2 = temp;
    }

    for (int i = 2; i < n; i++) {
        int mag = abs(arr[i]);

        if (mag > abs(arr[idx1])) {
            idx2 = idx1;
            idx1 = i;
        } else if (mag > abs(arr[idx2])) {
            idx2 = i;
        }
    }

    int product = arr[idx1] * arr[idx2];

    printf("%d",product);

    return 0;
}
