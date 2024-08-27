#include <iostream>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 최대값
    int max = -1;
    // 최대값의 위치
    int x, y;
    // 최대값 비교를 위한 임시 변수
    int temp;

    // 9 * 9 형태의 이차원 배열 입력을 순회하며 최대값 갱신
    for(int i = 0; i < 9; ++i)
    {
        for(int j = 0; j < 9; ++j)
        {
            cin >> temp;
            if(temp > max)
            {
                max = temp;
                x = i;
                y = j;
            }
        }
    }

    // 최대값과 index를 보정한 배열의 위치를 출력한다.
    cout << max << "\n" << x + 1 << " " << y + 1;
}