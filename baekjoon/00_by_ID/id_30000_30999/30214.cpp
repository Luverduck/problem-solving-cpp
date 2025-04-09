#include <iostream>

using namespace std;

void solution()
{
    int S1, S2;
    cin >> S1 >> S2;
    cout << (2 * S1 >= S2 ? "E" : "H");
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