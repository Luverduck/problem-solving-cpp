#include <iostream>
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
    cout.tie(nullptr);

    // 변수 선언
    int N, M, target;

    // 길이 N인 vector 생성
    cin >> N;
    vector<int> v(N);

    // 카드에 적힌 숫자를 vector에 저장
    for(int i = 0; i < N; ++i)
        cin >> v[i];

    // vector를 오름차순 정렬
    sort(v.begin(), v.end());

    // 정렬된 vector에서 target이 등장하는 첫 index와 마지막 index의 차이를 출력
    cin >> M;
    for(int i = 0; i < M; ++i)
    {
        cin >> target;
        cout << upper_bound(v.begin(), v.end(), target) - lower_bound(v.begin(), v.end(), target) << " ";
    }
}