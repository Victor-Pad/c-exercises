#include <stdio.h>

int main(void) {
    int one, two, three, four, five, six, seven, eight, nine, ten, eleven,
        twelve, thirteen, fourteen, fifteen, sixteen;

    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf_s("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", &one, &two,
            &three, &four, &five, &six, &seven, &eight, &nine, &ten, &eleven,
            &twelve, &thirteen, &fourteen, &fifteen, &sixteen);

    printf("\n%d %d %d %d\n", one, two, three, four);
    printf("%d %d %d %d\n", five, six, seven, eight);
    printf("%d %d %d %d\n", nine, ten, eleven, twelve);
    printf("%d %d %d %d\n", thirteen, fourteen, fifteen, sixteen);

    int row_sum1 = one + two + three + four;
    int row_sum2 = five + six + seven + eight;
    int row_sum3 = nine + ten + eleven + twelve;
    int row_sum4 = thirteen + fourteen + fifteen + sixteen;

    int column_sum1 = one + five + nine + thirteen;
    int column_sum2 = two + six + ten + fourteen;
    int column_sum3 = three + seven + eleven + fifteen;
    int column_sum4 = four + eight + twelve + sixteen;

    int diag_sum1 = one + six + eleven + sixteen;
    int diag_sum2 = four + seven + ten + thirteen;

    printf("\nRow sums: %d %d %d %d\n", row_sum1, row_sum2, row_sum3, row_sum4);
    printf("Column sums: %d %d %d %d\n", column_sum1, column_sum2, column_sum3,
           column_sum4);
    printf("Diagonal sums: %d %d\n", diag_sum1, diag_sum2);
}
