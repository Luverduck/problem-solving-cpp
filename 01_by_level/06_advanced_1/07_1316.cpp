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

    // 입력받은 문자열의 수
    int n;
    cin >> n;

    // 그룹 단어가 아닌 문자열의 수
    int count = 0;

    // 루프 안에서 사용할 변수
    string str;
    int idx;
    int length;

    // 입력받은 문자열의 수만큼 반복
    for(int i = 0; i < n; ++i)
    {
        // 입력받은 문자열 저장
        cin >> str;

        // 입력받은 문자열의 길이
        length = str.length();

        // 문자열 순회 인덱스 idx를 0으로 초기화
        idx = 0;

        // 인덱스가 문자 'a'부터 'z'에 대응하는 bool 자료형 배열 선언
        bool is_include['z' - 'a' + 1] = { false, };

        // 입력받은 문자열을 순회
        while(idx < length)
        {
            // 문자열의 idx번 째 문자 str[idx]가 이전에 나오지 않았다면(false)
            if(is_include[str[idx] - 'a'] == false)
            {
                // 문자 str[idx]가 이전에 나왔음(true)으로 변경
                is_include[str[idx] - 'a'] = true;
                // 문자열 순회 인덱스 idx 증가
                idx++;
            }
            // 문자열의 idx번 째 문자 str[idx]가 이전에 나왔다면(true)
            else
            {
                // 문자열의 idx번 째 문자와 (idx - 1)번 째 문자가 같을 경우 (연속으로 나타난 문자일 경우)
                if(str[idx] == str[idx - 1])
                    // 문자열 순회 인덱스 idx 증가
                    idx++;
                // 문자열의 idx번 째 문자와 (idx - 1)번 째 문자가 다를 (연속으로 나타난 문자가 아닐 경우)
                else
                {
                    // 그룹 문자가 아닌 문자의 수 증가
                    count++;
                    // 루프 탈출
                    break;
                }
            }
        }
    }

    // 입력받은 문자의 수에서 그룹 문자가 아닌 문자의 수를 뺀 값 출력
    cout << n - count;

    return 0;
}