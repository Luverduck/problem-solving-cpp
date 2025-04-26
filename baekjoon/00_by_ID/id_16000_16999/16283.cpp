#include <iostream>

using namespace std;

void solution()
{
    int a, b, n, w;
    cin >> a >> b >> n >> w;

    int res = -1;
    for (int i = 1; i <= 1000; ++i)
    {
        if (n - i > 0 && a * i + b * (n - i) == w)
        {
            if (res == -1) res = i;
            else
            {
                res = -1;
                break;
            }
        }
    }
    if (res == -1) cout << res;
    else cout << res << " " << n - res;
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