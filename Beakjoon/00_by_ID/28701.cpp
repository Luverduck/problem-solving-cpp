#include <iostream>
#include <cmath>

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

    int res1 = N * (N + 1) / 2;
    int res2 = res1 * res1;
    int res3 = 0;
    for(int i = 1; i <= N; ++i)
        res3 += static_cast<int>(pow(i, 3));

    cout << res1 << '\n' << res2 << '\n' << res3;
}