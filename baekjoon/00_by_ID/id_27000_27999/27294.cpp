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

    int T, S;
    cin >> T >> S;

    if (T >= 12 && T <= 16 && !S)
        cout << 320;
    else
        cout << 280;
}