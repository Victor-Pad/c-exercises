#include <stdbool.h>
#include <stdio.h>
#define SIZE ((int)(sizeof(repdigits) / sizeof(repdigits[0])))

int main(void) {
    bool digit_seen[10] = {false};
    bool repeated_flag = false;
    int repdigits[10] = {0};

    int digit, index = 0;
    long n;

    printf("Enter a number: ");
    scanf_s("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        if (digit_seen[digit]) {
            repdigits[index] = digit;
            repeated_flag = true;
        }
        digit_seen[digit] = true;
        index++;
        n /= 10;
    }

    if (repeated_flag) {
        printf("Repeated digit(s): ");
        for (int i = 0; i < SIZE; i++) {
            if (repdigits[i] != 0)
                printf("%d ", repdigits[i]);
        }
        printf("\n");
    } else
        printf("No repeated digit\n");

    return 0;
}
