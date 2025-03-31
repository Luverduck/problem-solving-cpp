#include <iostream>

using namespace std;

// Fibonacci 수를 계산할 함수
int fibonacci(int n)
{
    // n이 2보다 큰 경우
    if(n >= 2)
        return fibonacci(n - 1) + fibonacci(n - 2);
    // n이 1인 경우 F1 = 1
    if(n == 1)
        return 1;
    // n이 0인 경우 F0 = 0
    return 0;
}

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 입력
    int N;
    cin >> N;

    // fibonacci 계산
    int ret = fibonacci(N);
    // ✅ 재귀 호출
    // Fn = Fn-1 + Fn-2
    //    = (Fn-2 + Fn-3) + (Fn-3 + Fn-4)
    //    = ...

    // 결과값 출력
    cout << ret;
}