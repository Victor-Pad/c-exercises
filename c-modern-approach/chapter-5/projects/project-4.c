#include <stdio.h>

int main(void) {
    int speed;

    printf("Enter a wind speed (in knots): ");
    scanf_s("%d", &speed);

    if (speed < 1)
        printf("Calm\n");
    else if (speed <= 3 && speed >= 1)
        printf("Light air\n");
    else if (speed <= 27 && speed >= 4)
        printf("Breeze\n");
    else if (speed <= 47 && speed >= 28)
        printf("Gale\n");
    else if (speed <= 63 && speed >= 48)
        printf("Storm\n");
    else
        printf("Hurricane\n");

    return 0;
}
