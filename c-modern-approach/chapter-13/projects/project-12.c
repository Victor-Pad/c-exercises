#include <stdio.h>

int read_line(char str[30][20 + 1]);
int main(void) {
    char terminating_char, sentence[30][20 + 1];

    printf("Enter a sentence: ");
    int word_amount = read_line(sentence);

    for (int i = word_amount; i >= 0; i--) {
        for (int j = 0; j < 20 && sentence[i][j] != '\0'; j++) {
            printf("%c", sentence[i][j]);
        }
        printf(" ");
    }
}

int read_line(char str[30][20 + 1]) {
    int ch, i, j;

    for (i = 0; i < 30; i++) {
        while ((ch = getchar()) == ' ')
            ;

        for (j = 0; j < 20 && ch != ' ' && ch != '\n'; j++) {
            str[i][j] = ch;
            ch = getchar();
        }

        str[i][j] = '\0';

        if (ch == '\n')
            break;
    }

    return i;
}
