#include <stdio.h>

int main(void) {
    int factorial = 1, i = 1;
    float e = 1.0f, epsilon, term;

    printf("Enter the value of epsilon: ");
    scanf("%f", &epsilon);

    do {
        factorial *= i++;
        term = 1.0f / factorial;
        e += term;
    } while ((term >= epsilon));

    printf("Approximation for e: %f\n", e);
    return 0;
}