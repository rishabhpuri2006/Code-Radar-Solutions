int main() {
    unsigned int num;
    scanf("%u", &num);

    // Call the function to count leading zeroes
    int leadingZeroes = countLeadingZeroes(num);

    // Print the result
    printf("%u%d\n", num, leadingZeroes);

    return 0;
}
