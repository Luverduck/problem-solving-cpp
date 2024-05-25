#include <stdio.h>

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    int a, b;

    scanf("%d %d", &a, &b);

    if(a > b)
        printf(">");
    else if (a == b)
        printf("==");
    else
        printf("<");
};