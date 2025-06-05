#include <stdbool.h>
#include <stdio.h>

int main(void) {
    int digit;
    long n = 0;

    while (1) {
        bool digit_seen[10] = {false};
        printf("Enter a number: ");
        scanf_s("%ld", &n);

        if (n <= 0)
            return 0;

        long temp = n;

        while (temp > 0) {
            digit = temp % 10;
            if (digit_seen[digit])
                break;
            digit_seen[digit] = true;
            temp /= 10;
        }

        printf("Value of n: %ld\n", n);

        if (temp > 0)
            printf("Repeated digit\n");
        else
            printf("No repeated digit\n");
    }

    return 0;
}
