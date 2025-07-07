#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int hours, minutes, time_to_minutes, dep_hour, dep_minutes, arr_hour,
        arr_minutes;

    printf("Enter a 24-hour time: ");
    scanf_s("%2d:%2d", &hours, &minutes);

    time_to_minutes = hours * 60 + minutes;

    struct times {
        int departure;
        int arrival;
    } flight_times[8] = {{480, 616}, {583, 712},  {679, 811},   {767, 900},
                         {840, 968}, {945, 1075}, {1140, 1280}, {1305, 1438}};

    int closest_index = 0;
    int smallest_diff = abs(time_to_minutes - flight_times[0].departure);

    for (int i = 0; i < 8; i++) {
        int diff = abs(time_to_minutes - flight_times[i].departure);
        if (diff < smallest_diff) {
            smallest_diff = diff;
            closest_index = i;
        }
    }

    // if arrival && departure >= 780
    //    hours = (departure / 60) - 12;
    //    hours_a = (arrival / 60) - 12;
    //    minutes = (departure % 60);
    //    minutes_a = (departure % 60);

    dep_hour = flight_times[closest_index].departure / 60;
    dep_minutes = flight_times[closest_index].departure % 60;

    arr_hour = flight_times[closest_index].arrival / 60;
    arr_minutes = flight_times[closest_index].arrival % 60;

    char *dep_suffix = (dep_hour >= 12) ? "p.m." : "a.m.";
    char *arr_suffix = (arr_hour >= 12) ? "p.m." : "a.m.";

    if (dep_hour == 0)
        dep_hour = 12;
    else if (dep_hour > 12)
        dep_hour -= 12;

    if (arr_hour == 0)
        arr_hour = 12;
    else if (arr_hour > 12)
        arr_hour -= 12;

    printf("Closest departure time is %d:%02d %s, ", dep_hour, dep_minutes,
           dep_suffix);
    printf("arriving at %d:%02d %s.\n", arr_hour, arr_minutes, arr_suffix);

    return 0;
}
