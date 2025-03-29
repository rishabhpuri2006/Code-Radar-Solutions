#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);
    int arr[x];

    // ✅ First, take input
    for (int i = 0; i < x; i++) {
        scanf("%d", &arr[i]);
    }

    // ✅ Initialize min and max AFTER input
    int max = arr[0];
    int min = arr[0];

    // ✅ Now, find min and max in a separate loop
    for (int i = 1; i < x; i++) {  // Start from index 1 (arr[0] is already set)
        if (arr[i] > max) {  
            max = arr[i];  
        }
        if (arr[i] < min) {  
            min = arr[i];  
        }
    }

    // ✅ Print results correctly
    printf("%d %d\n", min, max);
    return 0;
}
