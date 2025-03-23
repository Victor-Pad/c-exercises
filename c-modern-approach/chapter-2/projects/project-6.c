#include <stdio.h>

int main(void) {
    int x;

    printf("Enter a value for x: ");
    scanf_s("%d", &x);

    int polynomial = ((((3 * x + 2) * x - 5) * x - 1) * x + 7) * x - 6;

    printf("Solved by x: %d", polynomial);
}
