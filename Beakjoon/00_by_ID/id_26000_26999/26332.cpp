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

    int n, c, p;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> c >> p;
        cout << c << ' ' << p << '\n';
        cout << (c * p - 2 * (c - 1)) << '\n';
    }
}