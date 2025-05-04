#include <stdio.h>

int main(void) {
    int hours, minutes, time_to_minutes;

    int depart_1, depart_2, depart_3, depart_4, depart_5, depart_6, depart_7,
        depart_8;

    char c;

    printf("Enter a 12-hour time: ");
    scanf_s("%2d:%2d", &hours, &minutes);

    time_to_minutes = hours * 60 + minutes;

    depart_1 = 8 * 60 + 00;
    depart_2 = 9 * 60 + 43;
    depart_3 = 11 * 60 + 19;
    depart_4 = 12 * 60 + 47;
    depart_5 = 14 * 60 + 00;
    depart_6 = 15 * 60 + 45;
    depart_7 = 19 * 60 + 00;
    depart_8 = 21 * 60 + 45;

    if (time_to_minutes >= depart_1 && time_to_minutes < depart_2) {
        printf("Closest departure time is 8:00 a.m.");
        printf(", arriving at 10:16 a.m.");
    } else if (time_to_minutes >= depart_2 && time_to_minutes < depart_3) {
        printf("Closest departure time is 9:43 a.m.");
        printf(", arriving at 11:52 a.m.");
    } else if (time_to_minutes >= depart_3 && time_to_minutes < depart_4) {
        printf("Closest departure time is 11:19 a.m.");
        printf(", arriving at 1:31 p.m.");
    } else if (time_to_minutes >= depart_4 && time_to_minutes < depart_5) {
        printf("Closest departure time is 12:47 p.m.");
        printf(", arriving at 3:00 p.m.");
    } else if (time_to_minutes >= depart_5 && time_to_minutes < depart_6) {
        printf("Closest departure time is 2:00 p.m.");
        printf(", arriving at 4:08 p.m.");
    } else if (time_to_minutes >= depart_6 && time_to_minutes < depart_7) {
        printf("Closest departure time is 3:45 p.m.");
        printf(", arriving at 5:55 p.m.");
    } else if (time_to_minutes >= depart_7 && time_to_minutes < depart_8) {
        printf("Closest departure time is 7:00 p.m.");
        printf(", arriving at 9:20 p.m.");
    } else {
        printf("Closest departure time is 9:45 p.m.");
        printf(", arriving at 11:58 p.m.");
    }
}
