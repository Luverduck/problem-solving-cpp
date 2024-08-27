#include <iostream>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 이동할 블럭 수 저장
    int X;
    cin >> X;

    // 1층부터 시작
    int n = 1;
    // 층을 이동할 때마다 이동할 블럭 수에서 감산
    while(X > n)
    {
        X -= n;
        n++;
    }

    // n 층의 X번째 블럭 출력 ( n의 홀/짝수 여부에 따라 시작점이 다름 )
    if(n % 2 == 0)  // 짝수일 경우 1행, n열에서 시작
        cout << X << "/" << n - X + 1;
    else            // 홀수일 경우 n행, 1열에서 시작
        cout << n - X + 1 << "/" << X;
}