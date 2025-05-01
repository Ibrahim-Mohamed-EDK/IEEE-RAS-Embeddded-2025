#include <stdio.h>

// Define the structure for a Pet (Dog or Cat)
struct Pet {
    char name[50];
    int age;
    char kind[30];
    char food[30];
    char ownerName[50];
};

int main() {
    struct Pet myPet;

    // Input data
    printf("Enter pet's name: ");
    scanf("%s", myPet.name);

    printf("Enter pet's age: ");
    scanf("%d", &myPet.age);

    printf("Enter kind of pet (Dog/Cat): ");
    scanf("%s", myPet.kind);

    printf("Enter pet's favorite food: ");
    scanf("%s", myPet.food);

    printf("Enter owner's name: ");
    scanf("%s", myPet.ownerName);

    // Output data
    printf("\n--- Pet Information ---\n");
    printf("Name       : %s\n", myPet.name);
    printf("Age        : %d\n", myPet.age);
    printf("Kind       : %s\n", myPet.kind);
    printf("Food       : %s\n", myPet.food);
    printf("Owner Name : %s\n", myPet.ownerName);

    return 0;
}