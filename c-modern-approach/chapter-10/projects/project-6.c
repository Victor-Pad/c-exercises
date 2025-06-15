#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int top = 0;

void make_empty(void);
bool is_empty();
bool is_full(void);
void push(int i);
int pop(void);

int main(void) {
    char ch;

    printf("Enter an RPN expression: ");
    while (true) {
        make_empty();
        scanf_s(" %c", &ch);

        if (ch == 'q')
            return 0;

        if (isdigit(ch))
            push((int)ch - '0');

        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            int operand2 = pop();
            int operand1 = pop();

            switch (ch) {
                case '+':
                    push(operand1 + operand2);
                    break;
                case '-':
                    push(operand1 - operand2);
                    break;
                case '*':
                    push(operand1 * operand2);
                    break;
                case '/':
                    push(operand1 / operand2);
                    break;
            }
        }

        else if (ch == '=') {
            printf("Value of expression: %d\n", contents[top - 1]);
            printf("Enter an RPN expression: ");
        }
    }
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
