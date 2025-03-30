#include <stdio.h>

int main(void) {
    int num, reversed_num;
    printf("Enter a two digit number: ");
    scanf_s("%d", &num);

    reversed_num = (num % 10) * 10;
    num /= 10;
    reversed_num += num % 10;
    printf("The reversal is: %d\n", reversed_num);
}
