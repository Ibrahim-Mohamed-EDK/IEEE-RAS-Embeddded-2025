#include <stdio.h>

int compareStrings(char *str1, char *str2) {
    while (*str1 != '\0' && *str2 != '\0') {
        if (*str1 != *str2) {
            return 0;  // Characters are different
        }
        str1++;
        str2++;
    }

    // Check if both strings ended at the same time
    if (*str1 == '\0' && *str2 == '\0') {
        return 1;  // Strings are identical
    } else {
        return 0;  // One string is longer than the other
    }
}

int main() {
    char str1[100], str2[100];

    printf("Enter String1: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter String2: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove newline characters from fgets input (optional but makes it accurate)
    char *p = str1;
    while (*p) {
        if (*p == '\n') {
            *p = '\0';
            break;
        }
        p++;
    }
    p = str2;
    while (*p) {
        if (*p == '\n') {
            *p = '\0';
            break;
        }
        p++;
    }

    if (compareStrings(str1, str2)) {
        printf("Both strings are Identical\n");
    } else {
        printf("Strings are NOT Identical\n");
    }

    return 0;
}
