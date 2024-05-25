#include <stdio.h>

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    int a, b;

    scanf("%d %d", &a, &b);

    printf("%d", a + b);

    return 0;
};