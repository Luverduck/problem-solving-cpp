#include <iostream>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, a, d, g;
    cin >> N;
    int res = -1;
    for(int n = 0; n < N; ++n)
    {
        cin >> a >> d >> g;
        int score = a * (d + g);
        if (a == d + g) score *= 2;
        res = max(res, score);
    }
    cout << res;
}