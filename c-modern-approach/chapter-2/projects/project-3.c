#include <stdio.h>
#define FOUR_THREE_FRACTION (4.0f / 3.0f)
#define PI 3.14

int main(void) {
    float radius;

    printf("Enter the radius value: ");
    scanf_s("%f", &radius);

    float volume = FOUR_THREE_FRACTION * PI * (radius * radius * radius);

    printf("Volume of sphere: %f", volume);
}
