#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char grid[10][10];
    char alphabet[25] = {'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
                         'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S',
                         'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int not_valid, move, row = 0, col = 0, index = 0;
    srand(5);

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            grid[i][j] = '.';
        }
    }

    grid[0][0] = 'A';

    while (index < 25) {
        move = rand();
        not_valid = 0;

        switch (move % 4) {
            case 0:
                if (row - 1 >= 0 && grid[row - 1][col] == '.') {
                    row -= 1;
                    grid[row][col] = alphabet[index];
                    not_valid = 1;
                }
                break;
            case 1:
                if (row + 1 < 10 && grid[row + 1][col] == '.') {
                    row += 1;
                    grid[row][col] = alphabet[index];
                    not_valid = 1;
                }
                break;
            case 2:
                if (col - 1 >= 0 && grid[row][col - 1] == '.') {
                    col -= 1;
                    grid[row][col] = alphabet[index];
                    not_valid = 1;
                }
                break;
            case 3:
                if (col + 1 < 10 && grid[row][col + 1] == '.') {
                    col += 1;
                    grid[row][col] = alphabet[index];
                    not_valid = 1;
                }
                break;
        }

        if ((row - 1 >= 0 && row + 1 < 10) && (col - 1 >= 0 && col + 1 < 10)) {
            if ((grid[row - 1][col] != '.' && grid[row + 1][col] != '.') &&
                (grid[row][col - 1] != '.' && grid[row][col + 1] != '.')) {
                return 0;
            }
        }

        if (not_valid == 0) {
            continue;
        }

        index++;
    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%2c", grid[i][j]);
        }
        printf("\n");
    }
}
