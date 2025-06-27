#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define SENTENCE_LEN 100

void read_line(char str[], int n);
bool is_palindrome(const char *message);

int main(void) {
    char sentence[SENTENCE_LEN + 1];

    printf("Enter a message: ");
    read_line(sentence, SENTENCE_LEN + 1);

    if (is_palindrome(sentence))
        printf("Palindrome");
    else
        printf("Not a palindrome");

    return 0;
}

void read_line(char str[], int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = tolower(ch);

    str[i] = '\0';
}

bool is_palindrome(const char *message) {
    const char *start = message, *end = message + strlen(message) - 1;

    while (*start && *end) {
        if (*start != *end)
            return false;
        start++;
        end++;
    }

    return true;
}
