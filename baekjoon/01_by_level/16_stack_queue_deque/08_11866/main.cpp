#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int main() {
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 입력으로 주어지는 N과 K를 저장
    int N, K;
    cin >> N >> K;

    // 큐에 1부터 N까지의 정수 저장
    queue<int> q;
    for(int i = 1; i <= N; ++i)
        q.push(i);

    // 큐에서 제거한 정수를 저장할 벡터
    vector<int> v;

    // 큐가 비어있을 때까지 반복
    while(!q.empty())
    {
        // 아래 처리를 K-1번 만큼 반복
        for(int i = 1; i <= K - 1; ++i)
        {
            // 큐의 맨 앞에 있는 요소를 다시 큐에 저장
            q.push(q.front());
            // 큐의 맨 앞에 있는 요소 삭제
            q.pop();
        }
        // K-1번 반복 후 큐의 맨 앞에 있는 요소를 벡터에 저장
        v.emplace_back(q.front());
        // K-1번 반복 후 큐의 맨 앞에 있는 요소를 큐에서 삭제
        q.pop();
    }

    // 벡터에 저장된 모든 요소를 형식에 따라 출력
    cout << "<";
    for(int i = 0; i < N - 1; ++i)
        cout << v[i] << ", ";
    cout << v[N - 1] << ">";
}
