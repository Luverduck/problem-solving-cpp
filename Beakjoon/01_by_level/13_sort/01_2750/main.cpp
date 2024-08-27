#include <iostream>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 정렬할 숫자의 개수
    int N;
    cin >> N;

    // 정렬할 숫자를 배열에 저장
    int arr[N] { 0, };
    for(int i = 0; i < N; ++i)
        cin >> arr[i];

    // 루프 안에서 사용할 변수 선언
    int idx_min;    // 최소값의 인덱스
    int temp;       // 값의 교환 중 값을 저장하기 위한 위한 임시 메모리

    // 선택 정렬
    for(int i = 0; i < N; ++i)
    {
        // 최소값의 인덱스를 i로 설정
        idx_min = i;
        // 배열을 순회하며 값의 비교를 통해 최소값의 인덱스 갱신
        for(int j = i + 1; j < N; ++j)
        {
            if(arr[j] < arr[idx_min])
                idx_min = j;
        }
        // 최소값의 인덱스가 i가 아닌 경우 요소의 값 교환
        if(idx_min != i)
        {
            temp = arr[idx_min];
            arr[idx_min] = arr[i];
            arr[i] = temp;
        }
    }

    // 정렬 결과 출력
    for(int& n : arr)
        cout << n << "\n";
}