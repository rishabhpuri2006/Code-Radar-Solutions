#include <stdio.h>

int main() {
    fprintf(stderr, "Error: Something went wrong!\n");
    return 1;  // Return a non-zero value to indicate an error
}