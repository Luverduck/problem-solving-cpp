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

    // 입력받은 문자열을 저장
    string str;
    getline(cin, str);

    // 입력받은 문자열이 빈 문자열일 경우
    if(str == " ")
    {
        // 문자의 개수 0을 출력 후 종료
        cout << 0;
        return 0;
    }

    // 입력받은 문자의 갯수
    int count = 1; // 띄어쓰기가 없는 마지막 문자에 대한 보정

    // 문자열의 길이
    int length = str.length();

    // 문자열 순회
    for(int i = 0; i < length; ++i)
    {
        // 문자열의 처음과 마지막에 공백이 있는 경우는 제외
        if(i == 0 || i == (length - 1))
            continue;

        // 문자열의 i번째 문자가 공백일 경우 문자의 개수 증가
        if(str[i] == ' ')
            count++;
    }

    // 문자의 개수 출력
    cout << count;
}