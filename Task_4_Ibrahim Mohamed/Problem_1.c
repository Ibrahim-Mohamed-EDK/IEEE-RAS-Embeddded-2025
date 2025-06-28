#include <stdio.h>

int main() {
    // 1. Declare and initialize variables
    int intVar = 10;
    char charVar = 'A';
    float floatVar = 3.14f;
    long longVar = 123456789L;

    // 2. Declare pointers for each variable
    int *intPtr;
    char *charPtr;
    float *floatPtr;
    long *longPtr;

    // 3. Initialize pointers to point to the variables
    intPtr = &intVar;
    charPtr = &charVar;
    floatPtr = &floatVar;
    longPtr = &longVar;

    // 4. Display values and addresses
    printf("----- Integer -----\n");
    printf("Value of intVar: %d\n", intVar);
    printf("Address of intVar: %p\n", (void*)&intVar);
    printf("Value using intPtr: %d\n", *intPtr);
    printf("Address stored in intPtr: %p\n", (void*)intPtr);

    printf("\n----- Character -----\n");
    printf("Value of charVar: %c\n", charVar);
    printf("Address of charVar: %p\n", (void*)&charVar);
    printf("Value using charPtr: %c\n", *charPtr);
    printf("Address stored in charPtr: %p\n", (void*)charPtr);

    printf("\n----- Float -----\n");
    printf("Value of floatVar: %.2f\n", floatVar);
    printf("Address of floatVar: %p\n", (void*)&floatVar);
    printf("Value using floatPtr: %.2f\n", *floatPtr);
    printf("Address stored in floatPtr: %p\n", (void*)floatPtr);

    printf("\n----- Long -----\n");
    printf("Value of longVar: %ld\n", longVar);
    printf("Address of longVar: %p\n", (void*)&longVar);
    printf("Value using longPtr: %ld\n", *longPtr);
    printf("Address stored in longPtr: %p\n", (void*)longPtr);

    return 0;
}
