#include <stdbool.h>
#include <stdio.h>

int main(void) {
    bool digit_seen[10] = {false};
    bool repeated_flag = false;
    int digit_ocurrences[10][10] = {{0, 1, 2, 3, 4, 5, 6, 7, 8, 9}, {0}};

    int digit, index = 0;
    long n;

    printf("Enter a number: ");
    scanf_s("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        digit_seen[digit] = true;
        if (digit_seen[digit]) {
            digit_ocurrences[1][digit] += 1;
            repeated_flag = true;
        }

        index++;
        n /= 10;
    }

    if (repeated_flag) {
        printf("Digit:\t\t");
        for (int i = 0; i < 10; i++) {
            printf("%d ", digit_ocurrences[0][i]);
        }
        printf("\nOcurrences:\t");
        for (int j = 0; j < 10; j++) {
            printf("%d ", digit_ocurrences[1][j]);
        }
        printf("\n");
    } else
        printf("No repeated digit\n");

    return 0;
}
