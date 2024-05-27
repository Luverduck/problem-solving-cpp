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

        temp = arr[i - 1];
        arr[i - 1] = arr[j - 1];
        arr[j - 1] = temp;
    }

    for(int p = 0; p < n; p++)
        printf("%d ", arr[p]);
};