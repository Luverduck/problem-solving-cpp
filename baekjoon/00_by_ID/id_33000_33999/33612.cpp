#include <iostream>

using namespace std;

void solution()
{
    int N;
    cin >> N;
    int next = (2024 * 12 + 7) + (7 * (N - 1));
    cout << (next / 12) << " " << (next % 12 + 1);
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