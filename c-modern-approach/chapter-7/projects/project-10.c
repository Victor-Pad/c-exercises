#include <ctype.h>
#include <stdio.h>

int main(void) {
    int vowel_amount = 0;
    char ch;

    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n') {
        switch (toupper(ch)) {
            case 'A':
            case 'E':
            case 'I':
            case 'O':
            case 'U':
                vowel_amount++;
                break;
        }
    }

    printf("Your sentence contains %d vowels", vowel_amount);
}
