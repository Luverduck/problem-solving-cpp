#include <iostream>
#include <utility>
#include <vector>
#include <algorithm>

using namespace std;

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

    // pair를 요소로 하는 길이 N인 벡터 생성
    vector<pair<int, int>> v(N);

    // 벡터의 i번 째 pair에 x, y 좌표 저장
    for(int i = 0; i < N; ++i)
        cin >> v[i].first >> v[i].second;

    // 벡터를 오름차순 정렬
    sort(v.begin(), v.end());

    // 정렬된 pair를 순서대로 출력
    for(const auto& p : v)
        cout << p.first << " " << p.second << "\n";
}