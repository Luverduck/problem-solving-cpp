#include <stdio.h>

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    unsigned short year;

    scanf("%hu", &year);

    bool isLeapYear = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    if (isLeapYear)
        printf("1");
    else
        printf("0");
}