#include <stdio.h>

// Define Date structure
struct Date {
    int day;
    int month;
    int year;
};

// Function to compare two dates using pointers
int areDatesEqual(struct Date *d1, struct Date *d2) {
    return (d1->day == d2->day) &&
           (d1->month == d2->month) &&
           (d1->year == d2->year);
}

int main() {
    struct Date date1, date2;

    // Input for date 1
    printf("Enter first date (day month year): ");
    scanf("%d %d %d", &date1.day, &date1.month, &date1.year);

    // Input for date 2
    printf("Enter second date (day month year): ");
    scanf("%d %d %d", &date2.day, &date2.month, &date2.year);

    // Compare dates using pointers
    if (areDatesEqual(&date1, &date2)) {
        printf("Dates are equal.\n");
    } else {
        printf("Dates are not equal.\n");
    }

    return 0;
}