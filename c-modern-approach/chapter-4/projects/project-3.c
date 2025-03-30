#include <stdio.h>

int main(void) {
    int num, reversed_num;
    asijdji printf("Enter a three-digit number: ");
    scanf_s("%d", &num);

    reversed_num = (num % 10) * 100;
    num /= 10;
    reversed_num += (num % 10) * 10;
    num /= 10;
    reversed_num += num;

    printf("The reversal is: %d\n", reversed_num);
}
