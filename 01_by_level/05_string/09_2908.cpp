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

    // 입력받은 문자열을 저장
    string x, y;
    cin >> x >> y;

    // 문자열 뒤집기
    reverse(x.begin(), x.end());
    reverse(y.begin(), y.end());

    // 뒤집은 문자열을 int형으로 변환
    int x_rev = stoi(x);
    int y_rev = stoi(y);

    // 변환된 int 중 큰 값 출력
    cout << (x_rev > y_rev ? x_rev : y_rev);
}