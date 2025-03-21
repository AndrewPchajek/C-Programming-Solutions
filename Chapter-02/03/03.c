#include <stdio.h>

int main(void) {
    float radius;

    printf("Enter Radius: ");
    scanf("%f", &radius);

    printf("%.2f cubic meters\n",
           4.0f / 3.0f * 3.14159f * radius * radius * radius);

    return 0;
}