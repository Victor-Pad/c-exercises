#include <stdio.h>

int main(void) {
    float amount_of_loan, interest_rate, monthly_pay;

    printf("Enter amount of loan: ");
    scanf_s("%f", &amount_of_loan);
    printf("Enter interest rate: ");
    scanf_s("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf_s("%f", &monthly_pay);

    float balance, interest_amount;

    balance = amount_of_loan;
    interest_amount = ((interest_rate * (balance / 100)) / 12);
    balance = (balance - monthly_pay) + interest_amount;
    printf("Balance remaining after first payment: $%.2f\n", balance);

    interest_amount = ((interest_rate * (balance / 100)) / 12);
    balance = (balance - monthly_pay) + interest_amount;
    printf("Balance remaining after second payment: $%.2f\n", balance);

    interest_amount = ((interest_rate * (balance / 100)) / 12);
    balance = (balance - monthly_pay) + interest_amount;
    printf("Balance remaining after third payment: $%.2f\n", balance);
}
