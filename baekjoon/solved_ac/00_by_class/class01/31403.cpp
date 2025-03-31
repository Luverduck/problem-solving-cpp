#include <iostream>
#include <string>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int A, B, C;
    cin >> A >> B >> C;

    // A, B, C를 숫자로 생각했을 때의 A + B - C
    cout << A + B - C << '\n';

    // A, B, C를 문자열로 생각했을 때의 A + B - C
    // + : 두 문자열을 이어 붙인다.
    // - : 두 문자열을 숫자로 해석한 후 뺀다.
    cout << stoi(to_string(A).append(to_string(B))) - C;
}