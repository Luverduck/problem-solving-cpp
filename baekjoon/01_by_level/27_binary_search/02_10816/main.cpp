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

    // 숫자 카드의 개수 N
    int N;
    cin >> N;

    // 길이 N인 vector 생성
    vector<int> v(N);
    // 숫자 카드에 적혀있는 정수를 vector에 저장
    for(int i = 0; i < N; ++i)
        cin >> v[i];

    // vector 정렬
    sort(v.begin(), v.end());

    // 찾을 숫자 카드의 개수 M
    int M;
    cin >> M;

    // 찾을 숫자 카드의 정수
    int target;
    for(int i = 0; i < M; ++i)
    {
        // 찾을 숫자 카드의 정수를 저장
        cin >> target;
        // vector에서 해당 정수가 가장 마지막으로 발견되는 인덱스에서 처음 발견되는 인덱스를 뺀 값을 개수로 출력
        cout << upper_bound(v.begin(), v.end(), target) - lower_bound(v.begin(), v.end(), target) << " ";
    }
}