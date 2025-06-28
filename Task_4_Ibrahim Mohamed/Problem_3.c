#include <stdio.h>

// Function to swap two integers using pointers
void swap(int *x, int *y) {
    int temp;

    temp = *x;   // Store value at address x
    *x = *y;     // Put y into x
    *y = temp;   // Put temp into y
}

int main() {
    int a, b;

    // Input two numbers
    printf("Enter value of a: ");
    scanf("%d", &a);

    printf("Enter value of b: ");
    scanf("%d", &b);

    // Display before swap
    printf("\nBefore swapping: a = %d, b = %d\n", a, b);

    // Call swap function (call by reference)
    swap(&a, &b);

    // Display after swap
    printf("After swapping: a = %d, b = %d\n", a, b);

    return 0;
}
