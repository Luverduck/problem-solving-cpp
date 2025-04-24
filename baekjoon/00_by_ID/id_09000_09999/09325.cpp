#include <iostream>

using namespace std;

void solution()
{
    int T;
    cin >> T;
    for (int t = 0; t < T; ++t)
    {
        int S, N;
        cin >> S >> N;
        if (N > 0)
        {
            for (int n = 0; n < N; ++n)
            {
                int Q, P;
                cin >> Q >> P;
                S += (Q * P);
            }
        }
        cout << S << '\n';
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