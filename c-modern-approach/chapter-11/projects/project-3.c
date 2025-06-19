#include <stdio.h>

void reduce(int numerator,
            int denominator,
            int *reduced_numerator,
            int *reduced_denominator);
int main(void) {
    int numerator, denominator, reduced_num, reduced_den;

    printf("Enter a fraction: ");
    scanf_s("%d/%d", &numerator, &denominator);

    reduce(numerator, denominator, &reduced_num, &reduced_den);
    printf("In lowest terms: %d/%d\n", reduced_num, reduced_den);
}

void reduce(int numerator,
            int denominator,
            int *reduced_numerator,
            int *reduced_denominator) {
    int a = numerator;
    int b = denominator;
    int temp;

    if (a < 0)
        a = -a;
    if (b < 0)
        b = -b;

    while (b != 0) {
        temp = b;
        b = a % b;
        a = temp;
    }

    int gcd = a;

    *reduced_numerator = numerator / gcd;
    *reduced_denominator = denominator / gcd;
}
