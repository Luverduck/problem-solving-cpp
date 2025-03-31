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

    // 창문의 개수와 사람의 수 N
    int N;
    cin >> N;

    // 열려있는 창문의 수
    int cnt = 0;
    for(int i = 1; i * i <= N; ++i)
        cnt++;

    // 결과 출력
    cout << cnt;
}