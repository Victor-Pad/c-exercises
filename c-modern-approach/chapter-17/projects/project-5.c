#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORDS 15
#define WORD_LEN 20

int read_line(char str[], int n);

int main(void) {
    char *words[MAX_WORDS];
    char word[WORD_LEN + 1];
    int i, j, num_words = 0;

    for (;;) {
        if (num_words >= MAX_WORDS) {
            printf("No space left");
            break;
        }

        printf("Enter a word: ");
        if (read_line(word, WORD_LEN + 1) <= 0)
            break;

        words[num_words] = malloc(strlen(word) + 1);
        if (words[i] == NULL) {
            printf("No space left");
            break;
        }

        strcpy(words[num_words], word);
        num_words++;
    }

    for (i = 0; i < num_words; i++) {
        int min_index = i;

        for (j = i + 1; j < num_words; j++) {
            if (strcmp(words[j], words[min_index]) < 0) {
                min_index = j;
            }
        }

        if (min_index != i) {
            char *temp = words[i];
            words[i] = words[min_index];
            words[min_index] = temp;
        }
    }

    printf("In sorted order: ");
    for (i = 0; i < num_words; i++)
        printf("%s ", words[i]);

    return 0;
}

int read_line(char str[], int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;

    str[i] = '\0';
    return i;
}
