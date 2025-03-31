#include <iostream>

using namespace std;

void solution()
{
    int n;
    cin >> n;
    cout << n / 10;
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