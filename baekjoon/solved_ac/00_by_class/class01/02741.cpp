#include <iostream>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 입력 N
    int N;
    cin >> N;

    // 1부터 N까지 출력
    for(int i = 1; i <= N; ++i)
        cout << i << '\n';
}