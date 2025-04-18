#include <stdio.h>

int main(void) {
    int i, j;
    for (i = 10; i >= 1; i /= 2)
        printf("%d ", i++);
}
