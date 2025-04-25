#include <stdio.h>

#define SIZE 3

void multiplyMatrices(int *mat1, int *mat2, int *result, int size) {
    for (int i = 0; i < size; i++) {          // row of first
        for (int j = 0; j < size; j++) {      // column of second
            *(result + i * size + j) = 0;     // initialize result cell
            for (int k = 0; k < size; k++) {
                *(result + i * size + j) += 
                    (*(mat1 + i * size + k)) * (*(mat2 + k * size + j));
            }
        }
    }
}

void printMatrix(int *mat, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%d ", *(mat + i * size + j));
        }
        printf("\n");
    }
}

int main() {
    int mat1[SIZE][SIZE] = {
        {10, 20, 30},
        {40, 50, 60},
        {70, 80, 90}
    };
    int mat2[SIZE][SIZE] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int result[SIZE][SIZE];

    multiplyMatrices((int *)mat1, (int *)mat2, (int *)result, SIZE);

    printf("Product of matrices is:\n");
    printMatrix((int *)result, SIZE);

    return 0;
}
