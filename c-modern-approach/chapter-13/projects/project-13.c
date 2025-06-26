#include <ctype.h>
#include <stdio.h>

int main(void) {
    char ch;
    int anagram = 0, word[26] = {0};

    printf("Enter first word: ");
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch))
            word[tolower(ch) - 'a']++;
    }

    printf("Enter second word: ");
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch))
            word[tolower(ch) - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (word[i] != 0) {
            anagram = 1;
            break;
        }
    }

    if (anagram == 1)
        printf("The words are not anagrams.");
    else {
        printf("The words are anagrams.");
    }
}
