#include <iostream>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int nums[10] { 0, };
    for(int i = 0; i < 5; ++i)
    {
        int temp;
        cin >> temp;
        nums[temp]++;
    }

    for(int i = 0; i < 10; ++i)
    {
        if(nums[i] % 2 == 0) continue;
        cout << i;
        return 0;
    }
}