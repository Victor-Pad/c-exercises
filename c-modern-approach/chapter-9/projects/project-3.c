#include <stdio.h>
#include <stdlib.h>

void generate_random_walk(char walk[10][10]);
void print_array(char walk[10][10]);

int main(void) {
    char grid[10][10];
    generate_random_walk(grid);
    print_array(grid);

    return 0;
}

void generate_random_walk(char walk[10][10]) {
    char alphabet[25] = {'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J',
                         'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S',
                         'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int not_valid, move, row = 0, col = 0, index = 0;
    srand(500);

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            walk[i][j] = '.';
        }
    }

    walk[0][0] = 'A';

    while (index < 25) {
        move = rand();
        not_valid = 0;

        switch (move % 4) {
            case 0:
                if (row - 1 >= 0 && walk[row - 1][col] == '.') {
                    row -= 1;
                    walk[row][col] = alphabet[index];
                    not_valid = 1;
                }
                break;
            case 1:
                if (row + 1 < 10 && walk[row + 1][col] == '.') {
                    row += 1;
                    walk[row][col] = alphabet[index];
                    not_valid = 1;
                }
                break;
            case 2:
                if (col - 1 >= 0 && walk[row][col - 1] == '.') {
                    col -= 1;
                    walk[row][col] = alphabet[index];
                    not_valid = 1;
                }
                break;
            case 3:
                if (col + 1 < 10 && walk[row][col + 1] == '.') {
                    col += 1;
                    walk[row][col] = alphabet[index];
                    not_valid = 1;
                }
                break;
        }

        if ((row - 1 >= 0 && row + 1 < 10) && (col - 1 >= 0 && col + 1 < 10)) {
            if ((walk[row - 1][col] != '.' && walk[row + 1][col] != '.') &&
                (walk[row][col - 1] != '.' && walk[row][col + 1] != '.')) {
                return;
            }
        }

        if (not_valid == 0) {
            continue;
        }

        index++;
    }
}

void print_array(char walk[10][10]) {
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%2c", walk[i][j]);
        }
        printf("\n");
    }
}
