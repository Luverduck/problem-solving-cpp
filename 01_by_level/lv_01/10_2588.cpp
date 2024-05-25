#include <stdio.h>

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    int a, b;

    scanf("%d %d", &a, &b);

    int tmp = b;
    while(tmp > 0)
    {
        printf("%d\n", a * (tmp % 10));
        tmp /= 10;
    }

    printf("%d\n", a * b);
};