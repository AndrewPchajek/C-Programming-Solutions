#include <stdio.h>

int main(void) {
    int num, tens, ones;

    printf("Enter a two-digit number: ");
    scanf("%d", &num);

    tens = num / 10;
    ones = num % 10;

    printf("The reversal is: %d%d", ones, tens);
    return 0;
}