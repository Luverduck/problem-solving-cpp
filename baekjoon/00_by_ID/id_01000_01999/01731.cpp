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

    int N;
    cin >> N;

    int nums[N] { 0, };
    for(int i = 0; i < N; ++i)
        cin >> nums[i];

    int d = nums[1] - nums[0];
    if(nums[N - 1] - nums[0] == (N - 1) * d)
        cout << (nums[N - 1] + d);
    else
        cout << (nums[N - 1] * (nums[2] / nums[1]));
}