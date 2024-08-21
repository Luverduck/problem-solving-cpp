#include <iostream>
#include <deque>
#include <utility>

using namespace std;

int main() {
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 풍선의 수
    int N;
    cin >> N;

    // 풍선을 넣을 양방향 큐 생성
    deque<pair<int, int>> dq;

    // 풍선의 번호 i와 풍선에 적힌 이동 수 temp를 양방향 큐에 저장
    int temp;
    for(int i = 1; i <= N; ++i)
    {
        cin >> temp;
        dq.emplace_back(i, temp);
    }

    // 양방향 큐가 비어있을 때까지 반복
    while(!dq.empty())
    {
        // 현재 양방향 큐의 맨 앞 요소
        pair<int, int> el = dq.front();
        // 현재 양방향 큐의 맨 앞 요소의 번호(first) 출력 및 이동 수 저장
        cout << el.first << " ";
        int move = el.second;
        // 현재 양방향 큐의 맨 앞 요소 삭제
        dq.pop_front();

        // 삭제 후 양방향 큐가 비어있으면 반복 종료
        // ⭐ 불필요한 연산을 제거하기 위한 처리
        if(dq.empty()) break;

        // 이동 수 부호에 따른 추가 처리 후 저장
        // ⭐ 양방향 큐에서 맨 앞 요소를 제거하면 그 뒤에 있는 모든 요소가 한 칸씩 앞으로 이동하기 때문
        int cnt = move > 0 ? move - 1 : abs(move);
        // 이동 수 부호에 따라 서로 다른 처리
        for(int i = 0; i < cnt; ++i)
        {
            // 이동 수가 양수일 경우 오른쪽 회전
            // 맨 앞의 요소를 맨 뒤에 저장하는 방식으로 구현
            if(move > 0)
            {
                dq.emplace_back(dq.front());
                dq.pop_front();
            }
            // 이동 수가 음수일 경우 왼쪽 회전
            // 맨 뒤의 요소를 맨 앞에 저장하는 방식으로 구현
            else
            {
                dq.emplace_front(dq.back());
                dq.pop_back();
            }
        }
    }
}
