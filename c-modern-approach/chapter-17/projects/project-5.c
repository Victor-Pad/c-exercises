#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORDS 15
#define WORD_LEN 20
int read_line(char str[], int n);

int main(void) {
    char *words[MAX_WORDS];
    char word[WORD_LEN + 1];
    int i, num_words = 0;

    for (;;) {
        if (num_words >= MAX_WORDS) {
            printf("No space left");
            break;
        }

        printf("Enter a word: ");
        if (read_line(word, WORD_LEN + 1) <= 0)
            break;

        words[i] = malloc(strlen(word) + 1);
        if (words[i] == NULL) {
            printf("No space left");
            break;
        }

        strcpy(words[i], word);
        num_words++;
    }

    printf("In sorted order: ");
}

int read_line(char str[], int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;

    str[i] = '\0';
    return i;
}
