#include <iostream>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int area[100][100] { 0,};

    // 입력의 개수
    int n;
    cin >> n;

    // 색종이가 붙은 면적
    int area_colored = 0;

    // 색종이가 붙을 위치의 시작점
    int x, y;
    while(cin >> x >> y)
    {
        for(int i = y; i < y + 10; ++i)
        {
            for(int j = x; j < x + 10; ++j)
            {
                // 색종이가 붙어있지 않다면
                if(area[i][j] == 0)
                {
                    // 색종이가 붙어있음(1)로 갱신
                    area[i][j] = 1;
                    // 색종이가 붙은 면적에 가산
                    area_colored++;
                }
            }
        }
    }

    // 색종이가 붙은 면적 출력
    cout << area_colored;
}