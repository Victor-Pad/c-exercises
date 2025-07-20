#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "queueADT.h"

struct node {
    Item data;
    struct node *next;
};

struct queue_type {
    int len;
    struct node *tail;
    struct node *head;
};

void terminate(char *message) {
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

void make_empty(Queue q) {
    while (!is_empty(q))
        dequeue(q);
}

Queue create(void) {
    Queue q = malloc(sizeof(struct queue_type));

    if (q == NULL)
        terminate("Error in create: malloc failed.");

    q->len = 0;
    q->tail = NULL;
    q->head = NULL;
    return q;
}

void destroy(Queue q) {
    make_empty(q);
    free(q);
}

bool is_empty(Queue q) {
    return q->head == NULL;
}

bool is_full(Queue q) {
    return false;
}

void enqueue(Queue q, Item i) {
    struct node *new_node = malloc(sizeof(struct node));

    if (new_node == NULL)
        terminate("Error in enqueue: queue is full.");

    new_node->data = i;
    new_node->next = NULL;

    if (is_empty(q)) {
        q->tail = new_node;
        q->head = new_node;
    } else {
        q->tail->next = new_node;
        q->tail = new_node;
    }

    q->len++;
}

Item dequeue(Queue q) {
    struct node *old_node;
    Item i;

    if (is_empty(q))
        terminate("Error in dequeue: queue is empty");

    old_node = q->head;
    i = old_node->data;
    q->head = old_node->next;

    if (is_empty(q))
        q->tail = NULL;

    free(old_node);
    q->len--;
    return i;
}

Item peek_front(Queue q) {
    struct node *front;
    front = q->head;
    return front->data;
}

Item peek_back(Queue q) {
    struct node *back;
    back = q->tail;
    return back->data;
}
