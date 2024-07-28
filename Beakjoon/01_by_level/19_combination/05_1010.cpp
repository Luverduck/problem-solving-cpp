#include <iostream>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 테스트 케이스의 수
    int T;
    cin >> T;

    // 동쪽 사이트의 수 N, 서쪽 사이트의 수 M
    int N, M;
    for(int i = 0; i < T; ++i)
    {
        cin >> N >> M;
        // M Combination N 계산
        long long result = 1;
        for(int j = 0; j < N; ++j)
        {
            // ⭐ 정수 오버플로우를 방지하기 위해 곱 연산과 나눗셈 연산을 병행
            result *= (M - j);
            result /= (j + 1);
        }
        // M Combination N 결과 출력
        cout << result << " ";
    }
}