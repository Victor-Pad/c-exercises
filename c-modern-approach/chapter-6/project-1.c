#include <stdio.h>

int main(void) {
    float num, largest;

    printf("Enter a number: ");
    scanf_s("%f", &num);
    largest = num;
    do {
        printf("Enter a number: ");
        scanf_s("%f", &num);

        if (largest < num) {
            largest = num;
        }
    } while (num > 0);

    printf("The largest number entered was %.2f", largest);
}
