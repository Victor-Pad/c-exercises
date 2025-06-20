#include <stdio.h>

#define MSG_LENGTH 100

int main(void) {
    char msg[MSG_LENGTH], *p;

    printf("Enter a message: ");
    for (p = msg; p < msg + MSG_LENGTH; p++) {
        *p = getchar();
        if (*p == '\n')
            break;
    }

    printf("Reversal is: ");
    for (p--; p >= msg; p--)
        putchar(*p);
    putchar('\n');

    return 0;
}
