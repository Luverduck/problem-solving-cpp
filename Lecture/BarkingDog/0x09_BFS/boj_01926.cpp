#include <iostream>
#include <queue>

using namespace std;

// 그림의 상태를 저장할 배열
int painting[501][501];
// 방문 여부를 저장할 배열
bool visit[501][501];
// 방문한 좌표를 저장할 queue
queue<pair<int, int>> q;
// 탐색 방향 지정을 위한 x, y의 좌표 보정값 배열
int dx[4] {1, 0, -1, 0};
int dy[4] {0, 1, 0, -1};

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 세로 크기 n, 가로 크기 m
    int n, m;
    cin >> n >> m;

    // 그림의 초기 상태 구성
    for(int i = 0; i < n; ++i)
        for(int j = 0; j < m; ++j)
            cin >> painting[i][j];

    // 출력 변수
    int cnt = 0;        // 그림 수
    int max_area = 0;   // 가장 넓은 그림의 면적

    // 너비 우선 탐색 진행
    for(int i = 0; i < n; ++i)
    {
        for(int j = 0; j < m; ++j)
        {
            // 좌표 (i, j)가 색칠되지 않았거나 이미 방문했을 다음 위치로 이동
            if(painting[i][j] == 0 || visit[i][j] == 1) continue;
            // 좌표 (i, j)를 BFS의 시작점으로 설정
            visit[i][j] = true; // 좌표의 방문 여부를 true로 변경
            q.push({i, j});     // 방문한 좌표를 queue에 저장
            int cur_area = 1;   // 현재 그림 영역의 면적을 1로 초기화 (시작점의 면적)
            cnt++;              // 현재 그림 영역을 그림 수에 카운트
            // queue가 비어있을 때까지 진행
            while(!q.empty())
            {
                // queue의 맨 앞에 저장된 좌표를 cur에 저장한 후 꺼내기
                pair<int, int> cur = q.front();
                q.pop();
                // 현재 좌표 cur에 대하여 4방향 탐색
                for(int dir = 0; dir < 4; ++dir)
                {
                    // 방향 좌표 계산
                    int nx = cur.first + dx[dir];
                    int ny = cur.second + dy[dir];
            		// 다음 탐색 좌표의 요소가 탐색 범위를 벗어나면 다음 방향 탐색
                    if(nx < 0 || nx >= n || ny < 0 || ny >= m) continue;
                    // 다음 좌표를 이미 방문했거나 색칠되지 않은 영역일 경우 다음 방향 좌표 탐색
                    if(visit[nx][ny] == true || painting[nx][ny] != 1) continue;
                    // 좌표의 방문 여부를 true로 변경
                    visit[nx][ny] = true;
                    // 방문한 좌표를 queue에 저장
                    q.push({nx, ny});
                    // 현재 그림 영역의 넓이 값 증가
                    cur_area++;
                }
            }
            // 현재 그림 영역의 넓이와 이전의 넓이 최대값 중 더 큰 값으로 갱신
            max_area = max(max_area, cur_area);
        }
    }
    // 결과 출력
    cout << cnt << '\n' << max_area;
}