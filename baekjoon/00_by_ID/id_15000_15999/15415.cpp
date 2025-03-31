#include <iostream>

using namespace std;

void solution()
{
    int W, N;
    cin >> W >> N;
    int res = 0;
    for (int n = 0; n < N; ++n)
    {
        int w, l;
        cin >> w >> l;
        res += w * l;
    }
    cout << res / W;
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