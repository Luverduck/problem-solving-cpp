#include <iostream>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 문자열에 포함된 알파벳 각각의 개수를 저장할 배열
    int alphabet[26] { 0, };

    // 테스트 케이스의 수 N
    int N;
    cin >> N;

    // 테스트 케이스의 수만큼 반복
    for(int n = 0; n < N; ++n)
    {
        // 비교할 두 문자열 str1, str2
        string str1, str2;
        cin >> str1 >> str2;

        // 두 문자열의 길이가 다를 경우 Impossible
        if(str1.length() != str2.length())
        {
            cout << "Impossible\n";
            continue;
        }

        // 두 문자열에 포함된 알파벳의 개수 비교
        for(int i = 0; i < str1.length(); ++i)
        {
            // str1에 포함된 알파벳의 수 가산
            alphabet[str1[i] - 'a']++;
            // str2에 포함된 알파벳의 수 감산
            alphabet[str2[i] - 'a']--;
        }

        // strfry 함수를 적용하여 str1로부터 str2를 얻어낼 수 있는지 여부
        bool flag = true;
        for(int i = 0; i < 26; ++i)
        {
            // alphabet의 모든 요소가 0이 아닐 경우 (한 쪽 문자열에만 포함된 알파벳이 있는 경우)
            if(alphabet[i] != 0)
            {
                flag = false;
                break;
            }
        }

        // flag에 따른 결과 출력
        cout << (flag ? "Possible" : "Impossible") << '\n';

        // alphabet의 모든 요소를 0으로 변경 (초기 상태)
        fill(alphabet, alphabet + 26, 0);
    }
}