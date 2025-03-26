#include <stdio.h>

int main(void) {
    float num, max;

    do {
        printf("Enter a number: ");
        scanf("%f", &num);

        if (num > max) {
            max = num;
        }

    } while (num > 0);

    printf("The largest number entered was %.2f\n", max);
    return 0;
}