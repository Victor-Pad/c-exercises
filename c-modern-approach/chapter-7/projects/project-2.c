#include <stdio.h>

int main(void) {
    long int i;
    int n;
    char ch;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");

    scanf_s("%d", &n);
    ch = getchar();

    for (i = 1; i <= n; i++) {
        printf("%ld \t %ld\n", i, i * i);

        if (i % 24 == 0) {
            printf("\nPress Enter to continue... ");
            ch = getchar();
        }
    }

    return 0;
}
