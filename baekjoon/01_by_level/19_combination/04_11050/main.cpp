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

    // 입력 정수 N, K
    int N, K;
    cin >> N >> K;

    // N Combination K 계산
    // ⭐ N Combination (K+1) = N Combination K * (N-K) / (K+1)
    int result = 1;
    for(int i = 0; i < K; ++i)
    {
        result *= (N - i);
        result /= (i + 1);
    }

    // N Combination K의 계산 결과값 출력
    cout << result;
}