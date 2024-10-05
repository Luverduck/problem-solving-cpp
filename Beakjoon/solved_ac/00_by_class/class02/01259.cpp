#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    while(true)
    {
        // 입력받은 숫자를 문자열로 저장
        string n;
        cin >> n;
        // 입력받은 숫자가 0일 경우 종료
        if(n == "0") break;

        // 입력받은 문자열 형태의 숫자를 뒤집기 위한 복사본 생성
        string n_rev = n;
        // 문자열 뒤집기
        reverse(n_rev.begin(), n_rev.end());

        // 원본과 비교 후 같으면 팰린드롬 수이므로 yes 출력
        cout << (n == n_rev ? "yes" : "no") << '\n';
    }
}