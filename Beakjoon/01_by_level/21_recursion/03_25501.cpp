#include <iostream>
#include <string>

using namespace std;

int cnt = 0;

// ⭐ 시간 초과를 피하기 위해 문자열을 call by reference로 전달
int recursion(const string& str, int l, int r){
    cnt++;
    if(l >= r) return 1;
    else if(str[l] != str[r]) return 0;
    else return recursion(str, l+1, r-1);
}

// ⭐ 시간 초과를 피하기 위해 문자열을 call by reference로 전달
int isPalindrome(const string& str){
    return recursion(str, 0, str.length() - 1);
}

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 테스트 케이스의 수
    int T = 0;
    cin >> T;

    // 팰린드롬인지 판정할 문자열
    string S;
    for(int i = 0; i < T; ++i)
    {
        cin >> S;
        // 재귀 호출 수 초기화
        cnt = 0;
        // 팰린드롭인지 판정
        int ret = isPalindrome(S);
        // 판졍 결과와 재귀 호출 수 출력
        cout << ret << " " << cnt << "\n";
    }
}