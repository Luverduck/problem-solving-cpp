#include <iostream>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 입력값 저장
    int N, M;
    cin >> N >> M;

    // 길이 N인 카드 배열 초기화
    int cards[N] { 0, };

    // 입력값을 카드 배열 요소에 대입
    for(int i = 0; i < N; ++i)
        cin >> cards[i];

    // 카드 3장의 숫자 합의 최대값 초기화
    int sum_max = -1;
    // 카드 3장의 숫자 합의 임시값 초기화
    int temp = 0;
    // 목표값인 M을 넘지 않으며 M에 최대한 가까운 카드 3장의 숫자 합 탐색
    for(int i = 0; i < N - 2; ++i)
    {
        for(int j = i + 1; j < N - 1; ++j)
        {
            for(int k = j + 1; k < N; ++k)
            {
                // 카드 3장의 숫자 합 계산
                temp = cards[i] + cards[j] + cards[k];
                // 숫자 합이 M을 넘지 않으며 이전에 갱신한 값보다 큰 경우
                if(temp <= M && temp > sum_max)
                {
                    // 숫자 합의 최대값 갱신
                    sum_max = temp;
                    // 숫자 합이 목표값과 같을 경우 루프 종료
                    if(sum_max == M) break;
                }
            }
        }
    }

    // 결과값 출력
    cout << sum_max;
}