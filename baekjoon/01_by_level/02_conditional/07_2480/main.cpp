#include <stdio.h>

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    if(a == b)
    {
        if(b == c)
            printf("%d", 10000 + (1000 * a));
        else
            printf("%d", 1000 + (100 * a));
        return 0;
    }

    if(a == c || b == c)
    {
        printf("%d", 1000 + (100 * c));
        return 0;
    }

    int max = a > b ? a : b;
    max = max > c ? max : c;

    printf("%d", 100 * max);
}