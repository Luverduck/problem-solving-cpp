#include <iostream>
#include <queue>

using namespace std;

// 미로의 상태를 저장할 배열
int miro[101][101];
// 시작점 (0, 0)으로부터의 거리(칸 수)를 저장할 배열
int dist[101][101];
// 방문한 좌표를 저장할 queue
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

    // 행의 수 N, 열의 수 M
    int N, M;
    cin >> N >> M;

    // 미로의 초기 상태 구성
    for(int i = 0; i < N; ++i)
    {
        string input;
        cin >> input;
        for(int j = 0; j < M; ++j)
            miro[i][j] = input[j] - '0';
    }

    // 거리 배열의 모든 요소를 -1(방문 안함)으로 설정
    for(int i = 0; i < N; ++i)
        fill(dist[i], dist[i] + M, -1);

    // 미로의 탐색 시작점 설정
    dist[0][0] = 1;
    q.push({0, 0});

    // queue가 비어있을 때까지 진행
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
            // 현재 방향의 탐색 좌표가 방문한 적이 있거나 막힌 길인 경우 다음 방향 탐색
            if(dist[nx][ny] != -1 || miro[nx][ny] == 0) continue;
            // 그 외의 경우
            // 시작점에서 현재 방향의 탐색 좌표까지의 거리를 저장
            dist[nx][ny] = dist[cur.first][cur.second] + 1;
            // 방문한 현재 방향의 탐색 좌표를 queue에 저장
            q.push({nx, ny});
        }
    }
    // 시작점으로부터의 거리를 저장하는 배열에서 목적지 요소의 값 출력
    cout << dist[N - 1][M - 1];
}