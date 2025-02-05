#include <iostream>

using namespace std;

void solution()
{
    int res = 91;
    for (int i = 0; i < 3; ++i)
    {
        int temp;
        cin >> temp;
        res += temp * (i % 2 == 0 ? 1 : 3);
    }
    cout << "The 1-3-sum is " << res;
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