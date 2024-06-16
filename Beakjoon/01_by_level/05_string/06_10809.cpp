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

    string str;
    cin >> str;

    // 영문 알파벳 개수를 길이로 하는 배열의 모든 요소를 -1로 초기화
    int arr_pos['z' - 'a' + 1];
    fill_n(arr_pos, sizeof(arr_pos)/sizeof(int), -1);

    // 배열의 길이 반환
    int length = str.length();

    // 문자열 순회
    for(int i = 0; i < length; ++i)
    {
        // i번째 문자가 처음 만나는 문자일 경우 인덱스 i를 배열에 저장
        if(arr_pos[str[i] - 'a'] == -1)
            arr_pos[str[i] - 'a'] = i;
    }

    // 배열의 모든 요소 출력
    for(int idx : arr_pos)
        cout << idx << " ";
}