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

    int x, y;
    char c;
    while (cin >> x >> c >> y)
    {
        if (x == 0 && c == 'W' && y == 0) break;
        int res = x + (c == 'W' ? -1 : 1) * y;
        if (res < -200) cout << "Not allowed";
        else cout << res;
        cout << '\n';
    }
}