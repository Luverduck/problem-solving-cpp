#include <iostream>
#include <vector>

using namespace std;

void solution()
{
    int N, M;
    while (true)
    {
        cin >> N >> M;
        if (N == 0 && M == 0) break;

        vector<int> vA(N);
        vector<int> vB(M);

        for (int i = 0; i < N; ++i)
            cin >> vA[i];
        for (int i = 0; i < M; ++i)
            cin >> vB[i];

        int res = 0;
        int pa = 0, pb = 0;
        while (pa < N && pb < M)
        {
            if (vA[pa] > vB[pb]) pb++;
            else if (vA[pa] < vB[pb]) pa++;
            else
            {
                pa++;
                res++;
            }
        }
        cout << res << '\n';
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