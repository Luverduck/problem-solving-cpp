#include <iostream>

using namespace std;

void solution()
{
    int I;
    cin >> I;

    int res = 0;
    for (int i = 1; i * i <= I; ++i)
    {
        if (I % i != 0) continue;
        res += i;
        if (i != I / i)
            res += I / i;
    }
    cout << res;
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