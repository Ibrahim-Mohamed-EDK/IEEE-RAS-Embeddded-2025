#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N); // Read matrix size

    int A[100][100]; // Declare matrix (max size 100x100)
    int primarySum = 0;
    int secondarySum = 0;

    // Read matrix elements and calculate diagonal sums
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);

            if (i == j) {
                primarySum += A[i][j]; // Primary diagonal
            }

            if (i + j == N - 1) {
                secondarySum += A[i][j]; // Secondary diagonal
            }
        }
    }

    int difference = primarySum - secondarySum;
    if (difference < 0) difference = -difference;

    printf("%d\n", difference);

    return 0;
}
