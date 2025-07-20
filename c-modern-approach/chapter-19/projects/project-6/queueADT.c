#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "queueADT.h"

struct queue_type {
    int *contents;
    int size;
    int len;
    int first_empty;
    int next_removed;
};

void terminate(char *message) {
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

Queue create(int size) {
    Queue q = malloc(sizeof(struct queue_type));
    if (q == NULL)
        terminate("Error in create: malloc failed.");

    q->contents = malloc(size * sizeof(Item));
    if (q->contents == NULL) {
        free(q);
        terminate("Error in create: malloc failed.");
    }

    q->size = size;
    q->len = 0;
    q->first_empty = 0;
    q->next_removed = 0;
    return q;
}

void destroy(Queue q) {
    free(q->contents);
    free(q);
}

void wrap_around(Queue q) {
    if (q->next_removed >= q->size)
        q->next_removed = 0;
    if (q->first_empty >= q->size)
        q->first_empty = 0;
}

bool is_empty(Queue q) {
    return q->len == 0;
}

bool is_full(Queue q) {
    return q->len == q->size;
}

void enqueue(Queue q, Item i) {
    if (is_full(q))
        terminate("Error in enqueue: queue is full.");

    q->contents[q->first_empty++] = i;
    wrap_around(q);
    q->len++;
}

Item dequeue(Queue q) {
    if (is_empty(q))
        terminate("Error in dequeue: queue is empty");

    wrap_around(q);
    q->len--;
    return q->contents[q->next_removed++];
}

Item peek_front(Queue q) {
    return q->contents[q->next_removed];
}

Item peek_back(Queue q) {
    if (q->first_empty == 0)
        return q->contents[q->size - 1];

    return q->contents[q->first_empty - 1];
}
