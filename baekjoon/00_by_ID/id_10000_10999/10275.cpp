#include <iostream>
#include <cmath>

using namespace std;

void solution()
{
    int T;
    cin >> T;
    for (int t = 0; t < T; ++t)
    {
        long long n, a, b;
        cin >> n >> a >> b;
        long long res = n;
        long long fgMin = min(a, b);
        while (fgMin % 2 == 0)
        {
            fgMin /= 2;
            res--;
        }
        cout << res << '\n';
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