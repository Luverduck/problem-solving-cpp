#include <stdio.h>

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    int n, target;
    int arr[201] = {0};

    scanf("%d", &n);

    for(int i=0;i<n;i++){
        int tmp;
        scanf("%d", &tmp);
        arr[tmp + 100]++;
    }

    scanf("%d", &target);

    printf("%d", arr[target + 100]);
};