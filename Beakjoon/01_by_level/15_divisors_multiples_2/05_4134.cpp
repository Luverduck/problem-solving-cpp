#include <iostream>
#include <cmath>

using namespace std;

bool CheckPrimeNumber(long long& n)
{
    // 0, 1은 소수가 아니므로 false
    if(n < 2) return false;
    // 1과 n 외 정수를 약수로 가질 경우 false
    for(long long i = 2; i <= sqrt(n); ++i)
        if(n % i == 0) return false;
    // 그 외의 경우 n은 소수(Prime Number)
    return true;
}

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 테스트 케이스의 수
    int N;
    cin >> N;

    // 다음 소수 찾기
    long long x;
    for(int i = 0; i < N; ++i)
    {
        // 입력을 x에 저장
        cin >> x;
        // 현재 x에 저장된 값이 소수인지 판정
        while(!CheckPrimeNumber(x))
            x++; // 소수가 아닐 경우 x의 값을 1만큼 증가
        // 현재 x에 저장된 값이 소수일 경우 출력
        cout << x << "\n";
    }
}