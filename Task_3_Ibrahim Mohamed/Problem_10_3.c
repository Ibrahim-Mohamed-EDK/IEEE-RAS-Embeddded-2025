#include <stdio.h>

int main() {
    int n;

    // Prompt user for the size of the square matrix
    printf("Enter the size of the square: ");
    scanf("%d", &n);

    int matrix[n][n];

    // Read the elements of the matrix
    printf("Enter the elements of the square:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    // Calculate the magic constant
    int magic_constant = n * (n * n + 1) / 2;
    int is_magic = 1; // Assume it's a magic square initially

    // Check rows
    for (int i = 0; i < n; i++) {
        int row_sum = 0;
        for (int j = 0; j < n; j++) {
            row_sum += matrix[i][j];
        }
        if (row_sum != magic_constant) {
            is_magic = 0;
            break;
        }
    }

    // Check columns if rows are valid
    if (is_magic) {
        for (int j = 0; j < n; j++) {
            int col_sum = 0;
            for (int i = 0; i < n; i++) {
                col_sum += matrix[i][j];
            }
            if (col_sum != magic_constant) {
                is_magic = 0;
                break;
            }
        }
    }

    // Check diagonals if rows and columns are valid
    if (is_magic) {
        int diag1_sum = 0, diag2_sum = 0;
        for (int i = 0; i < n; i++) {
            diag1_sum += matrix[i][i];
            diag2_sum += matrix[i][n - 1 - i];
        }
        if (diag1_sum != magic_constant || diag2_sum != magic_constant) {
            is_magic = 0;
        }
    }

    // Output the result
    if (is_magic) {
        printf("The square is a magic square.\n");
    } else {
        printf("The square is not a magic square.\n");
    }

    return 0;
}