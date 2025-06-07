#include <ctype.h>
#include <stdio.h>

int main(void) {
    char ch;
    int sum = 0,
        scrabble_values[26] = {1, 3, 3, 2,  1, 4, 2, 4, 1, 8, 5, 1, 3,
                               1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

    printf("Enter a word: ");
    while ((ch = getchar()) != '\n') {
        char uch = toupper(ch);

        sum += scrabble_values[uch - 'A'];
    }

    printf("Scrabble value: %d", sum);
}
