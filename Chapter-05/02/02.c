#include <stdio.h>

int main(void) {
    int hour, minute;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minute);

    if (hour > 12) {
        printf("Equivalent 12-hour time: %d:%d PM\n", hour - 12, minute);
    } else if (hour == 12) {
        printf("Equivalent 12-hour time: 12:%d PM\n", minute);
    } else if (hour > 0) {
        printf("Equivalent 12-hour time: %d:%d AM\n", hour, minute);
    } else {
        printf("Equivalent 12-hour time: 12:%d AM\n", minute);
    }

    return 0;
}