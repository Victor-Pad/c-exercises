#include <stdio.h>

int main(void) {
    int len = 0;

    printf("Enter a message.\n");
    while (getchar() != '\n') {
        len++;
    }

    printf("Your message is %d character(s) long.\n", len);

    return 0;
}
