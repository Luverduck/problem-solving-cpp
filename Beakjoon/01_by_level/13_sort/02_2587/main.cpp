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

    // 입력받은 숫자를 저장할 배열
    int num[5] { 0, };

    // 숫자를 입력받아 배열에 저장
    int sum = 0;
    for(int i = 0; i < 5; ++i)
    {
        cin >> num[i];
        sum += num[i]; // 배열에 저장함과 동시에 합계 계산
    }

    // 배열을 오름차순으로 정렬
    sort(num, num + 5);

    // 입력받은 숫자들의 평균값과 중앙값 출력
    cout << (sum / 5) << "\n" << num[2];
}