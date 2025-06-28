#include <stdio.h>
#include <ctype.h> // For isdigit()

// Function to print even numbers from a string
void printEvenNumbers(const char *str) {
    int i = 0;

    while (str[i] != '\0') {
        if (isdigit(str[i])) { // Check if character is a digit
            int digit = str[i] - '0'; // Convert char to int
            if (digit % 2 == 0) {
                printf("%c", str[i]);
            }
        }
        i++;
    }
    printf("\n");
}

int main() {
    char str[] = "012345678";

    printf("Even numbers in the string: ");
    printEvenNumbers(str);

    return 0;
}
