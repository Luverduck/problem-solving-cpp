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

    // 정렬할 요소의 수 N 저장
    int N;
    cin >> N;

    // 정렬할 요소가 등장한 횟수를 저장할 배열
    int counting[10001] = { 0, };

    // 입력받은 요소의 등장 횟수를 저장 (배열의 index가 해당 요소의 값이 된다.)
    // * 예를 들어, 41이 등장하면 counting[41]의 값을 1만큼 증가시킨다.
    int count = 0;
    for(int i = 0; i < N; ++i)
    {
        cin >> count;
        counting[count]++;
    }

    // counting의 가장 낮은 index부터 index를 요소의 값만큼 반복하여 출력
    // * 예를 들어, counting[41] = 2인 경우 41을 2회 출력
    for(int i = 1; i < 10001; ++i)
    {
        if(counting[i] == 0)
            continue;
        for(int j = 0; j < counting[i]; ++j)
            cout << i << " ";
    }

    cout << "\n" << 40000000 / pow(10, 6);
}