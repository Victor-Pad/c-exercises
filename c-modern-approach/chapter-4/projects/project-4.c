#include <stdio.h>

int main(void) {
    int num, d1, d2, d3, d4, d5;

    printf("Enter a number between 0 and 32767: ");
    scanf_s("%d", &num);

    d5 = num % 8;
    num /= 8;
    d4 = num % 8;
    num /= 8;
    d3 = num % 8;
    num /= 8;
    d2 = num % 8;
    num /= 8;
    d1 = num % 8;

    printf("In octal, your number is: %1d%1d%1d%1d%1d", d1, d2, d3, d4, d5);
}
