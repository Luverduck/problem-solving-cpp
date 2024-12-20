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

    int n, h, w;
    cin >> n;

    int res = -1;
    for(int i = 0; i < n; ++i)
    {
        cin >> h >> w;
        res = max(res, h * w);
    }

    cout << res;
}