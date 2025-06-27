#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define WORD_LEN 20

void read_line(char str[], int n);
bool are_anagrams(const char *word1, const char *word2);

int main(void) {
    char word1[WORD_LEN + 1], word2[WORD_LEN + 1];

    printf("Enter first word: ");
    read_line(word1, WORD_LEN + 1);
    printf("Enter second word: ");
    read_line(word2, WORD_LEN + 1);

    if (are_anagrams(word1, word2))
        printf("The words are anagrams.");
    else
        printf("The words are not anagrams.");
}

bool are_anagrams(const char *word1, const char *word2) {
    if (strlen(word1) != strlen(word2))
        return false;

    int i, counts[26] = {0};

    for (i = 0; word1[i] != '\0' && word2[i] != '\0'; i++) {
        counts[tolower(*(word1 + i)) - 'a']++;
        counts[tolower(*(word2 + i)) - 'a']--;
    }

    for (i = 0; i < 26; i++)
        if (counts[i] != 0)
            return false;

    return true;
}

void read_line(char str[], int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n && isalpha(ch))
            str[i++] = ch;

    str[i] = '\0';
}
