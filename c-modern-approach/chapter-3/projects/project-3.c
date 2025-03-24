#include <stdio.h>

int main(void) {
    int gsi, group_identifier, publisher_code, item_number, check_digit;

    printf("Enter ISBN: ");
    scanf_s("%d-%d-%d-%d-%d", &gsi, &group_identifier, &publisher_code,
            &item_number, &check_digit);

    printf("GSI Prefix: %d\n", gsi);
    printf("Group Identifier: %d\n", group_identifier);
    printf("Publisher code: %d\n", publisher_code);
    printf("Item number: %d\n", item_number);
    printf("Check digit: %d\n", check_digit);
}
