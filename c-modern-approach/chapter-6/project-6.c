#include <stdio.h>

int main(void) {
    int n;

    printf("Enter a number: ");
    scanf_s("%d", &n);

    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0 && i * i <= n) {
            printf("%d\n", i * i);
        }
    }
}
