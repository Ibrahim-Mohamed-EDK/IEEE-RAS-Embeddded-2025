#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Read the size of the string

    char S[100005]; // Enough to hold up to 10^5 characters
    scanf("%s", S); // Read the string

    int count = 1; // Start with the first character counted

    // Traverse the string and count only non-repeating adjacent characters
    for (int i = 1; i < N; i++) {
        if (S[i] != S[i - 1]) {
            count++;
        }
    }

    printf("%d\n", count);
    return 0;
}
