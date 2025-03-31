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

    // 정수의 개수 N
    int N;
    cin >> N;

    // 길이 N인 벡터 초기화
    vector<int> nums(N);
    // N개의 정수를 벡터에 저장
    for(int i = 0; i < N; ++i)
        cin >> nums[i];

    // 벡터 정렬
    sort(nums.begin(), nums.end());

    // 찾을 정수의 개수 M
    int M;
    cin >> M;

    // 입력받은 M개의 정수 각각이 벡터에 존재하는지 이진 탐색
    int temp;
    for(int i = 0; i < M; ++i)
    {
        cin >> temp;
        // 벡터에 해당 정수가 존재하면 1, 그렇지 않으면 0을 출력
        cout << binary_search(nums.begin(), nums.end(), temp) << "\n";
    }
}