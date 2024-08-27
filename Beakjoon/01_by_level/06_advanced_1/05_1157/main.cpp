#include <iostream>
#include <string>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    string str;
    cin >> str;

    // 배열 생성 ('A'부터 'Z'까지의 문자가 index에 대응)
    int arr['Z' - 'A' + 1] = { 0 };

    // 문자열을 순회하며 해당 문자열의 index에 값을 1만큼 증가시킴
    for(int i = 0; i < str.length(); i++)
    {
        if(str[i] < 'a')
            arr[str[i] - 'A']++;
        else
            arr[str[i] - 'a']++;
    }

    // 배열의 값이 가장 큰(최빈 갯수 문자열) index 초기화
    int idx_max = 0;

    // 배열을 순회하며 배열의 최대값 index 찾기
    for(int i = 1; i < sizeof(arr) / sizeof(int); i++)
    {
        if(arr[i] > arr[idx_max])
            idx_max = i;
    }

    // 배열을 순회하며 최빈 문자열의 값과 같은 값을 갖는 index가 존재하는지 확인 => '?'를 출력하기 위함
    for(int i = 0; i < sizeof(arr) / sizeof(int); i++)
    {
        // i가 현재 최빈 문자열의 index와 같을 경우 비교 연산 건너뛰기
        if(i == idx_max)
            continue;
        // 배열의 i번째 요소가 최대값 요소의 값과 같을 경우 (최빈 문자열이 하나 이상인 경우)
        if(arr[i] == arr[idx_max])
        {
            // '?'를 출력 후 프로그램 종료
            cout << "?";
            return 0;
        }
    }

    // 최빈 문자열 출력
    cout << static_cast<char>('A' + idx_max);

    return 0;
};
