#include <stdio.h>

#define SENTENCE_LEN 100

void read_line(char str[], int n);
double compute_average_word_length(const char *sentence);
int main(void) {
    char sentence[SENTENCE_LEN + 1];

    printf("Enter a sentence: ");
    read_line(sentence, SENTENCE_LEN + 1);

    printf("Average word length: %.1f", compute_average_word_length(sentence));
}

double compute_average_word_length(const char *sentence) {
    float sum = 0.0f, words = 0.0f;

    while (*sentence != '\0') {
        if (*sentence == ' ')
            words++;
        else
            sum++;
        sentence++;
    }

    return sum / words + 1;
}

void read_line(char str[], int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;

    str[i] = '\0';
}
