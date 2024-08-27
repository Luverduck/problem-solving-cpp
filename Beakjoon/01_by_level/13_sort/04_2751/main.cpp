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

    // 정렬할 요소의 수
    int N;
    cin >> N;

    // 동적 할당 배열 생성
    int* arr = new int[N];

    // 배열에 정렬할 요소 저장
    for(int i = 0; i < N; ++i)
        cin >> arr[i];

    // 요소를 오름차순 정렬
    sort(arr, arr + N);

    // 정렬 결과 출력
    for(int i = 0; i < N; ++i)
        cout << arr[i] << "\n";

    // 동적 할당 배열의 메모리 해제
    delete[] arr;
}