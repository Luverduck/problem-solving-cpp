#include <stdio.h>

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    int n;
    scanf("%d", &n);

    int row = 2 * n - 1;

    int mid = row / 2;

    for(int i = 0; i < row; i++)
    {
        int abs = mid - i > 0 ? mid - i : i - mid;

        for(int j = 0; j < abs; j++)
            printf(" ");

        for(int j = abs; j < row - abs; j++)
            printf("*");

        printf("\n");
    }
};
