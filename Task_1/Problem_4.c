#include <stdio.h>

int main() {
    char word[100];
    int length = 0, i;

    scanf("%s", word);

    while (word[length]) length++; // Calculate length manually

    for (i = 0; i < length / 2; i++) {
        if (word[i] != word[length - i - 1]) {
            printf("The word '%s' is not a palindrome.\n", word);
            return 0;
        }
    }

    printf("The word '%s' is a palindrome.\n", word);
    return 0;
}
