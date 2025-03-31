#include <iostream>

using namespace std;

void solution()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; ++i)
    {
        int x, y;
        cin >> x >> y;
        cout << (x + y) << '\n';
    }
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