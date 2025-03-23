#include <stdio.h>
#define RADIUS 10
#define FOUR_THREE_FRACTION (4.0f / 3.0f)
#define PI 3.14
int hello(void) {}
int main(void) {
    float volume = FOUR_THREE_FRACTION * PI * (RADIUS * RADIUS * RADIUS);
    printf("Volume of sphere: %f", volume);
}
