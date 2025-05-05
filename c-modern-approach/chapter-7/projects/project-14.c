#include <math.h>
#include <stdio.h>

int main(void) {
    int x;
    double diff, y = 1.0f, average;

    printf("Enter a positive number: ");
    scanf_s("%d", &x);

    do {
        average = (y + (x / y)) / 2;
        diff = fabs(average - y);
        y = average;
    } while (diff > y * .00001);

    printf("Square root: %lf", average);
}
