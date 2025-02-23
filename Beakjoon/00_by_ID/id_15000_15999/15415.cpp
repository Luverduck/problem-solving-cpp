#include <iostream>

using namespace std;

void solution()
{
    int W, N;
    cin >> W >> N;
    int res = 0;
    for (int n = 0; n < N; ++n)
    {
        int wi, li;
        cin >> wi >> li;
        res += wi * li;
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