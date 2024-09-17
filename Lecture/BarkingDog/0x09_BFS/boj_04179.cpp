#include <iostream>
#include <queue>

using namespace std;

// 미로의 상태를 저장할 배열
char miro[1001][1001];
// 미로의 각 위치에 불이 붙는 시간에 대한 배열
int fire[1001][1001];
// 미로의 각 위치에 지훈이가 방문하는 시간에 대한 배열
int visit[1001][1001];
// 불이 붙는 위치를 기록하기 위한 queue
queue<pair<int, int>> q_fire;
// 지훈이가 방문한 위치를 기록하기 위한 queue
queue<pair<int, int>> q_visit;
// 탐색 방향 지정을 위한 x, y의 좌표 보정값 배열
int dx[4] = { 1, 0, -1, 0};
int dy[4] = { 0, 1, 0, -1};

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 미로의 행 R, 열 C
    int R, C;
    cin >> R >> C;

    // 방문 시간에 대한 배열 초기화
    for(int r = 0; r <= R; ++r)
    {
        fill(fire[r], fire[r] + C, -1);
        fill(visit[r], visit[r] + C, -1);
    }

    // 미로의 초기 상태 구성
    for(int r = 0; r < R; ++r)
    {
        string input;
        cin >> input;
        for(int c = 0; c < C; ++c)
        {
            // 미로에서 해당 위치의 초기 상태를 배열 miro에 저장
            miro[r][c] = input[c];
            // 초기 상태가 벽(#)일 경우 다음으로 이동
            if(miro[r][c] == '#') continue;
            // 초기 상태가 불(F)일 경우
            if(miro[r][c] == 'F')
            {
                // 배열 fire의 해당 위치 요소를 0으로 초기화
                fire[r][c] = 0;
                // 불의 방문 queue에 해당 위치 저장
                q_fire.push({r, c});
            }
            // 초기 상태가 지훈(J)일 경우
            if(miro[r][c] == 'J')
            {
                // 배열 visit의 해당 위치 요소를 0으로 초기화
                visit[r][c] = 0;
                // 지훈이의 방문 queue에 해당 위치 저장
                q_visit.push({r, c});
            }
        }
    }

    // 불에 대한 BFS 진행
    while(!q_fire.empty())
    {
        // queue의 맨 앞에 저장된 좌표를 cur에 저장한 후 꺼내기
        pair<int, int> cur = q_fire.front();
        q_fire.pop();
        // 현재 좌표 cur에 대하여 4방향 탐색
        for(int dir = 0; dir < 4; ++dir)
        {
            // 탐색 좌표 계산
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];
            // 다음 탐색 좌표의 요소가 탐색 범위를 벗어나면 다음 방향 탐색
            if(nx < 0 || nx >= R || ny < 0 || ny >= C) continue;
            // 다음 좌표를 이미 방문했거나 벽(#)인 경우 다음 방향 탐색
            if(fire[nx][ny] >= 0 || miro[nx][ny] == '#') continue;
            // 미로의 해당 위치에 불이 붙는 시간 저장
            fire[nx][ny] = fire[cur.first][cur.second] + 1;
            // 불이 붙은 위치를 불의 방문 queue에 저장
            q_fire.push({nx, ny});
        }
    }

    // 지훈이에 대한 BFS 진행
    while(!q_visit.empty())
    {
        // queue의 맨 앞에 저장된 좌표를 cur에 저장한 후 꺼내기
        pair<int, int> cur = q_visit.front();
        q_visit.pop();
        // 현재 좌표 cur에 대하여 4방향 탐색
        for(int dir = 0; dir < 4; ++dir)
        {
            // 탐색 좌표 계산
            int nx = cur.first + dx[dir];
            int ny = cur.second + dy[dir];
            // 다음 탐색 좌표의 요소가 탐색 범위를 벗어나면 미로 탈출 성공
            if(nx < 0 || nx >= R || ny < 0 || ny >= C)
            {
                // 해당 위치까지 걸린 시간에 탈출 시간(1초)를 더한 시간 출력
                cout << (visit[cur.first][cur.second] + 1);
                // 종료
                return 0;
            }
            // 다음 좌표를 이미 방문했거나 벽(#)인 경우 다음 방향 탐색
            if(visit[nx][ny] >= 0 || miro[nx][ny] == '#') continue;
            // 다음 좌표에 불이 붙어있으면서 불이 붙은 시간이 방문하려는 시간보다 앞설 경우 다음 방향 탐색
            if(fire[nx][ny] != -1 && fire[nx][ny] <= visit[cur.first][cur.second] + 1) continue;
            // 미로의 해당 위치에 지훈이가 방문한 시간 저장
            visit[nx][ny] = visit[cur.first][cur.second] + 1;
            // 지훈이가 방문한 위치를 지훈이의 방문 queue에 저장
            q_visit.push({nx, ny});
        }
    }

    // 루프 안에서 프로그램이 종료되지 않은 경우 탈출 불가능
    cout << "IMPOSSIBLE";
}