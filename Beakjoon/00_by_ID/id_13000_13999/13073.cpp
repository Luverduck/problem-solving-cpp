#include <iostream>

using namespace std;

void solution()
{
    int T;
    cin >> T;
    for (int t = 1; t <= T; t++)
    {
        int N;
        cin >> N;
        int S1 = N * (N + 1) / 2;
        int S2 = N * N;
        int S3 = N * (N + 1);
        cout << S1 << ' ' << S2 << ' ' << S3 << '\n';
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