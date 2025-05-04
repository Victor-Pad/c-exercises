#include <stdio.h>

int main(void) {
    long int i;
    int n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");

    scanf_s("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%ld \t %ld\n", i, i * i);
    }

    return 0;
}
