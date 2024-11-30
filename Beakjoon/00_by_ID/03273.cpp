#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n;
    cin >> n;

    vector<int> nums(n);

    for(int i = 0; i < n; ++i)
        cin >> nums[i];

    int x;
    cin >> x;

    sort(nums.begin(), nums.end());

    int cnt = 0;
    for(int i = 0; i < n; ++i)
    {
        int target = x - nums[i];
        vector<int>::iterator it = next(nums.begin() + i);
        if(binary_search(it, nums.end(), target))
            cnt++;
    }

    cout << cnt;
}