#include <ctype.h>
#include <stdio.h>

int main(void) {
    char phone_input, phone_number[15];
    int index = 0;

    printf("Enter phone number: ");

    while ((phone_input = getchar()) != '\n') {
        switch (toupper(phone_input)) {
            case '-':
                phone_number[index] = '-';
                break;
            case 'A':
            case 'B':
            case 'C':
                phone_number[index] = '2';
                break;
            case 'D':
            case 'E':
            case 'F':
                phone_number[index] = '3';
                break;
            case 'G':
            case 'H':
            case 'I':
                phone_number[index] = '4';
                break;
            case 'J':
            case 'K':
            case 'L':
                phone_number[index] = '5';
                break;
            case 'M':
            case 'N':
            case 'O':
                phone_number[index] = '6';
                break;
            case 'P':
            case 'Q':
            case 'R':
            case 'S':
                phone_number[index] = '7';
                break;
            case 'T':
            case 'U':
            case 'V':
                phone_number[index] = '8';
                break;
            case 'W':
            case 'X':
            case 'Y':
            case 'Z':
                phone_number[index] = '9';
                break;
            default:
                phone_number[index] = phone_input;
                break;
        }
        index++;
    }

    printf("In numeric form: ");
    for (int i = 0; i < 15; i++) {
        printf("%c", phone_number[i]);
    }
    printf("\n");
}
