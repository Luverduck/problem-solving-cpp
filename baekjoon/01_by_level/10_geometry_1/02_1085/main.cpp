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

    int x, y, w, h;
    cin >> x >> y >> w >> h;

    int min_x = min(w - x, x);
    int min_y = min(h - y, y);

    int min_val = min(min_x, min_y);

    cout << min_val;
}