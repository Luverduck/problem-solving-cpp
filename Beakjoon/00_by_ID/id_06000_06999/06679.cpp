#include <iostream>

using namespace std;

void solution()
{
    int nums[3] { 0, };
    for (int i = 2992; i <= 9999; ++i)
    {
        fill(nums, nums + 3, i);
        int sum10 = 0, sum12 = 0, sum16 = 0;
        while (nums[0] > 0 || nums[1] > 0 || nums[2] > 0)
        {
            sum10 += nums[0] % 10;
            nums[0] /= 10;
            sum12 += nums[1] % 12;
            nums[1] /= 12;
            sum16 += nums[2] % 16;
            nums[2] /= 16;
        }
        if (sum10 == sum12 && sum10 == sum16) cout << i << '\n';
    }
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