#include <stdio.h>

int main(void) {
    int num1, num2, num3, reversed_num;

    printf("Enter a three-digit number: ");
    scanf_s("%1d%1d%1d", &num1, &num2, &num3);

    reversed_num = (num3 * 100) + (num2 * 10) + num1;

    printf("The reversal is: %d\n", reversed_num);
}
