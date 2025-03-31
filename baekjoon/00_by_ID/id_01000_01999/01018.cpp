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

    int M, N;
    cin >> M >> N;

    string board[M];
    for (int m = 0; m < M; ++m)
        cin >> board[m];

    int cnt_min = 64;
    for (int x = 0; x <= M - 8; ++x)
    {
        for (int y = 0; y <= N - 8; ++y)
        {
            int cnt_BW = 0;
            int cnt_WB = 0;
            for (int i = 0; i < 8; ++i)
            {
                for (int j = 0; j < 8; ++j)
                {
                    if ((i + j) % 2 == 0)
                    {
                        if (board[x + i][y + j] != 'B') cnt_BW++;
                        if (board[x + i][y + j] != 'W') cnt_WB++;
                    }
                    else
                    {
                        if (board[x + i][y + j] != 'W') cnt_BW++;
                        if (board[x + i][y + j] != 'B') cnt_WB++;
                    }
                }
            }
            int cnt_area = min(cnt_BW, cnt_WB);
            cnt_min = min(cnt_min, cnt_area);
        }
    }
    cout << cnt_min;
}