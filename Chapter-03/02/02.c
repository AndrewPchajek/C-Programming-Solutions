#include <stdio.h>

int main(void) {
    int itemNumber, month, day, year;
    float unitPrice;

    printf("Enter item number: ");
    scanf("%d", &itemNumber);
    printf("Enter unit price: ");
    scanf("%f", &unitPrice);
    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%d\t\t$%8.2f\t%d/%d/%d", itemNumber, unitPrice, month, day, year);

    return 0;
}