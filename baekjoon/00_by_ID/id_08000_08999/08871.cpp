#include <iostream>

using namespace std;

void solution()
{
    int N;
    cin >> N;
    N++;

    // N개의 득점 라운드와 1개의 트라이얼 라운드
    // 득점 라운드당 2점 또는 3점을 얻음
    // 출력 : 최종 점수의 최소값과 최대값을 순서대로 출력
    cout << 2 * N << " " << 3 * N;
}

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    solution();
}