#include <iostream>

using namespace std;

void solution()
{
    int P;
    cin >> P;
    for (int p = 0; p < P; ++p)
    {
        long long I;
        cin >> I;
        cout << I * (I + 1) * (2 * I + 1) / 6 << '\n';
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