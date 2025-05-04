#include <stdio.h>
#include <string.h>

// Define struct with typedef and bit-fields
typedef struct {
    unsigned int roll_no : 4;  // 4-bit
    unsigned int age : 8;      // 8-bit
    unsigned int marks : 3;    // 3-bit
    char address[100];         // String
    char name[50];             // String
} student_info;

// Function to print all student info
void print_students(student_info students[], int count) {
    for (int i = 0; i < count; i++) {
        printf("Student %d:\n", i + 1);
        printf("  Roll No: %u\n", students[i].roll_no);
        printf("  Age: %u\n", students[i].age);
        printf("  Marks: %u\n", students[i].marks);
        printf("  Name: %s\n", students[i].name);
        printf("  Address: %s\n\n", students[i].address);
    }
}

int main() {
    student_info students[5] = {
        {1, 20, 6, "Cairo", "Ahmed"},
        {2, 21, 7, "Alexandria", "Mona"},
        {3, 22, 5, "Giza", "Khaled"},
        {4, 19, 4, "Tanta", "Sara"},
        {5, 23, 3, "Mansoura", "Youssef"}
    };

    print_students(students, 5);

    printf("Size of student_info struct: %zu bytes\n", sizeof(student_info));

    return 0;
}