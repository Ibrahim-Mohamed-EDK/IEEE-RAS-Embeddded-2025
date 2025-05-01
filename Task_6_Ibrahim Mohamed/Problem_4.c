#include <stdio.h>
#include <string.h>

// Define the structure for a Pet (Dog or Cat)
struct Pet {
    char name[50];       // 50 bytes
    int age;             // 4 bytes
    char kind[30];       // 30 bytes
    char food[30];       // 30 bytes
    char ownerName[50];  // 50 bytes
};

int main() {
    struct Pet myPet;

    printf("Size of Pet structure: %lu bytes\n", sizeof(struct Pet));

    return 0;
}