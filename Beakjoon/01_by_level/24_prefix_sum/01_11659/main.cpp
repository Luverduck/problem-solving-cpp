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

    // 자연수의 개수 N과 누적 합을 구하는 횟수 M
    int N, M;
    cin >> N >> M;

    // 누적 합 배열 구성
    int nums[N] { 0, };
    for(int n = 0; n < N; ++n)
    {
        int temp;
        cin >> temp;
        nums[n + 1] = nums[n] + temp;
    }

    // 구간 합 계산
    int idx_start;
    int idx_end;
    for(int m = 0; m < M; ++m)
    {
        cin >> idx_start >> idx_end;
        cout << (nums[idx_end] - nums[idx_start - 1]) << '\n';
    }
}