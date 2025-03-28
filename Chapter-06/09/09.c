#include <stdio.h>

int main(void) {
    float loan, interest, payment;
    int num;

    printf("Enter amount of loan: ");
    scanf("%f", &loan);
    printf("Enter interest rate: ");
    scanf("%f", &interest);
    printf("Enter monthly payment: ");
    scanf("%f", &payment);
    printf("Enter number of payments: ");
    scanf("%d", &num);
    printf("\n");

    for (int i = 0; i < num; i++) {
        loan = loan * interest / 100 / 12 + loan - payment;
        printf("Balance remaining after payment #%d: $%.2f\n", i + 1, loan);
    }

    return 0;
}