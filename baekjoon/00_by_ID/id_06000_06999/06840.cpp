#include <iostream>
#include <algorithm>

using namespace std;

void solution()
{
    int nums[3] { 0, };
    for (int i = 0; i < 3; ++i)
        cin >> nums[i];
    sort(nums, nums + 3);
    cout << nums[1];
}

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solution();
}