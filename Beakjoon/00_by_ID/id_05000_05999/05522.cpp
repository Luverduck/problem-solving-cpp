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

    int res = 0;
    for (int i = 0; i < 5; ++i)
    {
        int temp;
        cin >> temp;
        res += temp;
    }
    cout << res;
}