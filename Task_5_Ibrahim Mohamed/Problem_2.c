#include <stdio.h>

void copyString(char *source, char *destination) {
    while (*source != '\0') {
        *destination = *source;
        source++;
        destination++;
    }
    *destination = '\0'; // Add null terminator to end the copied string
}

int main() {
    char str[100], copiedStr[100];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove newline character from input
    char *p = str;
    while (*p) {
        if (*p == '\n') {
            *p = '\0';
            break;
        }
        p++;
    }

    copyString(str, copiedStr);

    printf("Original String: %s\n", str);
    printf("Copied String: %s\n", copiedStr);

    return 0;
}
