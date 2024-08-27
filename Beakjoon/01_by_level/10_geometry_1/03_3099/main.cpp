#include <iostream>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 입력 좌표 저장
    int x1, y1;
    int x2, y2;
    int x3, y3;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

    // 나머지 좌표 출력
    cout << (x1 ^ x2 ^ x3) << " " << (y1 ^ y2 ^ y3);
}