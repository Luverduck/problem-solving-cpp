#include <stdio.h>

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    int a, b;

    while(1)
    {
        int result = scanf("%d %d", &a, &b);
        if(result == EOF) break;
        printf("%d\n", a + b);
    }
};