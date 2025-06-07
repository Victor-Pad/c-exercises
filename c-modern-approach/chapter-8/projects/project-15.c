#include <ctype.h>
#include <stdio.h>

int main(void) {
    int index = 0, shift_amount = 0;
    char ch, message[80];

    printf("Enter message to be encrypted: ");
    while ((ch = getchar()) != '\n') {
        message[index] = ch;
        index++;
    }

    printf("Enter shift amount (1-25): ");
    scanf_s("%d", &shift_amount);

    printf("Encrypted message: ");
    for (int i = 0; i < index; i++) {
        if (isupper(message[i]))
            putchar(((message[i] - 'A' + shift_amount) % 26) + 'A');
        else if (islower(message[i]))
            putchar(((message[i] - 'a' + shift_amount) % 26) + 'a');
        else
            putchar(message[i]);
    }
}
