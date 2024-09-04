#include <iostream>
#include <climits>
#include <cmath>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 온도를 측정한 날짜의 총 수 N
    // 온도의 합을 구하기 위한 연속적인 날짜의 수 K
    int N, K;
    cin >> N >> K;

    // 누적합 배열 초기화
    int prefix_sum[N + 1] { 0, };

    // 누적합 배열에 온도의 누적합 저장
    int temp;
    for(int n = 0; n < N; ++n)
    {
        cin >> temp;
        prefix_sum[n + 1] = prefix_sum[n] + temp;
    }

    // 연속적인 K일 간의 온도의 합 중 최대값 탐색
    int range_sum_max = INT_MIN;
    for(int i = 0; i + K <= N; ++i)
        range_sum_max = max(range_sum_max, prefix_sum[i + K] - prefix_sum[i]);

    // 연속적인 K일 간의 온도의 합 중 최대값 출력
    cout << range_sum_max;
}