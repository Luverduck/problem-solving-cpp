#include <iostream>
#include <iomanip>

using namespace std;

void solution()
{
    int n;
    cin >> n;
    cout << fixed << setprecision(2) << 1.0 * n / 4 << '\n';
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