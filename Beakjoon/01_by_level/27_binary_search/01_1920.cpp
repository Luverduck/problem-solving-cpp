#include <iostream>
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

    int N;
    cin >> N;

    int nums[N] { 0, };
    for(int i = 0; i < N; ++i)
        cin >> nums[i];

    sort(nums, nums + N);

    int M;
    cin >> M;

    int temp;
    for(int i = 0; i < M; ++i)
    {
        cin >> temp;
        cout << (binary_search(nums, nums + N, temp) ? 1 : 0) << "\n";
    }
}