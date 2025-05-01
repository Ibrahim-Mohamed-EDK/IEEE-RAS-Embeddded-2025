#include <stdio.h>
#include <string.h>

// Define the structure for a Pet (Dog or Cat)
struct Pet {
    char name[50];
    int age;
    char kind[30];
    char food[30];
    char ownerName[50];
};

// Function to create a pet and return the struct
struct Pet createPet(const char name[], int age, const char kind[], const char food[], const char ownerName[]) {
    struct Pet p;

    strcpy(p.name, name);
    p.age = age;
    strcpy(p.kind, kind);
    strcpy(p.food, food);
    strcpy(p.ownerName, ownerName);

    return p;
}

// Function to print pet details
void printPet(struct Pet p) {
    printf("\n--- Pet Information ---\n");
    printf("Name       : %s\n", p.name);
    printf("Age        : %d\n", p.age);
    printf("Kind       : %s\n", p.kind);
    printf("Food       : %s\n", p.food);
    printf("Owner Name : %s\n", p.ownerName);
}

int main() {
    // Create a pet using the function
    struct Pet myPet = createPet("Bella", 3, "Cat", "Tuna", "Sarah");

    // Print the pet's information
    printPet(myPet);

    return 0;
}