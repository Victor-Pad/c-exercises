/* Prints a one-month reminder list */
#include <stdio.h>
#include <string.h>

#define MAX_REMIND 365 /* maximum number of reminders */
#define MSG_LEN 60     /* max length of reminder message */

int read_line(char str[], int n);
int main(void) {
    char reminders[MAX_REMIND][MSG_LEN + 3];
    char day_str[3], hour_str[3], minute_str[3], time_str[5], prev_time_str[5],
        msg_str[MSG_LEN + 1];

    int month[MAX_REMIND];
    int day, i, j, i2, j2, hour, minutes, months, num_remind = 0;
    for (;;) {
        if (num_remind == MAX_REMIND) {
            printf("-- No space left --\n");
            break;
        }

        printf(
            "\nEnter month, day and 24-hour time (month/day xx:xx) and "
            "reminder: ");
        scanf("%2d/%2d %2d:%2d", &months, &day, &hour, &minutes);

        if (day > 31 || day < 0)
            continue;
        if (day == 0 || months == 0)
            break;

        month[num_remind] = months;
        sprintf(day_str, "%2d", day);
        sprintf(hour_str, "%2d", hour);
        sprintf(minute_str, "%.2d", minutes);
        sprintf(time_str, "%4d", day * 60 + minutes);
        read_line(msg_str, MSG_LEN);

        for (i = 0; i < num_remind; i++)
            if (strcmp(day_str, reminders[i]) < 0)
                break;

        for (j = num_remind; j > i; j--)
            strcpy(reminders[j], reminders[j - 1]);

        for (i2 = 0; i2 < num_remind; i2++) {
            char reminder_day[3], prev_time_str[5];
            strncpy(reminder_day, reminders[i2], i2);
            reminder_day[2] = '\0';
            strncpy(prev_time_str, reminders[i2] + 2, 4);
            prev_time_str[4] = '\0';

            if (strcmp(day_str, reminder_day) &&
                strcmp(time_str, prev_time_str) < 0)
                break;
        }

        strcpy(prev_time_str, time_str);
        strcpy(reminders[i], day_str);
        strcat(reminders[i], " ");
        strcat(reminders[i], hour_str);
        strcat(reminders[i], ":");
        strcat(reminders[i], minute_str);
        strcat(reminders[i], msg_str);
        num_remind++;
    }

    printf("Month    Day Time  Reminder\n");

    for (i = 0; i < num_remind; i++) {
        switch (month[i]) {
            case 1:
                printf("January  ");
                break;
            case 2:
                printf("February ");
                break;
            case 3:
                printf("March\t");
                break;
            case 4:
                printf("April\t");
                break;
            case 5:
                printf("May\t  ");
                break;
            case 6:
                printf("June\t ");
                break;
            case 7:
                printf("July\t ");
                break;
            case 8:
                printf("August  ");
                break;
            case 9:
                printf("September");
                break;
            case 10:
                printf("October  ");
                break;
            case 11:
                printf("November ");
                break;
            case 12:
                printf("December ");
                break;
        }
        printf(" %s\n", reminders[i]);
    }

    return 0;
}

int read_line(char str[], int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;

    str[i] = '\0';
    return i;
}
