#include <stdio.h>

int main(void) {
    int numerator, denominator, remainder, gcd, n;

    printf("Enter a fraction: ");
    scanf_s("%d/%d", &numerator, &denominator);

    gcd = denominator;
    n = numerator;

    while (n != 0) {
        remainder = n % gcd;
        gcd = n;
        n = remainder;
    }

    printf("In lowest terms: %d/%d\n", numerator / gcd, denominator / gcd);
}
