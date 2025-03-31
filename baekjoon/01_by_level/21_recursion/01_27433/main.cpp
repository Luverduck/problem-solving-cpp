#include <iostream>

using namespace std;

// Factorial을 계산할 함수
long long factorial(long long n) // ⭐ int일 경우 계산 중 최대 표현 범위를 초과할 수 있음
{
    if(n > 1)
        return factorial(n - 1) * n;
    else
        return 1;
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
    int n;
    cin >> n;

	// factorial 계산
    long long ret = factorial(n);
	// ✅ 재귀 호출
	// N! = N * (N-1)!
	//	  = N * (N-1) * (N-2)!
	//    = ...

	// 결과값 출력
    cout << ret;
}