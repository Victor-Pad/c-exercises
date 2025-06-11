#include <stdio.h>

void selection_sort(int n, int[]);

int main(void) {
    int n = 10, numbers[10];

    printf("Enter a series of 10 integers: ");
    for (int i = 0; i < 10; i++) {
        scanf_s("%d", &n);
        numbers[i] = n;
    }

    printf("Array before selection sort: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    selection_sort(10, numbers);

    printf("Array after selection sort: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}

void selection_sort(int n, int numbers[n]) {
    int largest_index, largest = numbers[0];

    if (n <= 1)
        return;

    for (int i = 0; i < n; i++) {
        if (largest < numbers[i]) {
            largest = numbers[i];
            largest_index = i;
        }
    }

    numbers[largest_index] = numbers[n - 1];
    numbers[n - 1] = largest;
    n--;

    selection_sort(n, numbers);
}
