#include <stdio.h>

int main(void) {
    char ch, first_letter, prev_ch;
    int index = 0;

    printf("Enter a first name and last name: ");
    while ((ch = getchar()) != '\n') {
        index++;

        if (index == 1) {
            first_letter = ch;
        }

        if (prev_ch == ' ') {
            if (ch != ' ') {
                printf("%c", ch);
            }
        }

        if (ch == ' ') {
            prev_ch = ch;
        }
    }

    printf(", %c.", first_letter);
}
