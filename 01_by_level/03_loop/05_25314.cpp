#include <stdio.h>

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    int n;

    scanf("%d", &n);

    for(int i = 1; i <= (n / 4); i++)
    {
        printf("long ");
    }

    printf("int");
};