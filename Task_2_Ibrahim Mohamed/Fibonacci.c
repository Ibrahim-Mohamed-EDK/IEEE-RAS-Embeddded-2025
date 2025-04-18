#include <stdio.h>

// Recursive function to return the nth Fibonacci number
int fibonacci(int n) {
    if (n == 1) return 0; // First Fibonacci number
    if (n == 2) return 1; // Second Fibonacci number
    return fibonacci(n - 1) + fibonacci(n - 2); // Recursive case
}

int main() {
    int N;
    
    // Read the value of N
    scanf("%d", &N);

    // Print the Nth Fibonacci number
    printf("%d\n", fibonacci(N));

    return 0;
}
