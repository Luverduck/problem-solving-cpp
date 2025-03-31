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

    int T;
    cin >> T;
    for (int t = 0; t < T; ++t)
    {
        long long N, C;
        cin >> N >> C;
        cout << N / C + (N % C ? 1 : 0) << '\n';
    }
}