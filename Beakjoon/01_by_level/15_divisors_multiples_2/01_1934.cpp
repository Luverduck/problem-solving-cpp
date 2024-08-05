#include <iostream>

using namespace std;

int gcb(int a, int b)
{
    // 유클리드 알고리즘을 이용한 최대 공약수 계산
    while(b != 0)
    {
        int r = a % b;
        a = b;
        b = r;
    }
    return a;
};

int lcm(int a, int b)
{
    // 최대 공약수를 구한 후 최대 공약수를 이용하여 최소 공배수 반환
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

    // 테스트 케이스의 수
    int T;
    cin >> T;

    // A와 B의 최소 공배수를 출력
    int A, B;
    for(int i = 0; i < T; ++i)
    {
        cin >> A >> B;
        cout << lcm(A, B) << '\n';
    }
}