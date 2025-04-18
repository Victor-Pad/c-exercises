#include <stdio.h>

int main(void) {
    int num, reversed_num, last_digit;

    printf("Enter a integer: ");
    scanf_s("%d", &num);

    do {
        last_digit = (num % 10);
        num /= 10;
        reversed_num = reversed_num * 10 + last_digit;
    } while (num != 0);

    printf("The reversal is: %d\n", reversed_num);
}
