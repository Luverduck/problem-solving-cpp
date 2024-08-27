#include <stdio.h>

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    long x;
    int n, a, b;

    scanf("%ld", &x);

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &a, &b);
        x -= a * b;
    }

    if(x == 0)
        printf("Yes");
    else
        printf("No");
};