#include <stdio.h>

int main(void) {
    int first, second, third, fourth, largest, smallest;

    printf("Enter four integers: ");
    scanf_s("%d %d %d %d", &first, &second, &third, &fourth);

    largest = first;
    smallest = fourth;

    if (first < second && first < third && first < fourth) {
        smallest = first;
    } else if (second < first && second < third && second < fourth) {
        smallest = second;
    } else {
        smallest = third;
    }

    if (second > first && second > third && second > fourth) {
        largest = second;
    } else if (third > first && third > second && third > fourth) {
        largest = third;
    } else {
        largest = fourth;
    }

    if (largest < first) {
        largest = first;
    }
    if (smallest > fourth) {
        smallest = fourth;
    }

    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

    return 0;
}
