#include <stdio.h>

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    int n;
    int sum = 0;

    scanf("%d", &n);

    for(int i = 1; i <= n; i++)
        sum += i;

    printf("%d", sum);
};