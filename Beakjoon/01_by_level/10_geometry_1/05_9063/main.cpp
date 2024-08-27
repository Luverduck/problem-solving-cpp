#include <iostream>
#include <cmath>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 입력 좌표의 수
    int N;
    cin >> N;

    // x, y 좌표의 최대값과 최소값 초기화
    int max_x = -10001, max_y = -10001;
    int min_x = 10001, min_y = 10001;

    // x, y 좌표의 최대값과 최소값 찾기
    int temp_x, temp_y;
    while(cin >> temp_x >> temp_y)
    {
        // x의 최대와 최소
        max_x = max(max_x, temp_x);
        min_x = min(min_x, temp_x);
        // y의 최대와 최소
        max_y = max(max_y, temp_y);
        min_y = min(min_y, temp_y);
    }

    // 직사각형의 넓이 출력
    cout << (max_x - min_x) * (max_y - min_y);
}