#include <iostream>
#include <queue>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 카드의 수
    int N;
    cin >> N;

    // 큐에 1 ~ N까지의 숫자 저장
    queue<int> q;
    for(int i = 1; i <= N; ++i)
        q.push(i);

    // 큐에 하나의 요소만 남을 때까지 반복
    while(q.size() > 1)
    {
        // 큐에서 맨 앞 요소 꺼내기
        q.pop();
        // 큐에서 현재 맨 앞의 요소를 다시 큐에 저장
        q.push(q.front());
        // 큐에서 맨 앞의 요소 꺼내기
        q.pop();
    }

    // 최종적으로 큐에 저장된 요소 출력
    cout << q.front();
}