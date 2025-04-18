#include <stdio.h>

int main(void) {
    float amount_of_loan, interest_rate, monthly_pay;
    int num_of_payments;

    printf("Enter amount of loan: ");
    scanf_s("%f", &amount_of_loan);
    printf("Enter interest rate: ");
    scanf_s("%f", &interest_rate);
    printf("Enter monthly payment: ");
    scanf_s("%f", &monthly_pay);

    printf("Enter number of payments: ");
    scanf_s("%d", &num_of_payments);

    float balance, interest_amount;

    balance = amount_of_loan;

    for (int i = 1; i <= num_of_payments; i++) {
        interest_amount = ((interest_rate * (balance / 100)) / 12);
        balance = (balance - monthly_pay) + interest_amount;
        printf("Balance remaining after the payment: $%.2f\n", balance);
    }
}
