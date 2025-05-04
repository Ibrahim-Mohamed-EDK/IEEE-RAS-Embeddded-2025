#include <stdio.h>

// Define complex number struct using typedef
typedef struct {
    float real;
    float imag;
} Complex;

// Function to add two complex numbers
Complex add_complex(Complex c1, Complex c2) {
    Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

// Function to print complex number
void print_complex(Complex c) {
    printf("Result: %.2f + %.2fi\n", c.real, c.imag);
}

int main() {
    Complex c1 = {3.2, 4.5};
    Complex c2 = {1.8, -2.5};

    Complex result = add_complex(c1, c2);
    print_complex(result);

    return 0;
}