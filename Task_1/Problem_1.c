#include <stdio.h>
#include <limits.h>

int main() {
    int num, maxNum = INT_MIN, minNum = INT_MAX;

    while (1) {
        // Read a number from the user
        scanf("%d", &num);

        // Terminate if the user enters -1
        if (num == -1) {
            break;
        }

        // Update max and min values
        if (num > maxNum) {
            maxNum = num;
        }
        if (num < minNum) {
            minNum = num;
        }
    }

    // Print the results
    printf("%d %d\n", maxNum, minNum);

    return 0;
}
