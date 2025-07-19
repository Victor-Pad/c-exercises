#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include "stackADT.h"

#define STACK_SIZE 100

char contents[STACK_SIZE];
int top = 0;

int main(void) {
    Stack s1;
    s1 = create();
    char ch;

    printf("Enter parentheses and/or braces: ");
    while ((ch = getchar()) != '\n') {
        if (ch == '{' || ch == '(')
            push(s1, ch);
        else {
            char popped = pop(s1);
            if ((ch == ')' && popped != '(') || (ch == '}' && popped != '{')) {
                printf("Parentheses/braces are not matched.");
                exit(1);
            }
        }
    }

    if (is_empty(s1))
        printf("Parentheses/braces are nested properly.");
    else
        printf("Parentheses/braces are not matched.");

    return 0;
}
