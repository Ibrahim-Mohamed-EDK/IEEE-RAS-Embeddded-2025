#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Read number of elements

    int A[1000]; // Array to store the numbers

    // Read array elements
    for (int i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }

    // Bubble Sort
    for (int i = 0; i < N - 1; i++) {
        for (int j = 0; j < N - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                // Swap A[j] and A[j + 1]
                int temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }

    // Print the sorted array
    for (int i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }

    printf("\n");
    return 0;
}
