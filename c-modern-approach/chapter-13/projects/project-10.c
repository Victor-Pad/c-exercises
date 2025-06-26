#include <stdio.h>

#define NAME_LEN 50

void read_line(char str[], int n);
void reverse_name(char *name);

int main(void) {
    char name[NAME_LEN + 1];

    printf("Enter a first name and last name: ");
    read_line(name, NAME_LEN + 1);

    reverse_name(name);
    printf("%s\n", name);
}

void reverse_name(char *name) {
    char *ptr = name;
    char first_letter;

    while (*ptr == ' ')
        ptr++;

    first_letter = *ptr;

    while (*ptr != ' ')
        ptr++;

    while (*ptr == ' ')
        ptr++;

    char *dest = name;
    while (*ptr != ' ' && *ptr != '\0' && *ptr != '\n') {
        *dest++ = *ptr++;
    }

    *dest++ = ',';
    *dest++ = ' ';
    *dest++ = first_letter;
    *dest++ = '.';
    *dest = '\0';
}

void read_line(char str[], int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;

    str[i] = '\0';
}
