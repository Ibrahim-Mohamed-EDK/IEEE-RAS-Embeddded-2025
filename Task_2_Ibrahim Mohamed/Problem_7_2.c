#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int main() {
    int num1, num2;
    printf("first number: ");
    scanf("%d", &num1);
    printf("second number: ");
    scanf("%d", &num2);
    printf("GCD of %d and %d = %d\n", num1, num2, gcd(num1, num2));
    return 0;
}