#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 좌표값을 저장할 구조체 선언
struct Point
{
    int x, y;
};

// 정렬 기준 함수
int cmp(Point& p1, Point& p2)
{
    if(p1.y == p2.y)
        return p1.x < p2.x;
    return p1.y < p2.y;
}

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 좌표의 갯수 N
    int N;
    cin >> N;

    // Point를 요소로 하는 길이 N인 벡터 생성
    vector<Point> v(N);

    // 입력받은 좌표를 벡터의 i번째 Point에 저장
    for(int i = 0; i < N; ++i)
        cin >> v[i].x >> v[i].y;

    // 벡터를 정렬 기준 함수에 따라 정렬
    sort(v.begin(), v.end(), cmp);

    // 정렬된 pair를 순서대로 출력
    for(const auto& point : v)
        cout << point.x << " " << point.y << "\n";
}