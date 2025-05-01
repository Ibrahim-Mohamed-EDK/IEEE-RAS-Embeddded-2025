#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define the structure
struct Pet {
    char name[50];
    int age;
    char kind[30];
    char food[30];
    char ownerName[50];
};

// Function to create a Pet on the heap
struct Pet* createPet(const char* name, int age, const char* kind, const char* food, const char* ownerName) {
    struct Pet* p = (struct Pet*)malloc(sizeof(struct Pet));

    if (p != NULL) {
        strcpy(p->name, name);
        p->age = age;
        strcpy(p->kind, kind);
        strcpy(p->food, food);
        strcpy(p->ownerName, ownerName);
    }

    return p;
}

// Function to free a Pet
void deletePet(struct Pet* p) {
    if (p != NULL) {
        printf("Deleting pet: %s\n", p->name);
        free(p);
    }
}

int main() {
    // Create a pet dynamically
    struct Pet* myPet = createPet("Rex", 4, "Dog", "Beef", "Ali");

    if (myPet != NULL) {
        // Display some info (just for demo)
        printf("Pet Created: %s (%s)\n", myPet->name, myPet->kind);

        // Delete the pet
        deletePet(myPet);
    }

    return 0;
}
