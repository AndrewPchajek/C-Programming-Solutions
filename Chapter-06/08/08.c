#include <stdio.h>

int main(void) {
    int days, firstDay;

    printf("Enter number of days in the month: ");
    scanf("%d", &days);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &firstDay);

    for (int i = 1; i < firstDay; i++) {
        printf("   ");
    }

    for (int i = 1; i <= days; i++) {
        printf("%2d ", i);

        if ((i + firstDay - 1) % 7 == 0) {
            printf("\n");
        }
    }

    return 0;
}