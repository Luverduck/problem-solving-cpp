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

    int HH, MM;
    cin >> HH >> MM;

    int res = 60 * (HH - 9) + MM;
    cout << res;
}