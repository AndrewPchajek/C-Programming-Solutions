#include <stdio.h>

int main(void) {
    int n, m, remainder;

    printf("Enter two integers: ");
    scanf("%d %d", &n, &m);

    while (n != 0) {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("Greatest common divisor: %d\n", m);
    return 0;
}