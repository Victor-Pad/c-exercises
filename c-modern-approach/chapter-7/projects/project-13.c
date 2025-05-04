#include <stdio.h>

int main(void) {
    char ch;
    float sum = 0.0f;
    float words = 0.0f;

    printf("Enter a sentence: ");
    while ((ch = getchar()) != '\n') {
        if (ch == ' ') {
            words++;
            continue;
        }

        sum++;
    }

    sum -= 1;
    printf("Average word length: %.1f", sum / words);
}
