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

    while(getline(cin, str))
        cout << str << "\n";
}