#include <stdio.h>
#include <string.h>

#define WORD_LEN 20

int read_line(char str[], int n);
int main(void) {
    char input[WORD_LEN + 1], smallest[WORD_LEN + 1], largest[WORD_LEN + 1];

    printf("Enter word: ");
    read_line(input, WORD_LEN + 1);
    strcpy(smallest, strcpy(largest, input));
    while (strlen(input) != 4) {
        printf("Enter word: ");
        read_line(input, 20 + 1);

        if (strcmp(input, smallest) < 0)
            strcpy(smallest, input);
        if (strcmp(input, largest) > 0)
            strcpy(largest, input);
    }

    printf("Smallest word: %s\n", smallest);
    printf("Largest word: %s\n", largest);
}

int read_line(char str[], int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;

    str[i] = '\0';
    return i;
}
