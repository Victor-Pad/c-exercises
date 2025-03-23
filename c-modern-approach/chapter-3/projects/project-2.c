#include <stdio.h>

int main(void) {
    int item, month, day, year;
    float price;

    printf("Enter item number: ");
    scanf_s("%d", &item);
    printf("Enter unit price: ");
    scanf_s("%f", &price);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf_s("%d/%d/%d", &month, &day, &year);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%d\t\t$  %.2f\t%d/%d/%d", item, price, month, day, year);
}
