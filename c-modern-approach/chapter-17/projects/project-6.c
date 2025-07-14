#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_WORDS 15
#define WORD_LEN 20

int compare_words(const void *p, const void *q);
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

    qsort(words, num_words, sizeof(char *), compare_words);

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

int compare_words(const void *p, const void *q) {
    const char *p1 = *(const char **)p;
    const char *q1 = *(const char **)q;
    return strcmp(p1, q1);
}
