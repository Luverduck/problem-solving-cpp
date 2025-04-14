#include <iostream>

using namespace std;

void solution()
{
    int N;
    while(cin >> N)
    {
        if (N == 0) break;
        cout << N * (N + 1) / 2 << '\n';
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