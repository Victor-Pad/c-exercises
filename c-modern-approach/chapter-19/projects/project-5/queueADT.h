#ifndef QUEUEADT_H
#define QUEUEADT_H

typedef int Item;
typedef struct queue_type *Queue;

void create(void);
void destroy(Queue q);
void insert(Queue q);
void remove(Queue q);
int peek_front(Queue q);
int peek_back(Queue q);
bool is_empty(Queue q);

#endif
