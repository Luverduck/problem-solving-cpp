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

    int N;
    cin >> N;
    int res_x, res_y = 1001;
    for (int n = 0; n < N; ++n)
    {
        int x, y;
        cin >> x >> y;
        if (y >= res_y) continue;
        res_x = x;
        res_y = y;
    }
    cout << res_x << " " << res_y;
}