#include <stdio.h>

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    int n, temp;
    int min = 1000001;
    int max = -1000001;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &temp);

        if(temp > max)
            max = temp;

        if(temp < min)
            min = temp;
    }

    printf("%d %d", min, max);
};