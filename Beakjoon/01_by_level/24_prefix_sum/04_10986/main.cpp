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

    // 수의 개수 N, 구간 합을 나눌 수 M
    int N, M;
    cin >> N >> M;

    // 누적합
    long long prefix_sum = 0;
    // 누적합을 M으로 나눈 나머지(0 ~ M-1)를 index로 하는 배열
    long long remain[M] { 1, }; // 요소의 값은 해당 나머지의 빈도

    // 누적합을 M으로 나눈 나머지의 빈도 분포 계산
    int temp;
    for(int n = 0; n < N; ++n)
    {
        cin >> temp;
        // n번째 수까지의 누적합 계산
        prefix_sum += temp;
        // 누적합을 M으로 나눈 나머지를 배열의 index로 하는 요소에 가산
        remain[prefix_sum % M]++;
    }

    // 구간 합이 M으로 나누어 떨어지는 순서쌍의 수 계산
    // ⭐ 누적합을 M으로 나눈 나머지가 같은 요소끼리의 구간 합은 M으로 나누어 떨어진다.
    long long result = 0;
    for(int i = 0; i < M; ++i)
        // 나머지 m의 빈도 remain[m]에 대하여 remain[m] Combination 2 의 합 계산
        result += (remain[i] * (remain[i] - 1)) / 2;

    // 결과 출력
    cout << result;
}