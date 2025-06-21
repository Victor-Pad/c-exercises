#include <stdio.h>

#define SEN_LENGTH 101
int main(void) {
    char terminating_char, sentence[SEN_LENGTH], *letters_ptr = sentence;
    int word_length = 0, restart_position;

    printf("Enter a sentence: ");
    while ((terminating_char = getchar()) != '\n') {
        if (terminating_char == '!' || terminating_char == '?' ||
            terminating_char == '.') {
            break;
        }
        *letters_ptr++ = terminating_char;
    }

    for (letters_ptr--; letters_ptr >= sentence; letters_ptr--) {
        if (*letters_ptr == ' ') {
            for (int i = 1; i <= word_length; i++)
                putchar(*(letters_ptr + i));
            word_length = 0;
            putchar(' ');
        } else
            word_length++;
    }

    for (letters_ptr = sentence; letters_ptr < sentence + word_length;
         letters_ptr++)
        putchar(*letters_ptr);

    putchar(terminating_char);
}
