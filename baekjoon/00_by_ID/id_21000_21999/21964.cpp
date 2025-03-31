#include <iostream>

using namespace std;

void solution()
{
    int N;
    cin >> N;
    char c;
    for (int i = 0; i < N; ++i)
    {
        cin >> c;
        if (i >= N - 5)
            cout << c;
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