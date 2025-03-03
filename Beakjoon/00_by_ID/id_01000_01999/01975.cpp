#include <iostream>

using namespace std;

void solution()
{
    int T;
    cin >> T;
    for (int t = 0; t < T; ++t)
    {
        int N;
        cin >> N;
        int res = 0;
        for (int n = 2; n <= N; ++n)
        {
            int temp = N;
            while (temp)
            {
                if (temp % n != 0) break;
                temp /= n;
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