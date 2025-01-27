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

    int prefix_sum[11] { 0, };
    for (int i = 0; i < 10; ++i)
    {
        int temp;
        cin >> temp;
        prefix_sum[i + 1] = prefix_sum[i] + temp;
    }

    int score_sum = 0;
    for (int i = 1; i < 11; ++i)
    {
        int temp = prefix_sum[i] - prefix_sum[0];
        score_sum = abs(temp - 100) <= abs(score_sum - 100) ? temp : score_sum;
    }
    cout << score_sum;
}