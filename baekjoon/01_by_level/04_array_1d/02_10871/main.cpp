#include <stdio.h>

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    int n, x;

    scanf("%d %d", &n, &x);

    for(int i = 0; i < n; i++)
    {
        int tmp;
        scanf("%d", &tmp);
        if(tmp < x)
            printf("%d ", tmp);
    }
};