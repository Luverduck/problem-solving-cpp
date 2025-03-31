#include <iostream>

using namespace std;

void solution()
{
    int cnt = 0;
    int temp;
    while (cin >> temp)
        cnt += temp;
    cout << (5 * cnt);
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