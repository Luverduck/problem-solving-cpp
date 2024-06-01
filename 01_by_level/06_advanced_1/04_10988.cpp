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

    // 입력받은 문자열을 str에 저장
    string str;
    cin >> str;

    // 문자열의 길이
    int length = str.length();

    // 최대 비교 횟수
    int idx_max = length % 2 == 0 ? (length / 2) : (length / 2) + 1;

    // 결과 초기화
    bool result = true;

    // i번째 문자와 (length - 1 - i)번 째 문자의 일치 여부 확인
    for(int i = 0; i < idx_max; i++)
    {
        // 일치하지 않는 경우
        if(str[i] != str[length - 1 - i])
        {
            result = false; // result를 false로 변경
            break;          // 비교 연산을 중지하기 위해 break;
        }
    }

    // 결과 출력
    cout << result;

    return 0;
};
