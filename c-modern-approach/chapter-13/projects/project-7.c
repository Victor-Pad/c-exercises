#include <stdio.h>

int main(void) {
    int number;
    char *tens[] = {"Ten",     "Eleven",  "Twelve",    "Thirteen", "Fourteen",
                    "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"},
         *twenty_to_ninety[] = {"Twenty", "Thirty",  "Fourty", "Fifty",
                                "Sixty",  "Seventy", "Eighty", "Ninety"},
         *ones[] = {"-one", "-two",   "-three", "-four", "-five",
                    "-six", "-seven", "-eight", "-nine"};

    printf("Enter a two-digit number: ");
    scanf_s("%2d", &number);

    if (number < 20)
        printf("%s\n", tens[number % 10]);
    else
        printf("%s%s\n", twenty_to_ninety[(number / 10) - 2],
               ones[number % 10 - 1]);

    return 0;
}
