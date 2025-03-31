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

    int n, p, t;
    cin >> n;
    for (int i = 0; i < n; ++i)
    {
        cin >> p >> t;
        cout << p - (t / 7) + (t / 4) << '\n';
    }
}