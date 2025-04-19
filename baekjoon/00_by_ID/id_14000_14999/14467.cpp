#include <iostream>

using namespace std;

void solution()
{
    int cows[11];
    fill(cows, cows + 11, -1);

    int N;
    cin >> N;
    int res = 0;
    for (int n = 0; n < N; ++n)
    {
        int no, pos;
        cin >> no >> pos;
        if (cows[no] == -1)
            cows[no] = pos;
        else if (cows[no] != pos)
        {
            res++;
            cows[no] = pos;
        }
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