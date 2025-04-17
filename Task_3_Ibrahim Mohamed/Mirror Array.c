#include <stdio.h>

int main() {
    int N, M;
    scanf("%d %d", &N, &M); // Read number of rows and columns

    int A[100][100];

    // Read the matrix
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    // Print the mirrored matrix
    for (int i = 0; i < N; i++) {
        for (int j = M - 1; j >= 0; j--) {
            printf("%d ", A[i][j]);
        }
        printf("\n");
    }

    return 0;
}
