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

    // 출력할 행 R과 열 C 저장
    int R, C;
    cin >> R >> C;

    // 결과 출력
    for(int i = 0; i < R; ++i)
    {
        for(int j = 0; j < C; ++j)
            cout << '*';
        cout << '\n';
    }
}