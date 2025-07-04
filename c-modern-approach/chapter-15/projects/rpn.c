#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include "stack.h"

int main(void) {
    char ch;

    printf("Enter an RPN expression: ");

    make_empty();

    while (true) {
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
            printf("Value of expression: %d\n", pop());
            printf("Enter an RPN expression: ");
        }
    }
}
