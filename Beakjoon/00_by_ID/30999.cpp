#include <iostream>
#include <cmath>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int N, M;
    cin >> N >> M;

    string vote;
    int res = 0;
    for(int n = 0; n < N; ++n)
    {
        cin >> vote;
        int agree = 0;
        for(int m = 0; m < M; ++m)
            vote[m] == 'O' ? agree++ : agree--;
        if(agree >= 0) res++;
    }

    cout << res;
}