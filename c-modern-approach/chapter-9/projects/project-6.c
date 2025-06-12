#include <stdio.h>

int compute_formula(int x);
int main(void) {
    int x;

    printf("Please enter a number for x: ");
    scanf_s("%d", &x);

    int result = compute_formula(x);
    printf("Result: %d", result);
}

int compute_formula(int x) {
    return 3 * (x * x * x * x * x) + 2 * (x * x * x * x) - 5 * (x * x * x) -
           (x * x) + 7 * x - 6;
}
