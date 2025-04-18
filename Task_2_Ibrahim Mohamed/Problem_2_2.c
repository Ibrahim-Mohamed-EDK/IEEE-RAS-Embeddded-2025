#include <stdio.h>
#include <math.h>

// Function to count the number of digits in a number
int countDigits(int num) {
    int count = 0;
    while (num != 0) {
        count++;
        num /= 10;
    }
    return count;
}

// Function to check if a number is an Armstrong number
int isArmstrong(int num) {
    int original = num;
    int sum = 0;
    int digits = countDigits(num);

    while (num != 0) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }

    return sum == original;
}

// Main function
int main() {
    int lower, upper;

    // Input the range from the user
    printf("Enter the lower limit: ");
    scanf("%d", &lower);
    printf("Enter the upper limit: ");
    scanf("%d", &upper);

    printf("Armstrong numbers between %d to %d are: ", lower, upper);

    // Loop through the range and check for Armstrong numbers
    for (int i = lower; i <= upper; i++) {
        if (isArmstrong(i)) {
            printf("%d ", i);
        }
    }

    printf("\n");
    return 0;
}
