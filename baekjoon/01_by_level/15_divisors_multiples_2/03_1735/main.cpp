#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    // a와 b의 최대 공약수를 반환
    while(b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
}

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 분수 입력 저장 (A / B와 C / D)
    int A, B, C, D;
    cin >> A >> B >> C >> D;

    // 통분값 계산
    int P = A * D + B * C;
    int Q = B * D;

    // 분자 P와 분모 Q의 최대 공약수 계산
    int gcd_PQ = gcd(P, Q);

    // 기약분수 출력
    cout << (P / gcd_PQ) << " " << (Q / gcd_PQ);
}