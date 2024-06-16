#include <stdio.h>

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    int arr[42] = { 0 };
    int count = 0, temp;

    for(int i = 0; i < 10; i++)
    {
        scanf("%d", &temp);

        arr[temp % 42]++;
    }

    for(int i = 0; i <= 41; i++)
    {
        if(arr[i] != 0)
            count++;
    }

    printf("%d", count);
};