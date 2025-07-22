#include <stdio.h>

int main(void) {
    // unsigned int sign: 1;
    // unsigned int exponent: 128;
    // unsigned int fraction: 0;
    //
    union {
        float value;
        struct {
            unsigned int fraction : 23;
            unsigned int exponent : 8;
            unsigned int sign : 1;
        } IEEE_float;
    } u;

    u.IEEE_float.sign = 1;
    u.IEEE_float.exponent = 128;
    u.IEEE_float.fraction = 0;

    printf("Float value: %.1f", u.value);
}
