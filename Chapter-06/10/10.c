#include <stdio.h>

int main(void) {
    int lowestMonth, lowestDay, lowestYear;
    int month, day, year;

    do {
        printf("Enter a date (mm/dd/yy): ");
        scanf("%d/%d/%d", &month, &day, &year);

        if (year == 0 && month == 0 && day == 0) {
            break;
        }

        if (year < lowestYear) {
            lowestYear = year;
            lowestMonth = month;
            lowestDay = day;
        } else if (year == lowestYear && month < lowestMonth) {
            lowestYear = year;
            lowestMonth = month;
            lowestDay = day;
        } else if (year == lowestYear && month == lowestMonth &&
                   day < lowestDay) {
            lowestDay = day;
            lowestMonth = month;
            lowestYear = year;
        }
    } while (month != 0 && day != 0 && year != 0);

    printf("%d/%d/%.2d is the earliest date", lowestMonth, lowestDay,
           lowestYear);
    return 0;
}