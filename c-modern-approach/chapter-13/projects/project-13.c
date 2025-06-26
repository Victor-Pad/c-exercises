#include <ctype.h>
#include <stdio.h>

#define MSG_LEN 80

void read_line(char str[], int n);
void encrypt(char *message, int shift);
int main(void) {
    int index = 0, shift_amount;
    char ch, message[MSG_LEN + 1];

    printf("Enter message to be encrypted: ");
    read_line(message, MSG_LEN + 1);

    printf("Enter shift amount (1-25): ");
    scanf_s("%d", &shift_amount);
    encrypt(message, shift_amount);

    printf("Encrypted message: %s", message);
}

void encrypt(char *message, int shift) {
    char *ptr = message;
    while (*ptr) {
        if (isupper(*ptr))
            *ptr = (((*ptr - 'A' + shift) % 26) + 'A');
        else if (islower(*ptr))
            *ptr = (((*ptr - 'a' + shift) % 26) + 'a');
        ptr++;
    }
}

void read_line(char str[], int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;

    str[i] = '\0';
}
