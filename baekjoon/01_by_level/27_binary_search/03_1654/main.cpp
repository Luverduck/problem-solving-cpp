#include <iostream>
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

    // 이미 가지고있는 랜선의 개수 K, 필요한 랜선의 개수 N
    int K, N;
    cin >> K >> N;

    // 입력받은 케이블의 길이 저장 및 케이블의 최대 길이 갱신
    int cables[K] { 0, };
    int max_length = -1;
    for(int k = 0; k < K; ++k)
    {
        cin >> cables[k];
        max_length = max(cables[k], max_length);
    }

    // 서로 다른 길이의 케이블 K개로 같은 길이의 케이블 N개를 만들 때 케이블의 단위 길이 최대값
    long long max_unit_length = 0;
    // 이진 탐색의 탐색 범위 시작(left)과 끝(right)
    long long left = 1;
    long long right = max_length;
    // 탐색 범위가 교차하기 전까지 반복
    while(left <= right)
    {
        // 탐색 범위의 중앙값
        long long middle = (left + right) / 2;

        // 중앙값을 단위 길이로 케이블을 잘랐을 때 케이블의 개수
        int cnt = 0;
        for(int k = 0; k < K; ++k)
            cnt += cables[k] / middle;

        // 잘라 만들어진 케이블의 개수가 필요한 케이블의 개수 N보다 클 경우
        if(cnt >= N) // ⭐ N개보다 많이 만드는 것도 N개를 만드는 것에 포함된다.
        {
            // 이진 탐색의 탐색 범위 시작(left)를 중앙값 + 1로 갱신
            left = middle + 1;
            // 케이블의 단위 길이 최대값을 중앙값과 이전에 구한 최대값 중 더 큰 값으로 갱신
            max_unit_length = max(max_unit_length, middle);
        }
        // 잘라 만들어진 케이블의 개수가 필요한 케이블의 개수 N보다 작은 경우
        else
            // 이진 탐색의 탐색 범위 끝(right)를 중앙값 - 1로 갱신
            right = middle - 1;
    }

    // 케이블의 단위 길이 최대값 출력
    cout << max_unit_length;
}