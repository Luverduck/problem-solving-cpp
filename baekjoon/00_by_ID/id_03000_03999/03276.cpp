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

    int N;
    cin >> N;

    int min_r = 1, min_c = 1;
    int min_rc_sum = 10000;
    for (int r = 1; r < N; ++r)
    {
        int c = N % r == 0 ? N / r : N / r + 1;
        if (r + c > min_rc_sum) continue;
        min_rc_sum = r + c;
        min_r = r;
        min_c = c;
    }
    cout << min_r << " " << min_c;
}