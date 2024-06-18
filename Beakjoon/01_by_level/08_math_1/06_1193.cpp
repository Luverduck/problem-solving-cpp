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
    int level = 1;
    // 층을 이동할 때마다 이동할 블럭 수에서 감산
    while(X > level)
    {
        X -= level;
        level++;
    }

    // 도달한 층 수가 홀수/짝수인지에 따라 목적지 위치 출력
    if(level % 2 == 0)  // 짝수일 경우 1행, level 열에서 시작
        cout << X << "/" << level - X + 1;
    else                // 홀수일 경우 level 행, 1열에서 시작
        cout << level - X + 1 << "/" << X;
}