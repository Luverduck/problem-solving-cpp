#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int W, H;
    cin >> W >> H;

    double res = 1.0 * W * H / 2;
    cout << fixed << setprecision(1) << res;
}