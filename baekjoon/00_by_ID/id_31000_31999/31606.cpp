#include <iostream>

using namespace std;

void solution()
{
    int X, Y;
    cin >> X >> Y;
    cout << (X + Y + 3);
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