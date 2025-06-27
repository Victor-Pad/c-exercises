#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

/* external variables */
int contents[STACK_SIZE];
int top = 0;

void read_line(char str[], int n);
int evaluate_rpn_expression(const char *expression);
void make_empty(void);
bool is_empty();
bool is_full(void);
void push(int i);
int pop(void);

int main(void) {
    char expression[STACK_SIZE + 1];

    printf("Enter an RPN expression: ");
    read_line(expression, STACK_SIZE + 1);
    printf("Value of expression: %d\n", evaluate_rpn_expression(expression));
}

int evaluate_rpn_expression(const char *expression) {
    make_empty();
    while (*expression != '\0') {
        if (*expression == 'q')
            exit(EXIT_SUCCESS);

        if (isdigit(*expression)) {
            push(*expression - '0');

        } else if (*expression == '+' || *expression == '-' ||
                   *expression == '*' || *expression == '/') {
            int operand2 = pop();
            int operand1 = pop();

            switch (*expression) {
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

        expression++;
    }

    return contents[top - 1];
}

void read_line(char str[], int n) {
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;

    str[i] = '\0';
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
