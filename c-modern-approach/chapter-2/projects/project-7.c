#include <stdio.h>

int main(void) {
    int amount;

    printf("Enter a dollar amount: ");
    scanf_s("%d", &amount);

    int bill_amount_20 = amount / 20;
    amount = amount - bill_amount_20 * 20;

    int bill_amount_10 = amount / 10;
    amount = amount - bill_amount_10 * 10;

    int bill_amount_5 = amount / 5;
    amount = amount - bill_amount_5 * 5;

    int bill_amount_1 = amount / 1;
    amount = amount - bill_amount_1 * 1;

    printf("$20 bills: %d\n", bill_amount_20);
    printf("$10 bills: %d\n", bill_amount_10);
    printf("$5 bills: %d\n", bill_amount_5);
    printf("$1 bills: %d\n", bill_amount_1);
}
