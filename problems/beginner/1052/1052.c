#include <stdio.h>

int main () {
    int month;
    const char * months[] = {
        "January\0",
        "February\0",
        "March\0",
        "April\0",
        "May\0",
        "June\0",
        "July\0",
        "August\0",
        "September\0",
        "October\0",
        "November\0",
        "December\0"
    };

    scanf("%d", &month);

    printf("%s\n", months[month - 1]);

    return 0;
}
