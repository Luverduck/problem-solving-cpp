#include <stdio.h>

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    int n;
    int max = 0;
    double sum = 0;

    scanf("%d", &n);

    int arr[n] = { 0 };

    for(int i = 0; i < n; i++)
        scanf("%d", arr + i);

    for(int i = 0; i < n; i++)
    {
        sum += arr[i];
        if(max < arr[i])
            max = arr[i];
    }

    printf("%lf", sum / max * 100 / n);
};