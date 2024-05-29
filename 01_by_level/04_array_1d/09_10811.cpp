#include <stdio.h>

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    int n, m, i, j, temp;

    scanf("%d %d", &n, &m);

    int arr[n] = { 0 };

    for(int p = 0; p < n; p++)
        arr[p] = p + 1;

    for(int p = 0; p < m; p++)
    {
        scanf("%d %d", &i, &j);
        for(int q = 0; q < (j - i + 1) / 2; q++)
        {
            temp = arr[i - 1 + q];
            arr[i - 1 + q] = arr[j - 1 - q];
            arr[j - 1 - q] = temp;
        }
    }

    for(int p = 0; p < n; p++)
        printf("%d ", arr[p]);
};