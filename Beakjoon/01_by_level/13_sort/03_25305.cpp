#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 응시자 수 N, 상을 받는 사람의 수 k 저장
    int N, k;
    cin >> N >> k;

    // 배열에 응시자의 점수 저장
    int score[N] { 0, };
    for(int i = 0; i < N; ++i)
        cin >> score[i];

    // 배열의 요소를 내림차순 정렬
    sort(score, score + N, greater<>());

    // 컷트라인 점수 출력
    cout << score[k - 1];
}