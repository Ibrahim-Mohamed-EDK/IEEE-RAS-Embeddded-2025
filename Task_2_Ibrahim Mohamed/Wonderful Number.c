#include <stdio.h>

// Function to check if binary representation is a palindrome
int isBinaryPalindrome(int n) {
    int binary[32];
    int i = 0;

    // Store binary digits
    while (n > 0) {
        binary[i++] = n % 2;
        n /= 2;
    }

    // Check if binary is palindrome
    for (int j = 0; j < i / 2; j++) {
        if (binary[j] != binary[i - j - 1]) {
            return 0; // Not a palindrome
        }
    }

    return 1; // Palindrome
}

// Function to check if number is wonderful
int isWonderful(int n) {
    // Must be odd and binary palindrome
    if (n % 2 == 1 && isBinaryPalindrome(n)) {
        return 1;
    }
    return 0;
}

int main() {
    int N;
    scanf("%d", &N);

    if (isWonderful(N)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
