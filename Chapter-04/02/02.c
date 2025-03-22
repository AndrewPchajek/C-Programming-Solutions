#include <stdio.h>

int main(void) {
    int num, hundreds, tens, ones;

    printf("Enter a three-digit number: ");
    scanf("%d", &num);

    hundreds = num / 100;
    tens = num % 100 / 10;
    ones = num % 10;

    printf("The reversal is: %d%d%d", ones, tens, hundreds);
    return 0;
}