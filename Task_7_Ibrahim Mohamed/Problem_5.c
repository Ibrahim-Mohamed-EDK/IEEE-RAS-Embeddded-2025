#include <stdio.h>

// Enum with ASCII codes for operations
typedef enum {
    ADD = '+',
    SUB = '-',
    MUL = '*',
    DIV = '/',
    AND = '&',
    OR  = '|',
    NOT = '!'
} Operation;

float calculate(float op1, float op2, Operation op) {
    switch (op) {
        case ADD: return op1 + op2;
        case SUB: return op1 - op2;
        case MUL: return op1 * op2;
        case DIV: return op2 != 0 ? op1 / op2 : 0;
        case AND: return (int)op1 & (int)op2;
        case OR:  return (int)op1 | (int)op2;
        case NOT: return !(int)op1;
        default: return 0;
    }
}

int main() {
    float a, b;
    char op_char;
    
    printf("Enter operand1: ");
    scanf("%f", &a);
    printf("Enter operand2: ");
    scanf("%f", &b);
    printf("Enter operation (+, -, *, /, &, |, !): ");
    scanf(" %c", &op_char);  // space before %c to consume newline

    float result = calculate(a, b, (Operation)op_char);
    printf("Result: %.2f\n", result);

    return 0;
}