#include <iostream>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 입력값을 저장
    int a, b, c, d, e, f;
    cin >> a >> b >> c >> d >> e >> f;

    // x, y의 범위 [-999, 999]에 대하여 완전 탐색 진행
    for(int i = -999; i <= 999; ++i)
    {
        for(int j = -999; j <= 999; ++j)
        {
            // 해를 발견할 경우
            if(a * i + b * j == c && d * i + e * j == f)
            {
                cout << i << " " << j;  // x, y 좌표 출력
                break;                  // 종료
            }
        }
    }
}