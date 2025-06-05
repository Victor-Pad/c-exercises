#include <ctype.h>
#include <stdio.h>
#define SENTENCE_LEN ((int)(sizeof(sentence) / sizeof(sentence[0])))

int main(void) {
    char c, sentence[100] = {0};
    int index = 0;

    printf("Enter message: ");
    while ((c = getchar()) != '\n' && index < SENTENCE_LEN)
        sentence[index++] = c;

    printf("In B1FF-speak: ");

    for (int i = 0; i < SENTENCE_LEN; i++) {
        switch (c = toupper(sentence[i])) {
            case 'A':
                sentence[i] = '4';
                break;
            case 'B':
                sentence[i] = '8';
                break;
            case 'E':
                sentence[i] = '3';
                break;
            case 'I':
                sentence[i] = '1';
                break;
            case 'O':
                sentence[i] = '0';
                break;
            case 'S':
                sentence[i] = '5';
                break;
        }
        printf("%c", toupper(sentence[i]));
    }

    printf("!!!!!!!!!!\n");
}
