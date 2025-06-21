#include <stdio.h>

#define N 10

int main(void) {
    int a[N], *p = a, *q = &a[N];
    if (p > q)
        printf("P bigger than Q\n");
    else
        printf("Q bigger than P");
    ;
    p += 1;
    printf("%p", p);
}
