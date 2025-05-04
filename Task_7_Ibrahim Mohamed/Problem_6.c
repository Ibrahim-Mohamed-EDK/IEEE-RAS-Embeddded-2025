#include <stdio.h>

// Union for multiple types
typedef union {
    int a;
    float b;
    char c;
} Data;

int main() {
    Data d;

    printf("Assigning d.a = 65\n");
    d.a = 65;
    printf("d.a = %d\n", d.a);
    printf("d.b = %f\n", d.b);
    printf("d.c = %c\n", d.c);

    printf("\nAssigning d.b = 3.14\n");
    d.b = 3.14;
    printf("d.a = %d\n", d.a);
    printf("d.b = %f\n", d.b);
    printf("d.c = %c\n", d.c);

    printf("\nAssigning d.c = 'Z'\n");
    d.c = 'Z';
    printf("d.a = %d\n", d.a);
    printf("d.b = %f\n", d.b);
    printf("d.c = %c\n", d.c);

    return 0;
}