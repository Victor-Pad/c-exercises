#include <stdio.h>

int main(void) {
    char ch;
    float operand, result;

    printf("Enter an expression: ");
    scanf_s("%f", &operand);
    result = operand;

    while ((ch = getchar()) != '\n') {
        scanf_s("%f", &operand);

        switch (ch) {
            case '+':
                result += operand;
                break;
            case '*':
                result *= operand;
                break;
            case '-':
                result -= operand;
                break;
            case '/':
                result /= operand;
                break;
        }
    }
    printf("Value of expression: %.1f", result);
}
