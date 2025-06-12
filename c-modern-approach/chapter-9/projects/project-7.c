#include <stdio.h>

int power(int x, int n);
int main(void) {
    int x, n;

    printf("Enter a number: ");
    scanf_s("%d", &x);

    printf("Enter the power number: ");
    scanf_s("%d", &n);

    printf("Result: %d", power(x, n));
}

int power(int x, int n) {
    if (n == 0)
        return 1;

    if (n % 2 == 0) {
        int half = power(x, n / 2);
        return half * half;
    } else {
        return x * power(x, n - 1);
    }
}
