#include <ctype.h>
#include <stdio.h>

int main(void) {
    char ch;
    int sum = 0;

    printf("Enter a word: ");
    while ((ch = getchar()) != '\n') {
        char uch = toupper(ch);

        if (uch == 'A' || uch == 'E' || uch == 'I' || uch == 'L' ||
            uch == 'N' || uch == 'O' || uch == 'R' || uch == 'S' ||
            uch == 'T' || uch == 'U') {
            sum += 1;
        } else if (uch == 'D' || uch == 'G') {
            sum += 2;
        } else if (uch == 'B' || uch == 'C' || uch == 'M' || uch == 'P') {
            sum += 3;
        } else if (uch == 'F' || uch == 'H' || uch == 'V' || uch == 'W' ||
                   uch == 'Y') {
            sum += 4;
        } else if (uch == 'K') {
            sum += 5;
        } else if (uch == 'J' || uch == 'X') {
            sum += 8;
        } else if (uch == 'Q' || uch == 'Z') {
            sum += 10;
        }
    }

    printf("Scrabble value: %d", sum);
}
