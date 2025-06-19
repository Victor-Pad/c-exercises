#include <stdio.h>
#include <stdlib.h>

void find_closest_flight(int desired_time,
                         int *departure_time,
                         int *arrival_time);

int main(void) {
    int hours, minutes, a_hours, a_minutes, time_to_minutes, departure_time,
        arrival_time;
    printf("Enter a 24-hour time: ");
    scanf_s("%2d:%2d", &hours, &minutes);

    time_to_minutes = hours * 60 + minutes;
    find_closest_flight(time_to_minutes, &departure_time, &arrival_time);

    hours = departure_time / 60;
    a_hours = arrival_time / 60;

    if (hours == 0)
        hours = 12;
    else if (hours > 12)
        hours -= 12;
    if (a_hours == 0)
        a_hours = 12;
    else if (a_hours > 12)
        a_hours -= 12;

    minutes = departure_time % 60;
    a_minutes = arrival_time % 60;

    if (departure_time < 720)
        printf(
            "Closest departure time is %d:%.2d a.m., arriving at %d:%.2d "
            "a.m.\n",
            hours, minutes, a_hours, a_minutes);
    else
        printf(
            "Closest departure time is %d:%.2d p.m., arriving at %d:%.2d "
            "p.m.\n",
            hours, minutes, a_hours, a_minutes);
}

void find_closest_flight(int desired_time,
                         int *departure_time,
                         int *arrival_time) {
    int closest_index,
        departure_times[8] = {480, 583, 679, 767, 840, 945, 1140, 1305},
        arrivals[8] = {616, 712, 811, 900, 968, 1075, 1280, 1438};
    int diff = abs(desired_time - departure_times[0]);

    for (int i = 0; i < 8; i++) {
        int closest = abs(desired_time - departure_times[i]);

        if (closest < diff) {
            diff = closest;
            closest_index = i;
        }
    }

    *departure_time = departure_times[closest_index];
    *arrival_time = arrivals[closest_index];
}
