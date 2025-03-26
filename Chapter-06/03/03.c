#include <stdio.h>

int main(void) {
    int numerator, denominator, n, m, remainder;

    printf("Enter a fraction: ");
    scanf("%d / %d", &numerator, &denominator);

    n = numerator;
    m = denominator;

    while (n != 0) {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("In lowest terms: %d/%d\n", numerator / m, denominator / m);
    return 0;
}