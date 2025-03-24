#include <stdio.h>

int main() {
    int num, sum = 0;
    scanf("%d", &num);

    while (num) {
        sum += num % 10;
        num /= 10;
    }

    printf("The sum of digits (%d) is prime number.\n", sum);
    return 0;
}
