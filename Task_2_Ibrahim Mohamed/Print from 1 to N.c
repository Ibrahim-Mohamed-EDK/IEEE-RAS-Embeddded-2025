#include <stdio.h>

// Recursive function to print numbers from 1 to N
void printNumbers(int current, int N) {
    if (current > N) {
        return; // Base case: stop when current exceeds N
    }

    printf("%d\n", current);         // Print current number
    printNumbers(current + 1, N);    // Recursive call for next number
}

int main() {
    int N;
    
    // Input the number
    scanf("%d", &N);

    // Call the recursive function starting from 1
    printNumbers(1, N);

    return 0;
}