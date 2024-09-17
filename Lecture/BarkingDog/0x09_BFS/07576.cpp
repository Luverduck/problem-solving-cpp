#include <iostream>
#include <queue>

using namespace std;

// 박스 안의 토마토 위치를 저장할 배열
int box[1002][1002];
// 각각의 토마토가 익는데 걸린 일 수를 저장할 배열
int tomato[1002][1002];
// 익은 토마토의 좌표를 저장할 queue
queue<pair<int, int>> q;
// 탐색 방향 지정을 위한 x, y의 좌표 보정값 배열
int dx[4] {0, 1, 0, -1};
int dy[4] {1, 0, -1, 0};

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 박스의 가로 M, 세로 N의 길이
    int M, N;
    cin >> M >> N;

    // 박스 안 토마토 위치의 초기 상태 구성 (세로 i, 가로 j)
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < M; ++j)
        {
            cin >> box[i][j];
            // 익은 토마토인 경우(1)
            if(box[i][j] == 1)
                // queue에 해당 토마토의 좌표 저장
                q.push({i, j});
            // 안익은 토마토인 경우(0)
            if(box[i][j] == 0)
                // 토마토가 익는 데 걸린 일 수를 -1로 설정
                tomato[i][j] = -1;
        }
    }

    // 큐가 비어있을 때까지 반복
    while(!q.empty())
    {
        // queue의 맨 앞에 저장된 좌표를 cur에 저장한 후 꺼내기
        pair<int, int> cur = q.front();
        q.pop();
        // 현재 좌표 cur에 대하여 4방향 탐색
        for(int dir = 0; dir < 4; ++dir)
        {
            // 탐색 좌표 계산
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];
            // 현재 방향의 탐색 좌표의 요소가 탐색 범위를 벗어나면 다음 방향 탐색
            if(nx < 0 || nx >= N || ny < 0 || ny >= M) continue;
            // 이미 익은 토마토일 경우 다음 방향 탐색
            if(tomato[nx][ny] >= 0) continue;
            // 탐색 좌표의 토마토가 익는 데 걸린 일 수를 계산한 후 저장
            tomato[nx][ny] = tomato[cur.first][cur.second] + 1;
            // 방문한 현재 방향의 탐색 좌표를 queue에 저장
            q.push({nx, ny});
        }
    }

    // 토마토가 모두 익는 데 걸린 일 수
    int days = 0;
    for(int i = 0; i < N; ++i)
    {
        for(int j = 0; j < M; ++j)
        {
            // 안익은 토마토가 존재하는 경우
            if(tomato[i][j] == -1)
            {
                cout << -1;
                return 0;
            }
            // 토마토가 익는 데 걸린 일 수 갱신
            days = max(days, tomato[i][j]);
        }
    }

    // 상자 안의 토마토가 모두 익는 데 걸린 일 수 출력
    cout << days;
}