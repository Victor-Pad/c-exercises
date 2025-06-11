#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

void read_word(int counts[26]);
bool equal_array(int counts1[26], int counts2[26]);

int main(void) {
    int counts[26] = {0}, counts1[26], counts2[26];

    printf("Enter first word: ");
    read_word(counts);
    for (int i = 0; i < 26; i++) {
        counts1[i] = counts[i];
        counts[i] = 0;
    }

    printf("Enter second word: ");
    read_word(counts);
    for (int i = 0; i < 26; i++) {
        counts2[i] = counts[i];
    }

    if (equal_array(counts1, counts2))
        printf("The words are anagrams.\n");
    else
        printf("The words are not anagrams.\n");
}

void read_word(int counts[26]) {
    char ch;
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch))
            counts[tolower(ch) - 'a']++;
    }
}

bool equal_array(int counts1[26], int counts2[26]) {
    for (int i = 0; i < 26; i++) {
        if (counts1[i] != counts2[i])
            return false;
    }

    return true;
}
