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
    int N;
    cin >> N;

    // N의 약수는 N의 제곱근을 기준으로 대칭이므로 i의 범위를 2부터 N의 제곱근까지로 한정
    for(int i = 2; i * i <= N; ++i)
    {
        while(N % i == 0) // N이 i로 나누어 떨어지지 않을 때까지 반복
        {
            cout << i << "\n"; // N이 i로 나누어 떨어지면 소인수
            N /= i; // N에서 i를 나머지 연산한 결과 대입 (찾아낸 소인수 제거)
        }
    }

    // N의 최종값이 1보다 큰 경우 (N이 N의 제곱근보다 큰 소수일 경우)
    if(N > 1)
        cout << N << "\n";
}