#include <stdio.h>

// Recursive function to calculate the length of the 3n + 1 sequence
int sequenceLength(long long n) {
    if (n == 1)
        return 1; // Base case

    if (n % 2 == 0)
        return 1 + sequenceLength(n / 2);
    else
        return 1 + sequenceLength(3 * n + 1);
}

int main() {
    long long n;

    // Input
    scanf("%lld", &n);

    // Output the sequence length
    printf("%d\n", sequenceLength(n));

    return 0;
}
