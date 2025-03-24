#include <stdio.h>

int main() {
    int N, years, months, days;

    // Read input
    scanf("%d", &N);

    // Calculate years, months, and days
    years = N / 365;
    N %= 365;
    months = N / 30;
    days = N % 30;

    // Print the result
    printf("%d years\n%d months\n%d days\n", years, months, days);

    return 0;
}
