#include <stdio.h>

int main() {
    int num, sum = 0, i = 1;
    
    printf("Enter a positive number: ");
    scanf("%d", &num);
    
    while(i < num) {
        if(num % i == 0) sum += i;
        i++;
    }
    
    if(sum == num && num > 0) {
        printf("%d is a perfect number\n", num);
    } else {
        printf("%d is not a perfect number\n", num);
    }
    
    return 0;
}