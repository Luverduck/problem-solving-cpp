#include <iostream>

using namespace std;

void solution()
{
    int N, T;
    cin >> N >> T;

    int res = 0;
    int time = 0;
    for (int n = 0; n < N; ++n)
    {
        int temp;
        cin >> temp;
        if (time + temp > T) break;
        res++;
        time += temp;
    }
    cout << res;
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