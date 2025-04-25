#include <stdio.h>
#include <stdlib.h>

int* getOddNumbers(int *arr, int size, int *oddCount) {
    int *odds = (int *)malloc(size * sizeof(int));  // Allocate max possible size

    *oddCount = 0; // Initialize counter

    for (int i = 0; i < size; i++) {
        if (*(arr + i) % 2 != 0) {
            *(odds + (*oddCount)) = *(arr + i); // Add odd number
            (*oddCount)++; // Increase counter
        }
    }

    return odds; // Return pointer to array of odd numbers
}

int main() {
    int arr[100], n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d array elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", (arr + i));
    }

    int oddCount;
    int *oddNumbers = getOddNumbers(arr, n, &oddCount);

    printf("Odd numbers are: ");
    for (int i = 0; i < oddCount; i++) {
        printf("%d ", *(oddNumbers + i));
    }

    printf("\nTotal odd numbers: %d\n", oddCount);

    free(oddNumbers); // Free allocated memory

    return 0;
}
