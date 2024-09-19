#include <iostream>
#include <queue>

using namespace std;

// 술래가 해당 위치에 도달하기까지 걸리는 시간을 저장할 배열
int range[100001]; // 위치 : 0 ~ 100000
// 술래가 방문한 위치를 저장할 queue
queue<int> q;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 배열의 0번째부터 100000번째 요소까지 요소에 -1 대입
    fill(range, range + 100001, -1);

    // 수빈이의 위치 N, 동생의 위치 K
    int N, K;
    cin >> N >> K;

    // 수빈이가 있는 배열의 N번째 요소를 0으로 갱신
    range[N] = 0;
    // 수빈이의 위치 N을 방문 queue에 저장
    q.push(N);

    // 동생이 있는 배열의 K번째 요소가 갱신될 때까지 반복
    while(range[K] == -1)
    {
        // queue의 맨 앞에 저장된 좌표를 cur에 저장한 후 꺼내기
        int cur = q.front();
        q.pop();
        // 현재 좌표 cur에 대하여 이동할 수 있는 3가지 경우에 대한 갱신
        for(int nx : {cur - 1, cur + 1, 2 * cur})
        {
            // 다음 탐색 좌표의 요소가 탐색 범위를 벗어나면 다음 경우 탐색
            if(nx < 0 || nx > 100000) continue;
            // 다음 좌표가 이미 방문한 좌표인 경우 다음 경우 탐색
            if(range[nx] != -1) continue;
            // 시작점에서 해당 탐색 좌표까지의 거리를 저장
            range[nx] = range[cur] + 1;
            // 방문한 좌표를 queue에 저장
            q.push(nx);
        }
    }

    // 동생이 있는 배열의 K번째 요소 출력
    cout << range[K];
}