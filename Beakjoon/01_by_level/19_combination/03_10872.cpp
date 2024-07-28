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

    // 입력 정수 N
    int N;
    cin >> N;

    // N! = N * (N-1) * (N-2) * ... * 3 * 2 * 1
    long long result = 1;
    for(int i = 2; i <= N; ++i)
        result *= i;

    // N! 결과값 출력
    cout << result;
}