#include <stdio.h>

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    int hour;
    int minute;

    scanf("%d %d", &hour, &minute);

    if(hour == 0)
        hour = 24;

    int alarm = (hour * 60) + minute - 45;

    printf("%d %d", alarm / 60 % 24, alarm % 60);
}