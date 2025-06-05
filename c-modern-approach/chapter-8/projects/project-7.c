#include <stdio.h>

int main(void) {
    int table[5][5] = {0};
    int num = 0;

    for (int i = 0; i < 5; i++) {
        printf("Enter row %d: ", i);
        for (int j = 0; j < 5; j++) {
            scanf_s("%d", &num);
            table[i][j] = num;
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("Table: %d", table[i][j]);
        }
    }
}
