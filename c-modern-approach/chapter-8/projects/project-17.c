#include <stdio.h>

int main(void) {
    int size = 0, col = 0;

    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf_s("%d", &size);

    int magic_square[size][size];
    magic_square[0][size / 2] = 1;

    for (int i = 1; i <= size * size; i++) {
        if (i - 1 > size) {
            // size - 1;
        }
    }
}
