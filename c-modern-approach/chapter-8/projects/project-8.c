#include <stdio.h>

int main(void) {
    int table[5][5] = {0};
    int num, sum_col = 0, sum_row = 0;

    for (int i = 0; i < 5; i++) {
        printf("Enter 5 quiz grades for student #%d: ", i + 1);
        for (int j = 0; j < 5; j++) {
            scanf_s("%d", &num);
            table[i][j] = num;
        }
    }

    printf("Row totals: ");
    for (int i = 0; i < 5; i++) {
        sum_row = 0;
        for (int j = 0; j < 5; j++) {
            sum_row += table[i][j];
        }

        printf("%d ", sum_row);
    }

    printf("\nColumn totals: ");
    for (int i = 0; i < 5; i++) {
        sum_col = 0;
        for (int j = 0; j < 5; j++) {
            sum_col += table[j][i];
        }

        printf("%d ", sum_col);
    }
    printf("\n");
}
