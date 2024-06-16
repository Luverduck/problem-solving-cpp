#include <iostream>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 목적지 방 번호
    int N;
    cin >> N;

    // 현재 층 수 (1번방이 위치한 층을 1층으로)
    int level = 1;
    // 현재 층 수에서 가장 큰 방 번호
    int max = 1;

    // 목적지 방 번호가 현재 층 수에서 가장 큰 방 번호보다 큰 경우
    while(N > max)
    {
        // 다음 층으로 이동
        max += 6 * level; // 가장 큰 방 번호 갱신
        level++; // 층 수 갱신
    }

    // 최종 층 수 출력
    cout << level;
}