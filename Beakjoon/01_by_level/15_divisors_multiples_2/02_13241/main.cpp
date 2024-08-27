#include <iostream>

using namespace std;

long long gcb(long long a, long long b)
{
    // 유클리드 알고리즘을 사용하여 최대 공약수 계산
    while(b != 0)
    {
        long long r = a % b;
        a = b;
        b = r;
    }
    return a;
}

long long lcm(long long a, long long b)
{
    // 유클리드 알고리즘으로 계산한 최대 공약수를 이용하여 최소 공배수 계산
    return a * b / gcb(a, b);
}

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 입력받은 정수를 A, B에 저장
    long long A, B;
    cin >> A >> B;

    // A, B의 최소 공배수 출력
    cout << lcm(A, B);
}