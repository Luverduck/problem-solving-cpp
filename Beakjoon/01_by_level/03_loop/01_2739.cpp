#include <stdio.h>

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    int n;

    scanf("%d", &n);

    for(int i = 1; i <= 9; i++)
        printf("%d * %d = %d\n", n, i, n * i);
};