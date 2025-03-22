#include <iostream>

using namespace std;

void solution()
{
    int A, B;
    while (cin >> A >> B)
    {
        if (A == 0 && B == 0) break;
        int cnt = A - B;
        if (cnt == 1)
            cout << 0 << ' ' << 0 << '\n';
        else if (cnt == 3)
            cout << 0 << ' ' << 1 << '\n';
        else
            cout << (cnt / 2 - cnt % 2) << ' ' << cnt % 2 << '\n';
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