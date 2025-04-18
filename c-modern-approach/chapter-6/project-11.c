#include <stdio.h>

int main(void) {
    int n, j, denom;
    float e_series = 1.0f;

    printf("Enter a integer: ");
    scanf_s("%d", &n);

    for (int i = 1, denom = 1; i <= n; i++) {
        e_series += 1.0f / (denom *= i);
    }

    printf("e result: %.4f", e_series);
}
