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

    while (true)
    {
        int cnt = 0;
        vector<int> nums;
        while (true)
        {
            int temp;
            cin >> temp;
            if (temp == -1) return 0;
            if (temp == 0) break;
            nums.emplace_back(temp);
        }
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size(); ++i)
        {
            for (int j = i + 1; j < nums.size(); ++j)
            {
                if (nums[i] * 2 == nums[j]) cnt++;
            }
        }
        cout << cnt << '\n';
    }
}