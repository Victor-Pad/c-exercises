#include <stdio.h>

int main(void) {
    char terminating_char, sentence[101];
    int index = 1, word_length = 0;

    sentence[0] = ' ';
    printf("Enter a sentence: ");

    while ((terminating_char = getchar()) != '\n') {
        if (terminating_char == '!' || terminating_char == '?' ||
            terminating_char == '.') {
            break;
        }
        sentence[index++] = terminating_char;
    }

    for (int i = index - 1; i >= 0; i--) {
        if (sentence[i] == ' ') {
            int temp_index = i + 1;
            for (int j = 0; j < word_length; j++) {
                putchar(sentence[temp_index + j]);
            }
            word_length = 0;
            putchar(' ');
        } else
            word_length++;
    }
    putchar(terminating_char);
}
