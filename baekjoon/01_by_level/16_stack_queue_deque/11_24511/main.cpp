#include <iostream>
#include <deque>

using namespace std;

int main() {
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 자료구조의 수 N
    int N;
    cin >> N;

    // n번째 자료구조의 동작 방식 (0 : 큐, 1 : 스택)
    int action[N] { 0, };
    for(int n = 0; n < N; ++n)
        cin >> action[n];

    // 양방향 큐 생성 (큐와 스택의 기능을 모두 수행할 수 있음)
    deque<int> dq;

    // n번째 자료구조의 동작 방식이 큐일 때만 양방향 큐에 저장
    int temp;
    for(int n = 0; n < N; ++n)
    {
        cin >> temp;
        if(action[n] == 1) continue;
        dq.emplace_front(temp); // ⭐ 역순 삽입
    }

    // queuestack에 저장할 요소의 수
    int M;
    cin >> M;

    // 양방향 큐의 맨 뒤에 요소 저장 및 맨 앞의 요소 출력 후 삭제
    int x;
    for(int m = 0; m < M; ++m)
    {
        cin >> x;
        dq.emplace_back(x);
        cout << dq.front() << ' ';
        dq.pop_front();
    }
}
