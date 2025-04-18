#include <stdio.h>

int main(void) {
    int remainder, n, m;

    printf("Enter two integers: ");
    scanf_s("%d %d", &n, &m);

    while (n != 0) {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("Greatest common divisor: %d", m);
}
