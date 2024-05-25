#include <stdio.h>

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    int n, target;
    int count = 0;

    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++)
        scanf("%d", arr + i);

    scanf("%d", &target);

    for(int i = 0; i < n; i++)
        if(arr[i] == target) count++;

    printf("%d", count);
};