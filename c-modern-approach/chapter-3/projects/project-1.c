#include <stdio.h>

int main(void) {
    int month, day, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf_s("%d/%d/%d", &month, &day, &year);

    printf("You entered the date %d%.2d%d", year, month, day);
}
