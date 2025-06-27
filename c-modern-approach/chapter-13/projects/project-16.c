#include <stdio.h>
#include <string.h>

#define N 100

void read_line(char str[], int n);
void reverse(char *message);
int main(void) {
    char message[N + 1];

    printf("Enter a message: ");
    read_line(message, N + 1);
    reverse(message);
    printf("In reverse: %s\n", message);

    return 0;
}

void read_line(char str[], int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;

    str[i] = '\0';
}

void reverse(char *message) {
    char *bottom = message, *top = message + strlen(message) - 1;
    char temp;

    while (bottom != top) {
        temp = *bottom;
        *bottom = *top;
        *top = temp;
        bottom++;
        top--;
    }
}
