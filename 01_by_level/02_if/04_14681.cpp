#include <stdio.h>

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    short x, y;

    scanf("%hd", &x);
    scanf("%hd", &y);

    if(x > 0)
        printf("%d", y > 0 ? 1 : 4);
    else
        printf("%d", y > 0 ? 2 : 3);
}