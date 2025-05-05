#include <iostream>

using namespace std;

void solution()
{
    int res, price;
    cin >> res;
    while (cin >> price)
        res -= price;
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