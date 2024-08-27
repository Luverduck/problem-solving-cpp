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

    // 입력 스트림으로부터 읽은 문자를 저장할 변수
    string str;

    // 입력 스트림으로부터 한 줄을 읽고 개행 문자 '\n'를 제외한 문자열을 str에 저장
    while(getline(cin, str))
        cout << str << "\n";
}