#include <stdio.h>
#include <string.h>

// Define the structure
struct Employee {
    char name[50];
    float salary;
    int id;
    char jobTitle[50];
};

// Function to initialize an Employee
struct Employee initializeEmployee(const char name[], float salary, int id, const char jobTitle[]) {
    struct Employee emp;

    strcpy(emp.name, name);
    emp.salary = salary;
    emp.id = id;
    strcpy(emp.jobTitle, jobTitle);

    return emp;
}

// Function to print an Employee
void printEmployee(struct Employee emp) {
    printf("\n--- Employee Information ---\n");
    printf("Name      : %s\n", emp.name);
    printf("Salary    : %.2f\n", emp.salary);
    printf("ID        : %d\n", emp.id);
    printf("Job Title : %s\n", emp.jobTitle);
}

int main() {
    // Initialize employee using the function
    struct Employee e1 = initializeEmployee("Ahmed", 7500.50, 101, "Software Engineer");

    // Print employee details
    printEmployee(e1);

    return 0;
}