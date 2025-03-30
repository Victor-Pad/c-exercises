#include <stdio.h>

int main(void) {
    int first_digit, f1, f2, f3, f4, f5, t1, t2, t3, t4, t5, first_sum,
        second_sum, result;

    printf("Enter the first (single) digit: ");
    scanf_s("%1d", &first_digit);

    printf("Enter first group of five digits: ");
    scanf_s("%1d%1d%1d%1d%1d", &f1, &f2, &f3, &f4, &f5);

    printf("Enter second group of five digits: ");
    scanf_s("%1d%1d%1d%1d%1d", &t1, &t2, &t3, &t4, &t5);

    first_sum = (f1 + f2 + f3 + f4 + f5) * 3;
    second_sum = t1 + t2 + t3 + t4 + t5;

    first_sum += second_sum;
    result = (first_sum - 1) / 10;
    printf("Check digit: %d\n", result);
}
