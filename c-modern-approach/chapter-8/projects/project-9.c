#include <stdio.h>

int main(void) {
    char grid[10][10] = {'.'};

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%c", grid[i][j]);
        }
    }
}
