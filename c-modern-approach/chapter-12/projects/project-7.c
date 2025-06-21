#include <stdio.h>
#define N 10
void max_min(int a[], int n, int *max, int *min);

int main(void) {
    int b[N], i, big, small;

    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; i++)
        scanf_s("%d", &b[i]);

    max_min(b, N, &big, &small);

    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);

    return 0;
}
void max_min(int a[], int n, int *max, int *min) {
    int *p;
    *max = *min = a[0];

    for (p = a; p < a + n - 1; p++) {
        if (*p > *max)
            *max = *p;
        else if (*p < *min)
            *min = *p;
    }
}
