#include <iostream>

using namespace std;

void solution()
{
    int N;
    cin >> N;

    int res = 0, prev_num = 0, prev = 1;
    for (int n = 0; n < N; ++n)
    {
        int cur_num;
        cin >> cur_num;

        if (cur_num == prev_num) prev *= 2;
        else prev = 2;
        prev_num = cur_num;
        res += prev;

        if (res < 100) continue;
        res = 0;
        prev = 1;
        prev_num = 0;
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