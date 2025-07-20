#include <stdbool.h>
#include <stdio.h>
#include "queueADT.h"

int main(void) {
    Queue q1, q2;
    q1 = create(100);
    q2 = create(200);
    int n;

    enqueue(q1, 2);
    enqueue(q1, 4);
    printf("Item back peek q1: %d\n", peek_back(q1));
    printf("Item front peek q1: %d\n", peek_front(q1));

    printf("Item removed from q1: %d", dequeue(q1));
}
