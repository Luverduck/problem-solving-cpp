#include <iostream>

using namespace std;

void solution()
{
    int R1, S;
    cin >> R1 >> S;
    cout << (2 * S - R1);
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