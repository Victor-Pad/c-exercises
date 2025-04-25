#include <stdio.h>

int main(void) {
    long n, sum = 0;

    printf("This program sums a series of integers\n");

    printf("Enter integers (0 to terminate): ");

    scanf_s("%ld", &n);
    while (n != 0) {
        sum += n;
        scanf_s("%ld", &n);
    }
    printf("The sum is: %ld", sum);
}
