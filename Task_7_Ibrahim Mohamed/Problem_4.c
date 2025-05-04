#include <stdio.h>

// Enum for days of the week
typedef enum {
    SATURDAY,
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY
} Day;

// Function to check if it's a weekend
const char* check_day_type(Day d) {
    if (d == SATURDAY || d == SUNDAY)
        return "Weekend";
    else
        return "Weekday";
}

int main() {
    Day today = FRIDAY;
    printf("Today is: %s\n", check_day_type(today));
    return 0;
}