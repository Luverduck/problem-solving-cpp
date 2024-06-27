#include <iostream>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int a1, a0, c, n0;
    cin >> a1 >> a0 >> c >> n0;

    bool check = (a1 * n0 + a0 <= c * n0) && (c >= a1);

    cout << check;
}