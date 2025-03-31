#include <stdio.h>

int main(void) {
    int number;

    printf("Enter a number: ");
    scanf_s("%d", &number);

    if (number >= 0 && number <= 9) {
        printf("The number %d has 1 digit\n", number);
    } else if (number >= 10 && number <= 99) {
        printf("The number %d has 2 digits\n", number);
    } else if (number >= 100 && number <= 999) {
        printf("The number %d has 3 digits\n", number);
    }
}
