#include <stdio.h>

float tax_income(int income);

int main(void) {
    int income;

    printf("Enter income: ");
    scanf_s("%d", &income);

    float tax = tax_income(income);
    printf("Tax due: %.2f", tax);
}

float tax_income(int income) {
    float tax;

    if (income < 750) {
        tax = income * 0.01f;
    } else if (income <= 2250) {
        tax = 7.50f + (income * 0.02f);
    } else if (income <= 3750) {
        tax = 37.50f + (income * 0.03f);
    } else if (income <= 5250) {
        tax = 82.50f + (income * 0.04f);
    } else if (income <= 7000) {
        tax = 142.50f + (income * 0.05f);
    } else if (income > 7000) {
        tax = 230.00f + (income * 0.06f);
    }

    return tax;
}
