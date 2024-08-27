#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 세 변의 길이를 저장하기 위한 배열
    int arr[3] { 0, };

    // 세 변의 길이 저장
    for(int i = 0; i < 3; ++i)
        cin >> arr[i];

    // 세 변의 길이를 오름차순으로 정렬
    sort(arr, arr + 3);

    // 삼각형의 조건을 만족하는지 여부에 따라 서로 다른 출력
    // * 삼각형의 조건 : 작은 변부터 p, q, r이라 할 때 p + q > r을 만족해야 한다.
    // i) p + q > r인 경우
    if(arr[0] + arr[1] > arr[2])
        cout << (arr[0] + arr[1] + arr[2]);     // p + q + r
    // ii) p + q <= r인 경우 r이 가질 수 있는 최대값은 p + q - 1이다.
    else
        cout << (2 * (arr[0] + arr[1]) - 1);    // p + q + (p + q - 1)
}