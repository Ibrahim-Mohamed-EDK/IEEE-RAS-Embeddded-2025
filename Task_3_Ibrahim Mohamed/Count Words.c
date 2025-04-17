#include <stdio.h>
#include <ctype.h>

int main() {
    char S[1000001];
    fgets(S, sizeof(S), stdin);
    
    int wordCount = 0;
    int inWord = 0; // Flag to track if we are inside a word
    
    for (int i = 0; S[i] != '\0'; i++) {
        if (isalpha(S[i])) {
            if (!inWord) {
                wordCount++;
                inWord = 1;
            }
        } else {
            inWord = 0;
        }
    }
    
    printf("%d\n", wordCount);
    return 0;
}