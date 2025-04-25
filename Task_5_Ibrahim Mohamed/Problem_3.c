#include <stdio.h>

void sortAscending(int *arr, int n) {
    int *i, *j, temp;
    for (i = arr; i < arr + n - 1; i++) {
        for (j = i + 1; j < arr + n; j++) {
            if (*i > *j) {
                temp = *i;
                *i = *j;
                *j = temp;
            }
        }
    }
}

void printArray(int *arr, int n) {
    for (int *p = arr; p < arr + n; p++) {
        printf("%d, ", *p);
    }
    printf("\n");
}

void printArrayReverse(int *arr, int n) {
    for (int *p = arr + n - 1; p >= arr; p--) {
        printf("%d, ", *p);
    }
    printf("\n");
}

int main() {
    int arr[100], n, i;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d array elements: ", n);
    for (i = 0; i < n; i++) {
        scanf("%d", (arr + i));
    }

    sortAscending(arr, n);

    printf("Array in ascending order: ");
    printArray(arr, n);

    printf("Array in descending order: ");
    printArrayReverse(arr, n);

    return 0;
}
