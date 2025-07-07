#include <stdio.h>

struct date {
    int year;
    int month;
    int day;
};

int compare_dates(struct date d1, struct date d2);

int main(void) {
    struct date d1, d2;

    printf("Enter first date (mm/dd/yy): ");
    scanf_s("%d/%d/%d", &d1.month, &d1.day, &d1.year);

    printf("Enter second date (mm/dd/yy): ");
    scanf_s("%d/%d/%d", &d2.month, &d2.day, &d2.year);

    int result = compare_dates(d1, d2);

    if (result == 0)
        printf("They're the same date.\n");
    else if (result == -1)
        printf("%.2d/%.2d/%d is earlier than %.2d/%.2d/%d\n", d1.month, d1.day,
               d1.year, d2.month, d2.day, d2.year);
    else if (result == 1)
        printf("%.2d/%.2d/%d is earlier than %.2d/%.2d/%d\n", d2.month, d2.day,
               d2.year, d1.month, d1.day, d1.year);
}

int compare_dates(struct date d1, struct date d2) {
    if (d1.year < d2.year || (d1.year == d2.year && d1.month < d2.month) ||
        (d1.year == d2.year && d1.month == d2.month && d1.day < d2.day))
        return -1;
    else if (d2.year < d1.year || (d2.year == d1.year && d2.month < d1.month) ||
             (d2.year == d1.year && d2.month == d1.month && d2.day < d1.day))
        return 1;
    else
        return 0;
}
