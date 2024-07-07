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

    // 가지고있는 카드의 개수
    int N;
    cin >> N;

    // 카드에 적힌 숫자를 벡터에 저장
    vector<int> v(N);
    for(int i = 0; i < N; ++i)
        cin >> v[i];

    // 이진탐색을 위해 벡터를 오름차순 정렬
    sort(v.begin(), v.end());

    // 탐색할 카드 숫자의 개수
    int M;
    cin >> M;

    // 이진탐색을 통해 벡터에 해당 카드 숫자가 저장되어있는지 탐색
    int target;
    for(int i = 0; i < M; ++i)
    {
        cin >> target;
        if(binary_search(v.begin(), v.end(), target))
            cout << "1 ";
        else
            cout << "0 ";
    }
}