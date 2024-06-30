#include <iostream>
#include <string>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // M, N의 값 저장
    int M, N;
    cin >> M >> N;

    // 보드 정보 저장
    string board[M];
    for(int i = 0; i < M; ++i)
        cin >> board[i];

    // 8X8 영역에 대하여 다시 칠해야 하는 정사각형의 개수 초기화
    int cnt_min = 64;
    for(int x = 0; x <= M - 8; ++x)
    {
        for(int y = 0; y <= N - 8; ++y)
        {
            // 체스판이 'B'로 시작하는 경우 다시 칠해야 하는 정사각형의 개수
            int cnt_BW = 0;
            // 체스판이 'W'로 시작하는 경우 다시 칠해야 하는 정사각형의 개수
            int cnt_WB = 0;
            for(int i = 0; i < 8; ++i)
            {
                for(int j = 0; j < 8; ++j)
                {
                    // 짝수번 째 정사각형에 대하여
                    if((i + j) % 2 == 0)
                    {
                        // 색이 'B'가 아닌 경우 (체스판이 'B'로 시작하는 경우)
                        if(board[x + i][y + j] != 'B')
                            cnt_BW++; // 다시 칠해야 하는 정사각형의 개수에 추가
                        // 색이 'W'가 아닌 경우 (체스판이 'W'로 시작하는 경우)
                        if(board[x + i][y + j] != 'W')
                            cnt_WB++; // 다시 칠해야 하는 정사각형의 개수에 추가
                    }
                    // 홀수번 째 정사각형에 대하여
                    else
                    {
                        // 색이 'W'가 아닌 경우 (체스판이 'B'로 시작하는 경우)
                        if(board[x + i][y + j] != 'W')
                            cnt_BW++; // 다시 칠해야 하는 정사각형의 개수에 추가
                        // 색이 'B'가 아닌 경우 (체스판이 'W'로 시작하는 경우)
                        if(board[x + i][y + j] != 'B')
                            cnt_WB++; // 다시 칠해야 하는 정사각형의 개수에 추가
                    }
                }
            }
            // 다시 칠해야 하는 정사각형의 개수가 작은 경우를 현재 영역에서의 최소값으로 결정
            int cnt_area = cnt_BW < cnt_WB ? cnt_BW : cnt_WB;
            // 다시 칠해야 하는 정사각형의 개수 갱신
            if(cnt_area < cnt_min)
                cnt_min = cnt_area;
        }
    }

    // 결과 출력
    cout << cnt_min;

    return 0;
}