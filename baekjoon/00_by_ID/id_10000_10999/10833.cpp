#include <iostream>

using namespace std;

void solution()
{
    int N;
    cin >> N;
    int res = 0;
    while (N--)
    {
        int X, Y;
        cin >> X >> Y;
        res += Y % X;
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