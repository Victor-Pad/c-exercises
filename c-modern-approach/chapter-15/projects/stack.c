#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

/* external variables */
int contents[100];
int top = 0;

void make_empty(void) {
    top = 0;
}

int is_empty(void) {
    return top == 0;
}

int is_full(void) {
    return top == 100;
}

void push(int i) {
    if (is_full()) {
        printf("Expression is too complex.");
        exit(EXIT_SUCCESS);
    } else
        contents[top++] = i;
}

int pop(void) {
    if (is_empty()) {
        printf("Not enough operands in expression");
        exit(EXIT_SUCCESS);
    } else
        return contents[--top];
}
