#include <stdio.h>

int main(void) {
    int month, day;

    printf("Enter number of days in month: ");
    scanf_s("%d", &month);
    printf("Enter starting day of the week: (1=Sun, 7=Sat): ");
    scanf_s("%d", &day);

    for (int i = 1; i < day; i++) {
        printf("  ");
    }

    for (int i = 1; i <= month; i++) {
        printf("%3d", i);

        if ((day + i - 1) % 7 == 0) {
            printf("\n");
        }
    }
}
