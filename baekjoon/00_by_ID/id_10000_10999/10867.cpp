#include <iostream>
#include <vector>

using namespace std;

void solution()
{
    vector<int> nums(2001);

    int N;
    cin >> N;
    for (int i = 0; i < N; ++i)
    {
        int idx;
        cin >> idx;
        nums[idx + 1000]++;
    }

    for (int i = 0; i < nums.size(); ++i)
        if (nums[i] != 0) cout << (i - 1000) << '\n';
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