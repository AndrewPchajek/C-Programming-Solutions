#include <stdio.h>

int main(void) {
    int hour, minute, time;
    int t1 = 8 * 60, t2 = 9 * 60 + 43, t3 = 11 * 60 + 19, t4 = 12 * 60 + 47,
        t5 = 14 * 60, t6 = 15 * 60 + 45, t7 = 19 * 60, t8 = 21 * 60 + 45;

    printf("Enter a 24-hour time: ");
    scanf("%d : %d", &hour, &minute);

    time = 60 * hour + minute;

    if (time < t1 + (t2 - t1) / 2)
        printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.\n");
    else if (time < t2 + (t3 - t2) / 2)
        printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.\n");
    else if (time < t3 + (t4 - t3) / 2)
        printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.\n");
    else if (time < t4 + (t5 - t4) / 2)
        printf("Closest departure time is 12:47 p.m., arriving at 3:00 p.m.\n");
    else if (time < t5 + (t6 - t5) / 2)
        printf("Closest departure time is 2:00 p.m., arriving at 4:08 p.m.\n");
    else if (time < t6 + (t7 - t6) / 2)
        printf("Closest departure time is 3:45 p.m., arriving at 5:55 p.m.\n");
    else if (time < t7 + (t8 - t7) / 2)
        printf("Closest departure time is 7:00 p.m., arriving at 9:20 p.m.\n");
    else
        printf("Closest departure time is 9:45 p.m., arriving at 11:58 p.m.\n");

    return 0;
}