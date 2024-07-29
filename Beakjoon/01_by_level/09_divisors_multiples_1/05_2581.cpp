#include <iostream>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 입력 저장
    int M, N;
    cin >> M >> N;

    // n 이하의 수를 index로 나열한 배열 생성
    int prime[N + 1];

    // 배열의 2 ~ n번째 요소의 값을 1로 초기화
    for(int i = 2; i <= N; ++i)
        prime[i] = 1;

    // 에라토스테네스의 체 방법을 통해 index가 소수인 배열 요소의 값을 1로 갱신
    for(int i = 2; i <= N; ++i)
    {
        if(prime[i] == 1) // i가 소수일 경우
        {
            // index가 i의 배수인 배열 요소 값을 0으로 갱신
            for(int j = 2 * i; j <= N; j += i)
                prime[j] = 0;
        }
    }

    // 출력 변수
    int min = -1; // 소수들 중 최소값
    int sum = 0; // 소수들의 합

    // M 이상 N 이하의 소수들 중 최소값과 소수들의 합 계산
    for(int i = M; i <= N; ++i)
    {
        if(prime[i] == true)
        {
            sum += i;
            if(min == -1) // min이 -1일 경우
                min = i;  // 최소값 최초 갱신
        }
    }

    // 출력
    if(min == -1)
        cout << min;
    else
        cout << sum << "\n" << min;
}