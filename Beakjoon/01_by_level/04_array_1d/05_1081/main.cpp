#include <stdio.h>

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    int n, m, i, j, k;

    scanf("%d %d", &n, &m);

    int arr[n] = { 0 };

    for(int p = 0; p < m; p++)
    {
        scanf("%d %d %d", &i, &j, &k);

        for(int q = i - 1; q < j; q++)
            arr[q] = k;
    }

    for(int p = 0; p < n; p++)
        printf("%d ", arr[p]);
};