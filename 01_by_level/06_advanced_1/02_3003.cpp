#include <stdio.h>

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    int arr[] { 1, 1, 2, 2, 2, 8 };

    int temp;
    for(int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        scanf("%d", &temp);
        printf("%d ", arr[i] - temp);
    }
};