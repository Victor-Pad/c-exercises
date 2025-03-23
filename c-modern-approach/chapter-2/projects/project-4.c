#include <stdio.h>

int main(void) {
    float amount;

    printf("Enter an amount: ");
    scanf_s("%f", &amount);

    printf("With tax added: %.2f", (amount * 0.05f) + amount);
}
