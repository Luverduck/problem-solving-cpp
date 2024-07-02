#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    // 숫자를 문자열로 입력받아 저장
    string N;
    getline(cin, N);

    // 문자열을 내림차순으로 정렬 ( '0' ~ '9' )
    sort(N.begin(), N.end(), greater<>());

    // 정렬 후 결과 출력
    for(char& c : N)
        cout << c;
}