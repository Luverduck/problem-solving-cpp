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

    // 입력받은 문자열 저장
    string str;
    cin >> str;

    // 크로아티아 문자의 배열 (탐색할 문자열의 배열)
    string alphabet[] = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };

    // 루프 1회 반복당 크로아티아 문자를 하나씩 탐색
    for(int i = 0; i < 8; i++)
    {
        while(true)
        {
            // 크로아티아 문자가 발견될 경우
            if(str.find(alphabet[i]) != -1)
                // 크로아티아 문자를 '#'로 치환
                str.replace(str.find(alphabet[i]), alphabet[i].length(), "#");
            // 크로아티아 문자가 발견되지 않을 경우
            else
                // 루프 탈출
                break;
        }
    }

    // 치환된 문자열의 길이 출력
    cout << str.length();

    return 0;
}