#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

void solution()
{
    vector<char> v(16);
    for (int i = 0; i < 16; ++i)
        cin >> v[i];

    int res = 0;
    for (int i = 0; i < 16; ++i)
    {
        if (v[i] == '.') continue;
        int x1 = i % 4;
        int y1 = i / 4;
        int x2 = (v[i] - 'A') % 4;
        int y2 = (v[i] - 'A') / 4;
        res += abs(x1 - x2) + abs(y1 - y2);
    }
    cout << res;
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