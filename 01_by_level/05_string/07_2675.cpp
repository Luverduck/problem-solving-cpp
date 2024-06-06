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

    // 테스트 케이스의 개수
    int t;
    cin >> t;

    // 테스트 케이스의 반복 횟수와 반복할 문자열
    int r;
    string str;

    // 입력받은 반복 횟수와 문자열을 저장
    while(cin >> r >> str)
    {
        // 문자열의 길이
        int length = str.length();

        // 문자열을 순회
        for(int i = 0; i < length; ++i)
        {
            // 문자열의 i번째 문자열을 r번만큼 반복 출력
            for(int j = 0; j < r; ++j)
                cout << str[i];
        }

        // 하나의 테스트 문자열을 출력한 후 줄 바꿈
        cout << "\n";
    }
}