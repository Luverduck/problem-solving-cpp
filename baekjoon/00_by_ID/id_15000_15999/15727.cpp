#include <iostream>

using namespace std;

void solution()
{
    int L, t;
    cin >> L;
    t = L / 5;
    cout << (L % 5 == 0 ? t : t + 1);
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