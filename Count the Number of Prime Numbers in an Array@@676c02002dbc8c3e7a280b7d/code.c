#include <stdio.h>
#include <math.h>  // Required for sqrt()

int isComposite(int num) {
    if (num < 2) return 0;  // Ignore numbers < 2
    for (int i = 2; i <= sqrt(num); i++) {
        if (num % i == 0) return 1;  // Found a divisor, it's composite
    }
    return 0; // If no divisor found, it's prime
}

int main() {
    int x;
    scanf("%d", &x);
    
    int arr[x];
    for (int i = 0; i < x; i++) {
        scanf("%d", &arr[i]);
    }

    int count = 0;
    for (int i = 0; i < x; i++) {
        if (isComposite(arr[i])) {
            printf("%d ", arr[i]);
            count++;
        }
    }

    return 0;
}
