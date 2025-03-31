#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

// 정렬 기준 함수 (좌표의 값을 기준으로 오름차순 정렬)
int cmp(const pair<int, int>& p1, const pair<int, int>& p2)
{
    return p1.second < p2.second;
}

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 좌표의 개수
    int N;
    cin >> N;

    // 좌표를 인덱스와 함께 저장
    vector<pair<int, int>> v(N);
    for(int i = 0; i < N; ++i)
    {
        v[i].first = i;
        cin >> v[i].second;
    }

    // 좌표를 좌표의 값을 기준으로 오름차순 정렬
    sort(v.begin(), v.end(), cmp);

    // 좌표의 값을 좌표가 놓인 순서로 변경
    int pre = 1e9 + 1; // 이전에 압축한 좌표의 값을 기록할 변수
    int position = -1; // 좌표 압축값
    for(int i = 0; i < N; ++i)
    {
        // 좌표의 값이 이전에 좌표 압축한 좌표의 값과 같을 경우
        if(v[i].second == pre)
        {
            v[i].second = position; // 동일한 좌표 압축값 부여
            continue;
        }
        // 그 외의 경우
        pre = v[i].second; // 이전 좌표의 값 갱신
        v[i].second = ++position; // 증가된 좌표 압축값 부여
    }

    // 좌표를 인덱스를 기준으로 정렬
    sort(v.begin(), v.end());

    // 정렬된 좌표를 순서대로 출력
    for(auto& p : v)
        cout << p.second << " ";
}