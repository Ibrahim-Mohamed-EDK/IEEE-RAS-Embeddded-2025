#include <stdio.h>
#include <ctype.h> // For isdigit()

int stringToInt(const char *str) {
    int result = 0;
    
    // Skip any leading whitespace
    while (*str == ' ') {
        str++;
    }
    
    // Skip any sign (both + and -)
    if (*str == '-' || *str == '+') {
        str++;
    }
    
    // Process each digit
    while (*str != '\0') {
        if (!isdigit(*str)) {
            break; // Stop at first non-digit character
        }
        
        result = result * 10 + (*str - '0');
        str++;
    }
    
    return result;
}

int main() {
    // Test cases
    const char *str1 = "-70";
    const char *str2 = "60";
    
    printf("%d\n", stringToInt(str1)); // Output: 70
    printf("%d\n", stringToInt(str2)); // Output: 60
    
    return 0;
}