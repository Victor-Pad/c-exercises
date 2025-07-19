#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include "stackADT.h"

int main(void) {
    Stack s1;
    s1 = create();
    char ch;

    printf("Enter an RPN expression: ");
    while (true) {
        scanf_s(" %c", &ch);

        if (ch == 'q')
            return 0;

        if (isdigit(ch))
            push(s1, (int)ch - '0');

        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/') {
            int operand2 = pop(s1);
            int operand1 = pop(s1);

            switch (ch) {
                case '+':
                    push(s1, operand1 + operand2);
                    break;
                case '-':
                    push(s1, operand1 - operand2);
                    break;
                case '*':
                    push(s1, operand1 * operand2);
                    break;
                case '/':
                    push(s1, operand1 / operand2);
                    break;
            }
        }

        else if (ch == '=') {
            printf("Value of expression: %d\n", pop(s1));
            make_empty(s1);
            printf("Enter an RPN expression: ");
        }
    }
}
