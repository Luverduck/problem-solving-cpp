#include <iostream>

using namespace std;

void solution()
{
    int n, m;
    cin >> n >> m;
    cout << (n * m  % 3 == 0 ? "YES" : "NO");
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