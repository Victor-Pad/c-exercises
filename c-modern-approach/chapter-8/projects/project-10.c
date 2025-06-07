#include <stdio.h>

int main(void) {
    int hours, minutes, time_to_minutes, departure_times[8], arrival_times[8];

    printf("Enter a 24-hour time: ");
    scanf_s("%2d:%2d", &hours, &minutes);

    time_to_minutes = hours * 60 + minutes;

    departure_times[0] = 8 * 60 + 00;
    departure_times[1] = 9 * 60 + 43;
    departure_times[2] = 11 * 60 + 19;
    departure_times[3] = 12 * 60 + 47;
    departure_times[4] = 14 * 60 + 00;
    departure_times[5] = 15 * 60 + 45;
    departure_times[6] = 19 * 60 + 00;
    departure_times[7] = 21 * 60 + 45;

    arrival_times[0] = 616;
    arrival_times[1] = 712;
    arrival_times[2] = 811;
    arrival_times[3] = 900;
    arrival_times[4] = 968;
    arrival_times[5] = 1075;
    arrival_times[6] = 1280;
    arrival_times[7] = 1438;

    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
        }
    }

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
