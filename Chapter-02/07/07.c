#include <stdio.h>

int main(void) {
    int num20, num10, num5, num1, amount;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);
    printf("\n");

    // calculate how much of each bill
    num20 = amount / 20;
    num10 = (amount - num20 * 20) / 10;
    num5 = (amount - num20 * 20 - num10 * 10) / 5;
    num1 = (amount - num20 * 20 - num10 * 10 - num5 * 5);

    printf("$20 bills: %d\n", num20);
    printf("$10 bills: %d\n", num10);
    printf(" $5 bills: %d\n", num5);
    printf(" $1 bills: %d\n", num1);

    return 0;
}