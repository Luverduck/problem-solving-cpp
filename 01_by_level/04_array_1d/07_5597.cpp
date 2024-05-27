#include <stdio.h>

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    int arr[31] = { 0 };
    int idx;

    for(int i = 1; i <= 28; i++)
    {
        scanf("%d", &idx);
        arr[idx] = 1;
    }

    for(int i = 1; i <= 30; i++)
    {
        if(arr[i] == 0)
            printf("%d ", i);
    }
};