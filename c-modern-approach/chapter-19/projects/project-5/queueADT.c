#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "queueADT.h"

#define QUEUE_SIZE 100

struct queue_type {
    int contents[QUEUE_SIZE];
    int len;
    int first_empty;
    int next_removed;
};

void terminate(char *message) {
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

Queue create(void) {
    Queue q = malloc(sizeof(struct queue_type));

    if (q == NULL)
        terminate("Error in create: malloc failed.");

    q->len = 0;
    q->first_empty = 0;
    q->next_removed = 0;
    return q;
}

void destroy(Queue q) {
    free(q);
}

void wrap_around(Queue q) {
    if (q->next_removed >= QUEUE_SIZE)
        q->next_removed = 0;
    if (q->first_empty >= QUEUE_SIZE)
        q->first_empty = 0;
}

bool is_empty(Queue q) {
    return q->len == 0;
}

bool is_full(Queue q) {
    return q->len == QUEUE_SIZE;
}

void enqueue(Queue q, Item i) {
    if (is_full(q))
        terminate("Error in enqueue: queue is full.");

    q->contents[q->first_empty++] = i;
    wrap_around(q);
    q->len++;
}

void dequeue(Queue q) {
    if (is_empty(q))
        terminate("Error in dequeue: queue is empty");

    q->next_removed++;
    wrap_around(q);
    q->len--;
}

int peek_front(Queue q) {
    return q->contents[q->next_removed];
}

int peek_back(Queue q) {
    if (q->first_empty == 0)
        return q->contents[QUEUE_SIZE - 1];

    return q->contents[q->first_empty - 1];
}
