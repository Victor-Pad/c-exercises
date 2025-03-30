#include <stdio.h>

int main(void) {
    int first_digit, first_group, second_group, first_sum, second_sum, result;

    printf("Enter the first 11 digits of a UPC: ");
    scanf_s("%1d%5d%5d", &first_digit, &first_group, &second_group);

    first_sum = first_group % 10;
    first_group /= 10;

    first_sum += first_group % 10;
    first_group /= 10;

    first_sum += first_group % 10;
    first_group /= 10;

    first_sum += first_group % 10;
    first_group /= 10;

    first_sum += first_group % 10;

    first_sum *= 3;

    second_sum = second_group % 10;
    second_group /= 10;

    second_sum += second_group % 10;
    second_group /= 10;

    second_sum += second_group % 10;
    second_group /= 10;

    second_sum += second_group % 10;
    second_group /= 10;

    second_sum += second_group % 10;

    first_sum += second_sum;

    result = (first_sum - 1) / 10;
    result = 9 - result;
    printf("Check digit: %d\n", result);
}
