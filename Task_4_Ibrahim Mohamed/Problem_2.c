#include <stdio.h>

int main() {
    int num1, num2;
    int *ptr1, *ptr2;

    // Input two numbers from user
    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    // Initialize pointers
    ptr1 = &num1;
    ptr2 = &num2;

    // Perform arithmetic operations using pointers
    int sum = *ptr1 + *ptr2;
    int difference = *ptr1 - *ptr2;
    int product = *ptr1 * *ptr2;
    int quotient = 0;

    if (*ptr2 != 0) {
        quotient = *ptr1 / *ptr2; // Integer division
    } else {
        printf("Cannot divide by zero!\n");
    }

    // Output the results
    printf("\nSum = %d\n", sum);
    printf("Difference = %d\n", difference);
    printf("Product = %d\n", product);
    printf("Quotient = %d\n", quotient);

    return 0;
}
