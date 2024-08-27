#include <stdio.h>

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    int max = 0, index = 0;
    int temp;

    for(int i = 0; i < 9; i++)
    {
        scanf("%d", &temp);
        if(temp > max)
        {
            max = temp;
            index = i + 1;
        }
    }

    printf("%d\n%d", max, index);
};