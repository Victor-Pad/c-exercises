#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

char contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(char i);
char pop(void);
void stack_underflow(void);
void stack_overflow(void);

int main(void) {
    char ch;
    printf("Enter parentheses and/or braces: ");
    while ((ch = getchar()) != '\n') {
        if (ch == '{' || ch == '(')
            push(ch);
        else {
            char popped = pop();
            if ((ch == ')' && popped != '(') || (ch == '}' && popped != '{')) {
                printf("Parentheses/braces are not matched.");
                exit(1);
            }
        }
    }

    if (is_empty())
        printf("Parentheses/braces are nested properly.");
    else
        printf("Parentheses/braces are not matched.");

    return 0;
}

void make_empty(void) {
    top = 0;
}

bool is_empty(void) {
    return top == 0;
}

bool is_full(void) {
    return top == STACK_SIZE;
}

void push(char i) {
    if (is_full())
        stack_overflow();
    else
        contents[top++] = i;
}

char pop(void) {
    if (is_empty())
        stack_underflow();
    else
        return contents[--top];
}

void stack_overflow(void) {
    printf("Stack overflow");
    exit(1);
}

void stack_underflow(void) {
    printf("Parentheses/braces are not matched.");
    exit(1);
}
