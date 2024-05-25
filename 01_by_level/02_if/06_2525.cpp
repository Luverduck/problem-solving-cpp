#include <stdio.h>

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    int hour;
    int minute;
    int time_cook;

    scanf("%d %d", &hour, &minute);
    scanf("%d", &time_cook);

    if(hour == 0)
        hour = 24;

    int time_finished = (hour * 60) + minute + time_cook;

    printf("%d %d", (time_finished / 60) % 24, time_finished % 60);
}