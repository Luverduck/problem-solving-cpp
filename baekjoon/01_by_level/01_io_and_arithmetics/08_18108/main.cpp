#include <stdio.h>

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    int a;

    scanf("%d", &a);

    printf("%d", a - (2541 - 1998));
};