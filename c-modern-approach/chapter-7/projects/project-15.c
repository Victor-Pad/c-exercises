#include <stdio.h>

int main(void) {
    int x, factorial;

    printf("Enter a positive number: ");
    scanf_s("%d", &x);
    factorial = x;

    for (int i = x - 1; i > 1; i--) {
        factorial *= i;
    }

    printf("Factorial of %d: %d", x, factorial);
}
