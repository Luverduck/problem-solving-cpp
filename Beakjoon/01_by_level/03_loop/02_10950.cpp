#include <stdio.h>

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    int n, a, b;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", a + b);
    }
};