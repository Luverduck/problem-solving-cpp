#include <stdio.h>

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    int a, b, c;

    scanf("%d %d %d", &a, &b, &c);

    printf("%d\n", (a + b) % c);
    printf("%d\n", ( (a % c) + (b % c) ) % c);
    printf("%d\n", (a * b) % c);
    printf("%d\n", ( (a % c) * (b % c) ) % c);
}