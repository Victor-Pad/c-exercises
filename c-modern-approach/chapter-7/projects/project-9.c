#include <ctype.h>
#include <stdio.h>

int main(void) {
    int hour, minute;
    char ch;

    printf("Enter a 12-hour time: ");
    scanf_s("%d:%d", &hour, &minute);

    while ((ch = getchar()) != '\n') {
        if ((hour == 12) && ch == 'A') {
            hour = 0;
        }

        switch (toupper(ch)) {
            case 'P':
                hour += 12;
                break;
        }
    }

    printf("Value of hour: %d\n", hour);

    if (hour == 24) {
        hour = 0;
    }

    printf("Equivalent 24-hour time: %.2d:%d", hour, minute);
}
