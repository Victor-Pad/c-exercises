#include <stdbool.h>
#include <stdio.h>

void create_magic_square(int n, int magic_square[n][n]);
void print_magic_square(int n, int magic_square[n][n]);

int main(void) {
    int size;

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf_s("%d", &size);

    int magic_square[size][size];

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            magic_square[i][j] = 0;
        }
    }

    create_magic_square(size, magic_square);
    print_magic_square(size, magic_square);
}

void create_magic_square(int n, int magic_square[n][n]) {
    int row = 0;
    magic_square[0][n / 2] = 1;
    int col = (n / 2);

    for (int num = 1; num <= n * n; num++) {
        magic_square[row][col] = num;

        int next_row = (row - 1 + n) % n;
        int next_col = (col + 1) % n;

        if (magic_square[next_row][next_col] != 0) {
            row = (row + 1) % n;
        } else {
            row = next_row;
            col = next_col;
        }
    }
}

void print_magic_square(int n, int magic_square[n][n]) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%3d", magic_square[i][j]);
        }
        printf("\n");
    }
}
