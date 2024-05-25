#include <stdio.h>

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    double a, b;

    scanf("%lf %lf", &a, &b);

    printf("%.9lf", a / b);
};