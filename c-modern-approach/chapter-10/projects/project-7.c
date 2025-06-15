#include <ctype.h>
#include <stdio.h>

#define MAX_DIGITS 10

char digits[4][MAX_DIGITS * 4];

const int segments[10][7] = {{1, 1, 1, 1, 1, 1},    {0, 1, 1},
                             {1, 1, 0, 1, 1, 0, 1}, {1, 1, 1, 1, 0, 0, 1},
                             {0, 1, 1, 0, 0, 1, 1}, {1, 0, 1, 1, 0, 1, 1},
                             {1, 0, 1, 1, 1, 1, 1}, {1, 1, 1},
                             {1, 1, 1, 1, 1, 1, 1}, {1, 1, 1, 1, 0, 1, 1}};

void clear_digits(void);
void process_digits(int digit, int position);
void print_digits_array(void);

int main(void) {
    char ch;
    clear_digits();

    printf("Enter a number: ");
    for (int i = 0; i < MAX_DIGITS; i++) {
        ch = getchar();
        if (ch == '\n')
            break;

        if (isdigit(ch))
            process_digits((int)ch - '0', i);
    }

    print_digits_array();
}

void clear_digits(void) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < MAX_DIGITS * 4; j++) {
            digits[i][j] = ' ';
        }
    }
}

void process_digits(int digit, int position) {
    if (position >= 1)
        position *= 4;

    if (segments[digit][0] == 1)
        digits[0][position + 1] = '_';
    if (segments[digit][1] == 1)
        digits[1][position + 2] = '|';
    if (segments[digit][2] == 1)
        digits[2][position + 2] = '|';
    if (segments[digit][3] == 1)
        digits[2][position + 1] = '_';
    if (segments[digit][4] == 1)
        digits[2][position] = '|';
    if (segments[digit][5] == 1)
        digits[1][position] = '|';
    if (segments[digit][6] == 1)
        digits[1][position + 1] = '_';
}

void print_digits_array(void) {
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < MAX_DIGITS * 4; j++)
            printf("%c", digits[i][j]);
        printf("\n");
    }
}
