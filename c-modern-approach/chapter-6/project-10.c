#include <stdio.h>

int main(void) {
    int month1, day1, year1, month2, day2, year2;

    printf("Enter a date (mm/dd/yy): ");
    scanf_s("%d/%d/%d", &month1, &day1, &year1);

    while (1) {
        printf("Enter a date (mm/dd/yy): ");
        scanf_s("%d/%d/%d", &month2, &day2, &year2);

        if (month2 == 0 && day2 == 0 && year2 == 0) {
            break;
        }

        if (year2 < year1 || (year2 == year1 && month2 < month1) ||
            (year1 == year2 && month1 == month2 && day2 < day1)) {
            year1 = year2;
            month1 = month2;
            day1 = day2;
        }
    }

    printf("%d/%d/%.2d is the earliest date\n", month1, day1, year1);
}
