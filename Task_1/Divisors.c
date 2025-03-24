#include <stdio.h>

int main() {
    int N, i;

    // Read the number N
    scanf("%d", &N);

    // Print all divisors in ascending order
    for (i = 1; i <= N; i++) {
        if (N % i == 0) {
            printf("%d\n", i);
        }
    }

    return 0;
}

