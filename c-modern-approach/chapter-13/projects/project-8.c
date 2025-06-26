#include <ctype.h>
#include <stdio.h>

#define WORD_MAX 20

void read_line(char s[], int n);
int compute_scrabble_value(const char *word);
int main(void) {
    char word[WORD_MAX + 1];

    printf("Enter a word: ");
    read_line(word, WORD_MAX + 1);

    printf("Word Value: %d", compute_scrabble_value(word));
}

int compute_scrabble_value(const char *word) {
    int sum = 0;

    for (; *word != '\0'; word++) {
        if (*word == 'A' || *word == 'E' || *word == 'I' || *word == 'L' ||
            *word == 'N' || *word == 'O' || *word == 'R' || *word == 'S' ||
            *word == 'T' || *word == 'U') {
            sum += 1;
        } else if (*word == 'D' || *word == 'G') {
            sum += 2;
        } else if (*word == 'B' || *word == 'C' || *word == 'M' ||
                   *word == 'P') {
            sum += 3;
        } else if (*word == 'F' || *word == 'H' || *word == 'V' ||
                   *word == 'W' || *word == 'Y') {
            sum += 4;
        } else if (*word == 'K') {
            sum += 5;
        } else if (*word == 'J' || *word == 'X') {
            sum += 8;
        } else if (*word == 'Q' || *word == 'Z') {
            sum += 10;
        }
    }

    return sum;
}

void read_line(char str[], int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = toupper(ch);

    str[i] = '\0';
}
