#include <ctype.h>
#include <stdio.h>

#define SENTENCE_LEN 80

void read_line(char str[], int n);
int compute_vowel_count(const char *sentence);
int main(void) {
    char sentence[SENTENCE_LEN + 1];
    printf("Enter a sentence: ");
    read_line(sentence, SENTENCE_LEN + 1);

    printf("Your sentence contains %d vowels", compute_vowel_count(sentence));
}

int compute_vowel_count(const char *sentence) {
    int vowel_amount = 0;
    for (; *sentence != '\0'; sentence++) {
        switch (toupper(*sentence)) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                vowel_amount++;
                break;
        }
    }

    return vowel_amount;
}

void read_line(char str[], int n) {
    char ch;
    int i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;

    str[i] = '\0';
}
