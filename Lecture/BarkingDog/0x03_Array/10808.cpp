#include <iostream>

using namespace std;

int main()
{
#ifdef LOCAL_DEBUG
    freopen("input.txt", "r", stdin);
#endif

    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    // 문자열에 포함된 문자의 빈도를 저장할 배열
    int freq['z' - 'a' + 1] { 0, };

    // 입력받은 문자열 저장
    string str;
    cin >> str;

    // 문자열에 포함된 각각의 문자에 대한 빈도 계산
    for(auto& c : str)
        freq[c - 'a']++;

    // freq의 모든 요소 출력
    for(auto& i : freq)
        cout << i << " ";
}