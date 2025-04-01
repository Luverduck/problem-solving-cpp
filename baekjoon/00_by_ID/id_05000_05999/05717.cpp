#include <iostream>

using namespace std;

void solution()
{
    int M, F;
    while (true)
    {
        cin >> M >> F;
        if (!M && !F) break;
        cout << M + F << '\n';
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