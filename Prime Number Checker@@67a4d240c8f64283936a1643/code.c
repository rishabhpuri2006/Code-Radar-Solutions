#include <stdio.h>
#include <math.h>

// Function to check if a number is prime
int is_prime(int n) {
    if (n <= 1) return 0;
    if (n == 2) return 1;
    if (n % 2 == 0) return 0;

    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0)
            return 0;
    }

    return 1;
}

int main() {
    int num;
    scanf("%d", &num);

    if (is_prime(num))
    else

    return 0;
}

