#include <stdio.h>

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    int a, b;

    while(1)
    {
        scanf("%d %d", &a, &b);
        if(a == 0 && b == 0) break;
        printf("%d\n", a + b);
    }
};