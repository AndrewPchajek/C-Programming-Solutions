#include <stdio.h>

int main(void) {
    int n1, n2, n3, n4, biggest, smallest, biggest1, smallest1, biggest2,
        smallest2;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    if (n1 > n2) {
        biggest1 = n1;
        smallest1 = n2;
    } else {
        biggest1 = n2;
        smallest1 = n1;
    }

    if (n3 > n4) {
        biggest2 = n3;
        smallest2 = n4;
    } else {
        biggest2 = n4;
        smallest2 = n3;
    }

    if (biggest1 > biggest2) {
        biggest = biggest1;
    } else {
        biggest = biggest2;
    }

    if (smallest1 < smallest2) {
        smallest = smallest1;
    } else {
        smallest = smallest2;
    }

    printf("Biggest: %d\n", biggest);
    printf("Smallest: %d\n", smallest);
    return 0;
