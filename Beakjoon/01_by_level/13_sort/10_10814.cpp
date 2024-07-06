#include <iostream>
#include <vector>
#include <utility>
#include <string>
#include <algorithm>

using namespace std;

// 정렬 기준 함수
int cmp(const pair<int, string>& p1, const pair<int, string>& p2)
{
    return p1.first < p2.first;
}

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 회원 수
    int N;
    cin >> N;

    // 회원의 나이, 이름을 저장할 벡터 선언 및 회원 정보 저장
    vector<pair<int, string>> v(N);
    for(int i = 0; i < N; ++i)
        cin >> v[i].first >> v[i].second;

    // 벡터를 정렬 기준 함수에 따라 정렬 (안정 정렬)
    stable_sort(v.begin(), v.end(), cmp);

    // 정렬된 요소를 순서대로 출력
    for(pair<int, string>& p : v)
        cout << p.first << " " << p.second << "\n";
}