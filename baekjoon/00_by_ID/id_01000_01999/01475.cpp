#include <iostream>
#include <cmath>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 숫자 0 ~ 9 각각의 개수를 저장할 배열
    int nums[10] { 0, };

    // 방 번호
    int no;
    cin >> no;

    // 방 번호에 포함된 숫자 0 ~ 9 각각의 개수 계산
    while(no > 0)
    {
        nums[no % 10]++;
        no /= 10;
    }

    // 숫자 6과 숫자 9는 서로를 대체할 수 있으므로 2로 나눈 후 반올림한 값을 필요한 세트 수로 한다.
    int temp = round((nums[6] + nums[9]) / 2.0);
    nums[6] = temp;
    nums[9] = temp;

    // 가장 많이 포함된 숫자의 개수 탐색
    int cnt_max = 0;
    for(int i = 0; i < 10; ++i)
        if(nums[i] > cnt_max)
            cnt_max = nums[i];

    // 결과 출력
    cout << cnt_max;
}