#include <stdio.h>

int main(void) {
    char ch, first_letter, last_name[20];
    int last_name_active, index, cur;

    printf("Enter a first name and last name: ");
    while ((ch = getchar()) != '\n') {
        index++;

        if (index == 1) {
            first_letter = ch;
            continue;
        }

        if (ch != ' ' && last_name_active == 1) {
            last_name[cur] = ch;
            putchar(last_name[cur]);
        }

        if (ch == ' ') {
            last_name_active = 1;
        }

        cur++;
    }

    printf(", %c.", first_letter);
}
