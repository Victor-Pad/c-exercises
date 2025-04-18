#include <stdio.h>

int main(void) {
    int x, i = 0;

    printf("This program prints a table of squares\n");
    printf("Enter number of entries in table: ");
    scanf_s("%d", &x);

    while (i < x) {
        i += 1;

        printf("%10d%10d\n", i, i * i);
    }
}
