#include <ctype.h>
#include <stdio.h>

int main(void) {
    char ch, sentence[100], *ptr_start = sentence, *ptr_end = sentence;

    printf("Enter a message: ");
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch))
            *ptr_end++ = tolower(ch);
    }

    ptr_end -= 1;

    while (ptr_end > sentence) {
        if (*ptr_start != *ptr_end) {
            printf("Not a palindrome\n");
            return 0;
        }
        ptr_start++;
        ptr_end--;
    }

    printf("Palindrome");
    return 0;
}
