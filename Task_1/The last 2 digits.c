#include <stdio.h>

int main() {
    int A, B, C, D, Z;
    scanf("%d %d %d %d", &A, &B, &C, &D);

    Z= A*B*C*D;

    int result;
    result = Z % 100;

    printf("%d\n", result);

    return 0;
}
