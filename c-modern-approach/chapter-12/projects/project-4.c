#include <ctype.h>
#include <stdio.h>

#define SEN_LENGTH 100

int main(void) {
    char ch, sentence[SEN_LENGTH], *ptr_end, *ptr_start;

    printf("Enter a message: ");
    for (ptr_end = sentence; ptr_end < sentence + SEN_LENGTH;) {
        ch = getchar();

        if (ch == '\n')
            break;
        if (isalpha(ch))
            *ptr_end++ = tolower(ch);
    }

    ptr_end--;

    for (ptr_start = sentence; ptr_end > sentence; ptr_end--, ptr_start++) {
        if (*ptr_start != *ptr_end) {
            printf("Not a palindrome\n");
            return 0;
        }
    }

    printf("Palindrome\n");
    return 0;
}
