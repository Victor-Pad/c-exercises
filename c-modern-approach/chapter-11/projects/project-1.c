#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);
int main(void) {
    int amount, bill_20, bill_10, bill_5, bill_1;

    printf("Enter a dollar amount: ");
    scanf_s("%d", &amount);
    pay_amount(amount, &bill_20, &bill_10, &bill_5, &bill_1);
    printf("$20 bills: %d\n", bill_20);
    printf("$10 bills: %d\n", bill_10);
    printf("$5 bills: %d\n", bill_5);
    printf("$1 bills: %d\n", bill_1);
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones) {
    *twenties = dollars / 20;
    dollars = dollars - *twenties * 20;

    *tens = dollars / 10;
    dollars = dollars - *tens * 10;

    *fives = dollars / 5;
    dollars = dollars - *fives * 5;

    *ones = dollars;
}
