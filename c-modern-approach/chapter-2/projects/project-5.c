#include <stdio.h>

int main(void) {
    int x;

    printf("Enter a value for x: ");
    scanf_s("%d", &x);

    int polynomial = 3 * (x * x * x * x * x) + 2 * (x * x * x * x) -
                     5 * (x * x * x) - (x * x) + 7 * x - 6;

    printf("Solved for x: %d", polynomial);
    return 0;
}
