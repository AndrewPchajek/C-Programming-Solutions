#include <stdio.h>

int main(void) {
    int n, factorial = 1;
    float e = 1.0f;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++) {
        factorial *= i;
        e += 1.0f / factorial;
    }

    printf("Approximation for e: %f\n", e);
    return 0;
}