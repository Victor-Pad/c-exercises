#include <stdio.h>

#define N 100
int main(void) {
    char *p;
    char ch, message[N];

    p = message;

    printf("Enter a message: ");
    while ((ch = getchar()) != '\n' && p < message + N) {
        *p++ = ch;
    }

    printf("Reversal is: ");
    while (p > message) {
        p--;
        printf("%c", *p);
    }

    return 0;
}
