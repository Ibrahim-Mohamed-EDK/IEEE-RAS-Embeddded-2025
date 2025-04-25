#include <stdio.h>

// Function prototypes for arithmetic operations
float add(float a, float b) { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }
float divide(float a, float b) { return a / b; }

int main() {
    int choice;
    float num1, num2, result;
    float (*operation)(float, float); // Function pointer declaration

    // Display menu
    printf("Select an operation:\n");
    printf("1. Add\n");
    printf("2. Subtract\n");
    printf("3. Multiply\n");
    printf("4. Divide\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    // Assign function pointer based on user choice
    switch (choice) {
        case 1:
            operation = add;
            break;
        case 2:
            operation = subtract;
            break;
        case 3:
            operation = multiply;
            break;
        case 4:
            if (num2 == 0) {
                printf("Error: Division by zero!\n");
                return 1;
            }
            operation = divide;
            break;
        default:
            printf("Invalid choice!\n");
            return 1;
    }

    // Call the selected function through the pointer
    result = operation(num1, num2);
    printf("Result: %.2f\n", result);

    return 0;
}