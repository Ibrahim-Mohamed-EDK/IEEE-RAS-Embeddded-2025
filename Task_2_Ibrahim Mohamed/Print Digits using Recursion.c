#include <stdio.h>

// Recursive function to print digits of a number
void printDigits(int n) {
    if (n < 10) {
        printf("%d ", n);
        return;
    }

    // Recursive call for the number without the last digit
    printDigits(n / 10);

    // Print the last digit
    printf("%d ", n % 10);
}

int main() {
    int T, N;

    // Read number of test cases
    scanf("%d", &T);

    for (int i = 0; i < T; i++) {
        scanf("%d", &N);
        
        // Special case for N = 0
        if (N == 0) {
            printf("0");
        } else {
            printDigits(N);
        }

        printf("\n"); // Move to next line after each test case
    }

    return 0;
}