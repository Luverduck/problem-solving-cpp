#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int T;
    cin >> T;
    for(int t = 0; t < T; ++t)
    {
        int N, M;
        cin >> N >> M;
        int res = 1;
        for (int i = 0; i < N; ++i)
        {
            res *= M - i;
            res /= i + 1;
        }
        cout <<  res << '\n';
    }
}