#include <stdbool.h>
#include <stdio.h>

int main(void) {
    int size = 0, row = 0;

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

    magic_square[0][size / 2] = 1;
    int col = (size / 2);

    for (int num = 1; num <= size * size; num++) {
        magic_square[row][col] = num;

        int next_row = (row - 1 + size) % size;
        int next_col = (col + 1) % size;

        if (magic_square[next_row][next_col] != 0) {
            row = (row + 1) % size;
        } else {
            row = next_row;
            col = next_col;
        }
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            printf("%3d", magic_square[i][j]);
        }
        printf("\n");
    }
}
